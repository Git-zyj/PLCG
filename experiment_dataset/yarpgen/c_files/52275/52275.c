/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((((-184296756 ? 8670526309329744646 : -512)) & var_7)) & var_7));
    var_13 -= ((~((((min(1306233005, -1254823119436450754))) & ((-27368 ? 1299844521659498328 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((1048544 ? 30720 : -5977321963640469096));
                    arr_9 [i_0] [i_0] = (min((~16773), (min((min((arr_0 [i_2 - 1]), var_1)), 126))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [12] [2] [0] [12] &= 2251799780130816;
                        var_14 = (((((min((arr_5 [1] [12] [i_0]), var_6))) ? (((min((arr_11 [i_0] [i_1 - 2] [i_2] [17]), 2778)))) : (arr_0 [1]))) * (((-(arr_6 [i_0] [i_0 + 2] [i_2 - 1] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
