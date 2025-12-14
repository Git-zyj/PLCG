/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(((var_5 ? var_5 : var_5)), (((var_4 ? var_7 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 = 0;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                    {
                        var_12 += (((~0) ? (arr_4 [i_0] [i_1] [i_1]) : 18));
                        arr_10 [i_0] [15] [i_1] [i_0] = (((!119) ? (arr_9 [i_3 + 1] [i_3 + 1] [12] [i_0] [i_0]) : (((arr_8 [i_3 + 1] [i_3] [i_0] [i_3 + 1] [i_3] [i_3]) ? ((((4665523477784579169 || (arr_1 [i_0]))))) : (arr_8 [i_0] [i_1] [i_0] [1] [i_3] [i_3])))));
                        var_13 = ((6983682654717377951 ? (-9223372036854775807 - 1) : 911621922534743347));
                        arr_11 [i_0] [i_0] = ((((((!126) ? (-127 - 1) : (~2333430739)))) ? (~1073676288) : (arr_0 [i_2] [15])));
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_4 + 1] = (((((arr_3 [i_0]) + ((((arr_7 [i_4]) ? var_8 : -11692))))) << (((!(!var_0))))));
                        arr_15 [24] [i_1] [i_0] [19] [i_0] = ((~(~28)));
                        var_14 -= ((-(!911621922534743326)));
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [21] [i_0] [i_1] [4] = ((var_8 & ((min(-11692, 83)))));
                        var_15 = (max((-2147483647 - 1), 223));
                        arr_19 [i_0] [i_0] = (max((((-22 && 32767) ? (-911621922534743348 - -28) : -33)), ((max(((0 ? 33235 : var_8)), 64644)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        arr_22 [9] [8] [i_0] = (((arr_17 [14] [20] [i_6 + 1] [14] [i_6 + 1] [i_6 + 1]) > (arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                        var_16 += var_7;
                        arr_23 [i_0] [1] [i_2] [i_6 + 1] [i_0] = (((((~(arr_0 [18] [11])))) ? ((((arr_13 [i_0] [i_1] [i_2] [5]) >> (((arr_6 [12]) - 844700187))))) : 1099511627775));
                        arr_24 [i_1] [14] [i_2] [i_6] |= 0;
                        var_17 = (arr_1 [2]);
                    }
                }
                var_18 = ((((!((((arr_16 [i_0] [i_1] [i_0] [17]) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) : var_2))))) ? ((((((var_4 ? (arr_5 [i_0]) : 5248405391715858045)) == (((0 >> (76 - 72)))))))) : (arr_7 [20])));
                var_19 = ((((((arr_6 [i_1]) & (arr_6 [i_0])))) ? (((arr_7 [i_0]) ? (arr_16 [i_0] [i_1] [i_0] [i_1]) : (arr_7 [i_1]))) : (~var_5)));
                arr_25 [i_1] [i_1] |= ((!(((~(var_1 | var_9))))));
            }
        }
    }
    var_20 *= -1504;
    #pragma endscop
}
