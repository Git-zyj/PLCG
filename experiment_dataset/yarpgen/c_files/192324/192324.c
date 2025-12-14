/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~-1) == ((-(~var_8)))));
    var_12 = ((((var_10 ? 1073741824 : ((1 ? 0 : var_7)))) / ((max(4294967295, 32768)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 &= 15360;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [16] &= (((((var_5 ? 17592051826688 : (arr_15 [i_0] [i_0] [i_0] [16] [i_4])))) ? var_9 : (((arr_0 [8]) ? (((arr_8 [i_0] [i_2] [i_3] [i_0]) ? var_3 : var_6)) : ((~(arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                arr_19 [i_0] [2] [1] [i_1] [16] = (min(8445901296829793596, ((((-4659885051182800852 ? -6884653156361577089 : (arr_4 [i_0] [i_1] [i_4 + 1]))) | (-4531957305826074216 | 131071)))));
                            }
                        }
                    }
                }
                var_14 = ((-1807981545 / ((var_10 ? var_9 : (max(7673645450239218202, var_5))))));
            }
        }
    }
    #pragma endscop
}
