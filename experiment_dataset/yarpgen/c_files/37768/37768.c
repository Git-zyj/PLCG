/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((((arr_3 [i_1 - 1] [i_0 + 3]) >= (arr_3 [i_1 - 1] [i_0 - 1]))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (max(2715208124241384550, ((((min(2715208124241384550, -2715208124241384550)) >= (2715208124241384531 / 8160))))));
                                arr_15 [i_3] [i_3] = (((-2715208124241384531 || 255) << (-2715208124241384550 + 2715208124241384555)));
                                var_13 = (-1 && -86);
                                arr_16 [i_3] [i_3] [i_3] [i_3] [1] = (max(-314019657994797089, 3581576271));
                            }
                        }
                    }
                    var_14 = (((-16 - 2170343720) != (((~(1 - 15))))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_15 = ((((-(arr_13 [i_0] [i_1 - 1] [i_0 - 1] [15] [i_1 - 1] [i_1]))) / (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 + 4] [i_1 - 1] [i_0])));
                    var_16 = -824150864669397621;
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_17 = ((((var_6 + (arr_9 [i_0] [i_0] [i_0] [i_0]))) >= 69));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_18 = (((arr_19 [i_1 - 1] [i_1 - 1] [i_1]) && var_0));
                        var_19 = (((arr_23 [i_7 + 1] [i_0 + 3] [i_1 - 1] [i_7 + 1] [i_1] [i_0]) != ((((arr_0 [i_1 - 1]) ? (arr_8 [i_0 + 3] [18]) : (arr_14 [i_0] [i_0] [i_6] [i_0] [0]))))));
                        var_20 = ((69 || (arr_13 [i_1 - 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1])));
                        var_21 = (((arr_8 [i_0 + 2] [i_0 - 1]) - (arr_8 [i_0] [i_0 + 4])));
                        var_22 = (((arr_6 [i_0 - 1] [i_1 - 1] [i_7 - 1]) && 84));
                    }
                    var_23 += ((!(arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])));
                    var_24 = 187;
                    var_25 = (var_10 || 1073741824);
                }
                var_26 = (!var_0);
                var_27 ^= (arr_4 [4] [i_1 - 1] [15]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_28 ^= (69 + 4294967295);
                arr_28 [i_9] = 16;
            }
        }
    }
    var_29 = -var_6;
    #pragma endscop
}
