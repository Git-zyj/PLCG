/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_13;
    var_17 *= 3858117957;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((-82 ? 2865 : 25191));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((var_8 ? 65534 : 8192))))));
                            arr_11 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = (((((max(var_2, (arr_2 [i_3] [i_1 - 2])))) >= ((var_1 ? var_13 : var_8)))) ? (arr_6 [i_0] [i_2] [i_3]) : (max(var_10, (arr_5 [i_1 + 2] [i_3 - 1] [i_3 - 2] [i_3]))));
                            var_19 |= arr_8 [i_0] [i_0] [i_2] [i_3];
                            arr_12 [i_0] [i_1] [i_2] = (((!-4302762459369440625) % (arr_9 [i_2] [i_2] [i_1 + 3] [i_2] [i_0])));
                            arr_13 [i_0] [i_0] [i_2] [i_0] = (((!3376228905) >> (((arr_2 [i_0] [i_1]) % var_6))));
                        }
                    }
                }
                var_20 = ((!((((arr_2 [i_1] [i_1]) ? var_15 : (arr_10 [i_1] [i_1] [i_1] [i_1 + 3] [i_1]))))));
                var_21 -= ((+((((arr_8 [i_0] [i_1] [i_0] [i_1]) < var_7)))));
                var_22 ^= (max(var_13, (((arr_6 [i_0] [i_0] [i_1 + 2]) ? (arr_6 [i_0] [i_1 - 2] [i_1]) : (arr_6 [i_0] [i_0] [i_1 - 2])))));
            }
        }
    }
    var_23 = 7;
    var_24 = max(var_14, var_13);
    #pragma endscop
}
