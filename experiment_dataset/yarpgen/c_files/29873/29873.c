/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(74, -26213)))) && var_3));
    var_11 = ((!-1) ? (max(var_8, var_0)) : ((4494938765170402570 ? (13951805308539149045 ^ 8149) : (!18328883487409481984))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((!((((!-8149) * ((8149 ? var_1 : var_9)))))));
                    var_13 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = max(-7284, (((!(((var_4 ? -1 : -1)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] = max(((((!(arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? ((8191 ? var_5 : 4095)) : var_0)), (max((max(68719476735, -93)), var_5)));
                                arr_15 [i_0] = ((!((((arr_5 [i_0 + 3]) ? var_0 : (arr_13 [i_0] [i_1 - 2] [i_0 - 1] [i_0 - 1] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
