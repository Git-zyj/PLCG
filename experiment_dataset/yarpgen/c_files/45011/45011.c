/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] = (((((-(1 - 76)))) ? (arr_6 [i_1] [i_2]) : ((((var_9 ^ var_8) > (4294967293 / 1))))));
                            arr_14 [i_2] [i_2] [i_2] [i_0] &= 26;
                        }
                    }
                }
                var_16 = ((+(min((!var_12), (arr_5 [i_0] [i_1])))));
                var_17 = arr_12 [i_0 + 2] [i_0 + 1];

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_18 = ((!(((-(9223372036854775792 >= 9223372036854775782))))));
                    var_19 ^= -9;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_21 [i_5] [i_0] [i_0] [i_0 - 1] = (arr_7 [i_0]);
                    arr_22 [i_0] [i_0] = (arr_17 [i_0 + 2]);
                    arr_23 [i_0] [i_0] [i_0] [i_0 - 1] = ((!((max((arr_18 [i_0 + 2] [i_0 + 2]), var_3)))));
                    arr_24 [i_0] [i_0 + 1] [i_0 + 1] = (arr_16 [i_1] [i_1]);
                    arr_25 [i_5] [i_0 + 1] [i_5] [i_0] = arr_5 [i_5] [i_5];
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_20 = (min(var_20, ((17447111646350671704 ? 1535 : ((((-127 ? (arr_16 [i_6 + 1] [i_1]) : (arr_3 [i_0 - 1]))) << (((min(18446744073709551613, (arr_3 [i_0 + 2]))) - 4109627938))))))));
                    arr_29 [14] [i_0] [i_0] [14] &= 999632427358879901;
                }
                arr_30 [i_0] [i_0] = (min(9223372036854775793, (((((var_1 && (arr_0 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
