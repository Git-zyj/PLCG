/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 *= (arr_2 [i_0] [i_1]);
                var_18 = (max(var_18, 22400));

                for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_19 ^= var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_2 [i_3] [i_4]) ? (((-127 - 1) % var_14)) : 0));
                                var_21 = 51939;
                                arr_13 [i_0] [i_2] [i_4] [i_1] [i_4] [i_1] = var_11;
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= (((((~((min(90, 32750)))))) ? (min((~17), (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))) : (((((arr_4 [i_0] [i_1] [19]) | (arr_5 [i_0] [i_0] [1])))))));
                                arr_15 [i_0] [8] [i_0] [i_2] [i_1] [i_0] [i_4] = ((((min(26822, 195))) ? (max((((-32767 - 1) ^ var_13)), (((arr_10 [i_0] [i_2] [i_3 - 2] [i_1]) ? var_11 : var_13)))) : ((min((-32030 | 2420701642), ((((arr_1 [i_4]) ? (arr_9 [i_3] [i_2] [i_1] [i_0]) : (-32767 - 1)))))))));
                            }
                        }
                    }
                    var_22 = (((((arr_9 [i_0] [i_1] [i_1] [i_2]) ^ 4294967268)) ^ -32030));
                    var_23 = (((arr_5 [i_2 + 1] [i_1] [16]) ? (arr_4 [i_0] [i_2 - 1] [i_2 - 1]) : var_15));
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_24 = (((((arr_7 [8] [i_1] [i_0] [i_0] [i_5 + 1] [12]) >> (((var_13 * var_3) - 911307269253466650)))) >= (((-32767 ? ((1 ? 90 : 0)) : (arr_12 [i_5 - 1] [i_5] [i_1] [8] [i_1] [i_0]))))));
                    arr_18 [i_1] [i_1] [12] = ((((-(min(var_10, 17862198085521957998)))) << (!2423207867)));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_5] [i_1] [i_0] = ((-(arr_1 [i_5 - 1])));
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_1] = (min((~-28269), ((84 << (var_13 - 17601066476620664161)))));
                                var_25 = ((((((var_1 - 54) - var_7))) ? (((((var_12 ? 166 : 584545988187593591))))) : ((1317324061 ^ (((min(165, (-32767 - 1)))))))));
                                arr_26 [i_0] [i_7] [i_1] [i_5 - 1] [i_1] [i_0] [i_0] = (~var_12);
                            }
                        }
                    }
                    var_26 = (8312772938422019509 <= 65533);
                }
                arr_27 [i_1] [i_0] [i_1] = (min(((32767 ? var_15 : (arr_17 [i_0]))), (((-32042 || (arr_17 [i_0]))))));
            }
        }
    }
    var_27 = (3 ? (-127 - 1) : 89);
    #pragma endscop
}
