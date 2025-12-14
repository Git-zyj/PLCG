/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_20 *= ((((max((((!(arr_1 [8] [i_0])))), 8883811491958081611))) ? ((((arr_3 [i_0 - 3]) ? 0 : -508495032))) : (((3525817918 <= 4) | var_4))));
        var_21 -= ((((~(arr_2 [i_0 - 1]))) << (((((arr_2 [i_0 - 2]) + 1372272079018042069)) - 35))));
        var_22 += (max(1, ((0 ? 1 : 1))));
        var_23 = (min(var_23, (((((min((min(13651354503986147002, 37344)), ((min(4294967295, 6)))))) ? (((((-30492 ? -1755986090 : 536870880))) ? var_8 : (arr_0 [i_0 - 3]))) : (((13535 && -18) ? ((3087853519022032046 ? -282965306 : 604269476)) : (!-837012127493094545))))))));
        var_24 = (max(var_24, ((max(-725406025552091628, ((-725406025552091628 ? 222 : -934925032)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_25 = ((((0 ? 15560 : 15344)) == 221));
        arr_6 [i_1] [20] = ((!(-7314078153837432249 && -3037391533150625467)));
        var_26 = (max(var_26, ((((((254 ? 42 : 1272138661))) ? (1 == 127) : 0)))));
    }
    var_27 = (max(var_27, (!var_15)));
    #pragma endscop
}
