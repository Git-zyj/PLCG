/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = ((var_12 ? (arr_5 [i_0] [i_1] [i_2]) : -2339));
                    arr_9 [i_0] = -6530365492415097432;
                    arr_10 [i_0] [i_1] [i_0] [i_0] = 63;
                    var_19 = ((arr_7 [i_0] [i_0] [i_0]) % (arr_7 [i_0] [i_1] [i_2]));
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((min((!var_5), ((var_7 % (arr_6 [i_0] [i_1] [i_3]))))));
                    var_20 *= (min(27961, 24));
                    arr_14 [i_0] [i_3] [i_0] [i_3] = ((((min((-2339 + var_12), (arr_0 [i_1])))) && (((65535 ? (arr_3 [i_3]) : 12068)))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_18 [13] [i_1] [i_0] = ((~(((arr_15 [i_4] [i_4] [i_4] [i_4]) ? 260046848 : (arr_7 [i_0] [i_1] [12])))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (min((~var_13), ((min((var_2 == var_9), (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                    var_21 = var_17;
                    arr_20 [i_1] [7] [i_0] = (min(-var_17, (arr_16 [11] [i_1])));
                    var_22 = ((((((arr_7 [i_0] [i_0] [i_4]) | var_13))) ? (((((!(arr_6 [i_0] [i_0] [i_0])))) * var_16)) : (((var_6 >= var_10) ? var_9 : ((((arr_7 [i_0] [i_1] [i_4]) && (arr_3 [i_4]))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, 85));
                    var_24 = ((arr_22 [i_5] [i_1] [i_1] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
                    arr_23 [i_1] &= var_0;
                    arr_24 [i_1] &= (((arr_16 [i_0] [i_0]) && var_16));
                }
                var_25 |= ((!((min((((arr_11 [i_0] [i_1]) * 10243660280240429472)), (min((arr_16 [i_1] [i_0]), (arr_17 [i_0] [i_0] [i_1] [i_1]))))))));
                var_26 &= ((((((!(arr_2 [i_0])))) * (((arr_17 [i_0] [i_0] [i_1] [i_0]) ? (arr_15 [8] [8] [i_0] [8]) : 0)))));
            }
        }
    }
    var_27 = var_7;
    #pragma endscop
}
