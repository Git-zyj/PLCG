/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 -= -28847;
                            arr_12 [11] [i_1] [i_0] [i_3] [i_2] = (47654 <= var_2);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_13 -= (((((-1065882262 ? 32760 : (arr_8 [i_0])))) ? (max(var_8, (arr_9 [i_0] [i_1] [i_4] [i_5]))) : 128));
                            var_14 -= ((((max((var_2 > 604554230), (((arr_0 [11]) ? 604554230 : 0))))) ? var_11 : -126));
                            arr_19 [i_0] [i_1] [i_4] = (((((604554210 ? var_2 : (arr_11 [i_0 + 1] [i_1])))) ? var_11 : var_11));
                            arr_20 [i_0] [i_5] = 214;
                        }
                    }
                }
                var_15 = (((((((arr_13 [11]) ? (arr_18 [7] [i_0] [2] [i_1] [4] [i_1]) : 604554224)))) ? (((~((var_5 ? (arr_6 [i_0] [i_0] [i_1]) : (arr_15 [i_1])))))) : ((var_7 + (arr_16 [2] [i_0] [i_0] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((-604554245 ? (!16777088) : (arr_21 [1] [i_1] [6])))))));
                            var_17 &= (max((min((arr_23 [i_0] [i_1] [12] [i_7]), (var_10 + var_1))), (arr_2 [i_0] [i_7])));
                            arr_25 [i_0] [i_6] = ((((((arr_22 [i_6] [i_7]) ? (2159610472929324025 / 604554222) : (arr_3 [i_0 + 1] [i_1] [i_1])))) ? ((1 >> (((((arr_4 [i_1]) ? 256 : (arr_5 [i_7]))) - 205)))) : (arr_15 [i_0])));
                            var_18 = (((((-6511611132946241686 ? 12 : 604554222))) ? (max((arr_10 [6] [i_1] [i_6] [i_7] [1]), (((arr_11 [i_1] [4]) ? 0 : var_0)))) : ((((((18316695111372178180 ? (arr_7 [i_7] [i_6] [11] [2]) : var_2))) ? 1378000737 : (arr_9 [0] [9] [i_6] [i_6]))))));
                            var_19 += (max(((~((7256500511082444349 ? 248989417406676572 : (arr_24 [i_0] [i_0] [i_0] [i_1] [11] [i_7]))))), ((((((max(var_10, (arr_22 [8] [11]))))) < (((arr_4 [i_6]) ? 0 : var_0)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 |= ((((((min(1, var_9))) ? 17258297342545397283 : (~1)))) ? var_2 : var_0);
    #pragma endscop
}
