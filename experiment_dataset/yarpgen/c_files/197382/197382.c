/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((min((min(1, var_3)), (var_2 && 20702)))) ? var_8 : var_2));
    var_11 = (min(var_11, (((min((((1 ? 1 : 1))), (max(2147483647, var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((((((-(arr_1 [0])))) ? (min(1785356728958482157, 1)) : ((2284869650 ? 16661387344751069465 : -98))))) ? (max(((min(var_3, var_8))), ((984201353 ? -32750 : 1)))) : ((-((-(arr_0 [i_0]))))))))));
                var_13 = (max(1, (max(1, var_1))));
                var_14 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : ((~(arr_1 [i_0])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_15 = 16345;
        var_16 -= (((min((1 & var_5), (max(16661387344751069458, (arr_5 [i_2]))))) < var_2));
    }
    #pragma endscop
}
