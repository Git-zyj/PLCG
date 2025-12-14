/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 *= ((((~((max(46, (arr_3 [i_0])))))) > ((min(0, -7)))));
                arr_5 [i_0] [i_1] = (arr_3 [i_0]);
                arr_6 [i_0] = ((+(((arr_0 [i_1]) >> 1))));
            }
        }
    }
    var_21 = (min(((((min(14, -35))) ? (~18057980296840032007) : (((min(232, 237)))))), ((max(195921461, 0)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_22 -= (arr_10 [i_4] [i_3]);
                    arr_13 [i_3] = (~195921461);
                    var_23 *= (((arr_8 [i_3]) ? (arr_9 [i_4] [i_3]) : (arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = 1;
                                arr_21 [i_2] [i_3] [i_3] [i_3] [i_3] = ((~(arr_10 [i_2] [i_5])));
                            }
                        }
                    }
                    arr_22 [i_2] [i_3] [i_4] = (!1);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_8] = -7;

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_31 [i_7] [i_3] = ((((13788682518233097809 ? 255 : -5427)) % 35909));
                            arr_32 [i_2] [i_3] [i_7] [i_8] [i_8] [i_3] = ((~(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_24 -= ((-(arr_23 [i_2])));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_25 *= ((!(~13017849313048803127)));
                        arr_35 [12] [i_3] = (arr_12 [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_3] = (-20086 ? 1 : 1);
                        arr_39 [i_2] [i_3] [i_3] [i_3] [i_11] = (arr_19 [i_2] [i_2] [i_2] [i_7] [i_11]);
                    }
                    var_26 += (arr_23 [i_3]);
                    arr_40 [i_3] = 249;
                }
                arr_41 [i_3] [i_3] [i_3] = -21944;
                arr_42 [i_2] [i_3] = (i_3 % 2 == 0) ? ((((((((0 ? 118 : (arr_15 [i_3] [i_3]))) << (((((arr_16 [i_3]) ? 5 : (arr_14 [i_3] [i_2] [5] [i_3]))) - 5))))) ? (max(-20, 9223372036854775807)) : (((min(25576, 638223783))))))) : ((((((((((0 ? 118 : (arr_15 [i_3] [i_3]))) + 2147483647)) << (((((arr_16 [i_3]) ? 5 : (arr_14 [i_3] [i_2] [5] [i_3]))) - 5))))) ? (max(-20, 9223372036854775807)) : (((min(25576, 638223783)))))));
            }
        }
    }
    var_27 = var_14;
    #pragma endscop
}
