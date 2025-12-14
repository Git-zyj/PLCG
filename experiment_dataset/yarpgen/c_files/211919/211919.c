/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(((min(var_6, -var_4))), ((-109 | (18446744073709551595 - var_4)))));
                var_15 = (min(var_15, (((((((var_3 + 2147483647) << (var_9 - 1656375845)))) & ((((min(var_9, var_5))) ? (var_3 + 21) : (((min(var_0, 254)))))))))));
                arr_7 [i_0] = (((min((arr_5 [i_0] [i_1 + 1]), (arr_5 [i_0] [i_1 - 1])))) ? ((min(var_1, (arr_5 [i_0] [i_1 - 2])))) : ((((arr_5 [i_0] [i_1 + 2]) != 2419655175))));
                var_16 = ((((min((arr_1 [i_0] [11]), (((var_6 && (arr_0 [i_1 + 2]))))))) ? 38 : (--65535)));
            }
        }
    }
    var_17 = ((~(((min(6, 1))))));
    var_18 = (max(var_18, var_1));
    #pragma endscop
}
