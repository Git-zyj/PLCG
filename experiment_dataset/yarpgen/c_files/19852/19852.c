/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (!1020836584);
                    var_16 = (min(var_16, 1315304770));
                    var_17 = (max((max(605080049, (((!(arr_0 [10] [i_1])))))), (((((-1998688704 ? var_2 : -1975624102)) / 1975624101)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = ((+(((arr_4 [i_0] [i_3]) >> (((arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 2]) - 618813621))))));
                        arr_11 [i_1] [i_2 + 3] [i_1] [i_2 + 3] [i_1] [i_1] = 5254564959253446226;
                        arr_12 [8] [i_1] [i_3] = ((-1 >= ((((arr_10 [i_2 - 1] [i_2 + 4] [i_2 + 1] [i_2 - 1]) || -1975624101)))));
                        arr_13 [i_1] = (~4095);
                    }
                }
            }
        }
    }
    var_19 = (~var_4);
    #pragma endscop
}
