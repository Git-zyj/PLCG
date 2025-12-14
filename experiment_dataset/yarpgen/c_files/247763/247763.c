/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (min((((((max(-2001033827, -4310614475193435848))) ? -5014000971236234456 : 936273844))), (arr_13 [i_1] [i_1])));
                                var_19 = (max(var_15, ((31 ? (13 | -936273845) : (arr_2 [i_0] [i_3])))));
                                var_20 = (min(var_20, ((~((3930144685 ? 4288062748166403241 : (max(104, 255))))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] = (((((0 < (max((arr_4 [i_1] [i_1] [i_1]), 18446744073709551590))))) < (min((((arr_0 [i_1]) ? var_15 : (arr_1 [i_0]))), var_15))));
            }
        }
    }
    var_21 += var_12;
    #pragma endscop
}
