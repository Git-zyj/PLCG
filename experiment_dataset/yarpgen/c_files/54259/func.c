/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54259
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((+(-4258524905575060032LL))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((((long long int) arr_1 [i_0 + 1])) / (((/* implicit */long long int) ((arr_1 [i_0 - 2]) / (arr_1 [i_0 - 2])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) -4258524905575060045LL);
        var_12 = ((/* implicit */_Bool) var_2);
        arr_3 [i_0] = arr_0 [i_0 - 2];
    }
    for (int i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_4))));
        var_14 = (_Bool)0;
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 - 2])) & (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) min((arr_8 [i_1] [(signed char)11]), (((/* implicit */unsigned long long int) ((signed char) arr_5 [i_2])))));
            arr_10 [(signed char)18] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) var_1)), (arr_9 [(short)5])));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((((+(((/* implicit */int) var_5)))) > (((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_5])) * (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_4 - 1] [i_4] [i_5])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_3 + 1] [i_4 - 1] [i_5])))))));
                            var_17 = ((/* implicit */short) arr_9 [i_4]);
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [(signed char)2] [i_5])) ? (((long long int) ((unsigned long long int) var_6))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_16 [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 - 1])))))));
                            arr_20 [i_5] [i_5] = ((/* implicit */signed char) var_9);
                            var_19 |= ((/* implicit */signed char) min((max((arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_3]), ((((_Bool)1) ? (4258524905575060031LL) : (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) (_Bool)1))));
                        }
                        var_20 = ((/* implicit */int) arr_15 [i_4] [9] [i_2] [i_2] [9]);
                        arr_21 [i_1] [i_2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((int) 754327173));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (var_7)));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 816435329))));
            var_23 = ((/* implicit */long long int) (short)(-32767 - 1));
        }
        var_24 = max((arr_13 [14ULL] [i_1] [i_1 - 2] [i_1 - 2]), (((/* implicit */signed char) var_5)));
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_26 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (arr_26 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 4 */
        for (signed char i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) ((arr_27 [i_7] [i_7] [i_7]) & (((/* implicit */int) arr_29 [i_7] [i_7]))))), (arr_26 [i_7] [i_8 - 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((/* implicit */int) var_3)), (max((-754327174), (((/* implicit */int) arr_33 [i_8 + 1] [i_8] [i_8 - 1])))))))));
                var_28 |= ((/* implicit */_Bool) 754327169);
                arr_34 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) == (4258524905575060028LL)));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_29 -= ((/* implicit */_Bool) var_8);
            arr_38 [i_7] = ((/* implicit */_Bool) -113040588);
            var_30 = ((((/* implicit */_Bool) (short)-12398)) ? (arr_30 [i_10] [i_7]) : (arr_30 [i_7] [i_10]));
            var_31 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_7] [i_7] [i_7])) <= (((/* implicit */int) arr_35 [i_10] [i_10] [i_7]))));
            var_32 = ((/* implicit */_Bool) var_7);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) arr_43 [i_7] [i_13]);
                    arr_49 [i_7] [i_7] [i_11] [i_11] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_12] [i_12] [i_12])) / ((~(((/* implicit */int) var_2))))));
                }
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_0))));
                    var_35 = ((/* implicit */_Bool) 2147483647);
                }
                for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_6))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_59 [(unsigned short)18] [i_7] [i_7] = ((/* implicit */short) var_7);
                        var_37 = ((/* implicit */int) (_Bool)1);
                        var_38 *= ((/* implicit */short) 3906156706993537703ULL);
                    }
                    arr_60 [i_7] [i_11] [i_7] [i_15] = ((/* implicit */short) var_7);
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) 626645701)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_61 [i_7] [i_11] [i_11] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (short)27677))));
                }
                arr_62 [i_7] [i_11] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_47 [i_7]) + (1153303037)))))) ? ((-(1646799487))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3954811287577096196ULL)))))));
                var_40 = ((((/* implicit */_Bool) (short)32011)) ? (((arr_27 [i_7] [i_11] [(short)11]) - (((/* implicit */int) arr_35 [i_7] [i_11] [i_12])))) : (((/* implicit */int) arr_36 [i_7] [i_11] [i_12])));
            }
            arr_63 [i_7] [i_7] [i_11] = ((/* implicit */signed char) ((arr_57 [i_7] [i_7] [i_7] [i_7] [i_7]) | (((/* implicit */unsigned long long int) arr_31 [i_11] [i_7]))));
        }
        for (int i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_18 = 2; i_18 < 19; i_18 += 3) 
            {
                arr_69 [i_7] [i_7] [16ULL] = ((/* implicit */long long int) var_3);
                arr_70 [i_17] [i_7] [i_18 + 2] [i_7] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (var_6))), ((+(min((3954811287577096217ULL), (((/* implicit */unsigned long long int) -7555605449426951505LL))))))));
            }
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) max((((unsigned short) 8388606)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -754327174))))))))));
        }
    }
    var_42 &= ((/* implicit */short) var_4);
}
