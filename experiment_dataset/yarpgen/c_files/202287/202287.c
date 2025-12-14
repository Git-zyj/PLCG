/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = (min((min(6869, 8093207090296921874)), var_0));
                    var_17 = 28033;
                    var_18 = ((((!(arr_9 [8] [8] [i_2 - 1]))) ? (min((arr_3 [i_1] [i_2 + 2]), var_10)) : (!var_12)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((2068 ? -111421919505255746 : 42227))) ? ((((min(1, 7068200412838020633))) ? (arr_15 [i_5] [i_3]) : (((arr_15 [i_3] [i_3]) | 0)))) : ((((!(arr_10 [i_3]))))))))));
                    var_20 -= ((2822551717437014233 - (max(var_3, 1093084836))));

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_21 -= (2247574166774019105 & -15859);
                        var_22 -= (-25 + 57);
                    }
                    arr_21 [i_3] [i_3] [i_5] = 0;
                }
            }
        }
    }
    var_23 &= (min((((((-7583065642847057665 ? 65521 : 3133742188385808352))) ? (~var_11) : ((195 << (1214493250 - 1214493246))))), ((min(53521, (!20548))))));
    #pragma endscop
}
