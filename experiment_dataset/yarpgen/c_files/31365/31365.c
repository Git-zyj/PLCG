/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((((max(756, 1224))) ? -855496159 : ((min(-26960, 5302)))))) ? (max(((-23 ? 1216 : 0)), ((725787333 ? 64280 : 81)))) : (max(9, ((64280 ? 62 : -1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (~(max(-746171152, 65)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_11 = 2146435072;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (min(var_12, 58));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = -855496159;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_13 = ((((((4250 ? 1224 : 4760)))) ? (max(1967505177, ((-854560441 ? 22 : -3)))) : 21209));
                            arr_14 [i_4] [i_1] [14] [i_1] [i_0] |= -50;
                            var_14 = (max(var_14, -39158));
                        }
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_15 = (max(var_15, (-2147483647 - 1)));
                        arr_17 [i_1] [i_2] [i_5] = 0;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 = ((~(min(-876146889, 2147483647))));
                        var_17 = max((min(-88, 1604672344)), ((-((85392259 ? -2146435072 : 53881)))));
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_18 = (min(855496159, ((max(113, -41)))));
                            arr_27 [i_8] [i_7] [i_7] [i_2] [i_0] [i_0] [i_0] = (((!(((855496142 ? 6 : -1998801698))))));
                        }
                        var_19 = ((((max(-876146889, -855496159))) ? (!2147483647) : (~0)));
                        var_20 |= (min((max((min(53356060, 47896)), 47878)), (((max(-1, 0))))));
                    }
                    var_21 |= ((2146435072 ? 29635 : 1428743918));
                    var_22 = (max(((((min(65506, 0))) ? (max(208, -893870594)) : 124)), (max(1428743921, 23))));
                }
                var_23 |= (((((((min(-64, 1428743921))) ? 33 : 496))) ? 0 : -19878));
            }
        }
    }
    #pragma endscop
}
