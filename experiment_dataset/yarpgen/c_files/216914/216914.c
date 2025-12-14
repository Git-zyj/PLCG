/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (((((var_17 ? -3842 : var_6))) ? var_14 : 5804216789059355337));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = ((((((arr_2 [i_0] [i_1 + 3] [i_1 + 3]) ? (arr_2 [i_0] [i_1 - 1] [i_2]) : 0))) ? 5804216789059355308 : ((-1 ? 12642527284650196278 : (arr_2 [i_0] [i_1 - 4] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2 - 1] [i_2] = (((arr_4 [i_0]) ? 2096013226 : (((((54638 ? 45 : -2096013226))) ^ (((arr_0 [1]) ^ 15963020825780736077))))));
                    arr_9 [i_2] = ((!(((~(arr_0 [i_1 + 1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_20 ^= (arr_6 [i_0] [i_0 + 1] [i_0 + 1]);
                            var_21 -= (12457554552947797364 || 0);
                        }
                        for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_11 [i_5] [i_3] [i_2] [i_3] [2])));
                            arr_16 [i_5] [i_2] [i_2] [i_2 + 1] [i_2] = 2483723247928815538;
                        }
                        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_23 &= (((arr_12 [i_6] [i_1 - 1] [i_6 - 2] [i_3] [i_6]) ? -17194 : (arr_12 [i_0] [i_0] [i_6 - 2] [i_3] [i_6 - 2])));
                            arr_19 [i_0 + 1] [i_1] [i_1 + 1] [i_2 + 4] [i_3] [i_2] = (((arr_2 [i_1 - 3] [i_1] [i_6 - 2]) ? 5804216789059355337 : (arr_14 [i_2] [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 1])));
                            arr_20 [i_6] [i_3] [i_2] [i_1] [i_0 - 1] = (((arr_2 [i_6 - 1] [i_2 + 4] [i_0 + 1]) + -6770902095411539908));
                        }
                        arr_21 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = (!232);
                    }
                }
            }
        }
    }
    #pragma endscop
}
