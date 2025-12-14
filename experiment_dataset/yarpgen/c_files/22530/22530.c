/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((arr_3 [i_0] [i_0] [i_0 - 2]) > ((min((20508 ^ -20509), -20502))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [3] [i_1] [i_1] [i_1] = (min(-2790, (min(2285887431, 9299))));
                    var_13 = (min(var_13, ((((10704716287873953747 >= 3) == var_7)))));
                }

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_14 = (min(var_14, ((((((arr_4 [i_0 - 1]) ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2]) : (arr_11 [i_0 - 1])))) ? ((((((~(arr_10 [i_0] [i_1] [i_3] [i_1])))) ? (min(1492196430, var_4)) : 4039808462238188499))) : (min((((var_2 ? 0 : var_6))), ((109 ? 32767 : -6606368977440104733))))))));
                    var_15 = (!2789);
                    var_16 = ((((~(arr_6 [i_0 + 1] [i_0]))) < (((arr_6 [i_0 + 1] [i_0]) ? (arr_6 [i_0 + 1] [i_0 - 1]) : var_8))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_4] [i_4] = (((~109) ? -7 : 1));
                    var_17 *= (((((max(26428, var_6))) ? 34845880 : ((2857661616 ? var_10 : var_2)))));
                    var_18 = (max(var_18, ((((((((min(2186679980, 2186679980))) || (!9442442260239776075)))) * (~1))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0 + 1] &= (max(((0 ? (arr_13 [i_0 - 2] [i_1] [i_0] [i_0 + 1]) : var_10)), (((!var_7) >> (((min(9442442260239776075, var_1)) - 9442442260239776062))))));
                    var_19 = ((((((arr_17 [i_0] [i_0 - 1]) ? (arr_6 [i_0 - 2] [i_0 - 1]) : (min(10704716287873953747, 4))))) ? (((arr_13 [i_0] [i_5] [i_0] [i_0]) ? ((4294967295 ? 4294967283 : (arr_17 [8] [8]))) : -26245)) : (max(4294967295, 96))));
                }
            }
        }
    }
    var_20 -= (var_0 & var_0);
    var_21 = (max(var_21, -58));
    #pragma endscop
}
