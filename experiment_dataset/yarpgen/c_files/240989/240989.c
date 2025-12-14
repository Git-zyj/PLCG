/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!16969978598821803370);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_20 = (min(var_20, (((max((arr_7 [18] [i_1] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_5 [i_3] [9]) ? (!-124) : (var_2 > 5006102406674800924)));
                                var_22 = (((max((arr_2 [i_1] [i_0]), (min(-5539282286048516529, -17)))) / (((((min((arr_2 [i_4] [13]), var_4))) ? 23455 : 0)))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] = (min(var_8, (((min(var_3, (arr_4 [i_4] [i_3] [i_2]))) - -2008445217695879413))));
                            }
                        }
                    }
                    arr_15 [i_2] [4] [i_0] = 30720;
                }
                arr_16 [i_0] [i_1] = var_5;

                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_23 = (((var_2 ? ((((arr_12 [i_5] [i_5] [i_0] [i_0] [i_0] [i_0]) ? (arr_19 [i_1]) : 122))) : var_1)));
                    arr_21 [i_5] [17] [i_0] = ((var_12 < (min(var_1, (arr_0 [i_5 - 2] [i_5 + 2])))));
                    arr_22 [i_0] [i_1] [i_5] |= (((~(arr_7 [i_0] [i_1] [i_5] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
