/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210629
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
    var_15 = ((/* implicit */unsigned int) (-(max((((-800947892747971288LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) -800947892747971288LL)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_3 [i_0]))))) != (((/* implicit */int) var_14))));
                                var_18 = ((/* implicit */short) ((long long int) ((short) var_8)));
                                var_19 |= ((/* implicit */short) ((arr_3 [i_3 - 1]) > (arr_3 [i_3 - 2])));
                                arr_13 [i_2] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */short) arr_3 [i_3]);
                                var_20 ^= ((arr_11 [i_3 - 2] [i_1] [i_3] [i_3 - 2] [i_3 + 1]) == (arr_11 [i_3 + 2] [i_1] [i_3] [i_3 + 2] [i_3 + 2]));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    var_21 = ((/* implicit */short) arr_7 [i_0] [i_1] [i_5] [i_5]);
                    var_22 &= ((((/* implicit */_Bool) ((unsigned int) 2507079680U))) ? (arr_10 [(short)14] [(short)14] [i_1] [21LL] [i_1]) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) var_11))))));
                }
                /* LoopNest 3 */
                for (short i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-28121))) + (((/* implicit */int) (short)2040))));
                                var_24 = ((/* implicit */long long int) min((var_24), ((((-(max((arr_11 [i_0] [i_8] [(_Bool)1] [18U] [i_8]), (((/* implicit */long long int) (short)-28121)))))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-1703)) | ((-(((/* implicit */int) arr_1 [i_1])))))))))));
                            }
                        } 
                    } 
                } 
                var_25 *= (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)10683))) / (((3370301505U) / (1422071566U))))));
                arr_24 [i_0 + 1] [i_0 - 1] &= var_3;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        arr_28 [i_9] = arr_16 [i_9 - 2] [i_9];
        var_26 = ((/* implicit */unsigned int) (((!((_Bool)1))) && (((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            {
                arr_34 [i_10] [i_11] = var_9;
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-8845629135747429797LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) arr_31 [i_10] [i_11 + 2] [i_10]))))))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) arr_15 [i_10]);
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_10]), (var_6)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_7 [i_11 + 2] [i_10] [i_10] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)1694))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)27478))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [12U] [i_10] [i_10] [i_11 + 2] [6LL])))) : (arr_36 [i_11 + 1] [i_10]))))));
                    var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1446907294U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11 - 1] [i_11 - 1] [(short)0] [18LL]))) : (((((/* implicit */_Bool) arr_6 [i_10] [i_11 + 1] [i_12 - 1])) ? (((arr_32 [i_10] [i_11] [i_12]) % (((/* implicit */long long int) ((/* implicit */int) (short)2023))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                }
                for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 17; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2872895736U)) ? (arr_10 [i_11] [i_11] [i_11 - 1] [i_14] [i_14 + 4]) : (arr_10 [i_10] [i_10] [i_11 + 2] [i_14] [i_14 + 1])))));
                                var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_21 [i_10] [i_14 + 1] [i_14] [i_10] [i_11 - 1] [i_10]), (((/* implicit */long long int) ((_Bool) arr_14 [i_11]))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-11562))))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_42 [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30785)))) == (((((/* implicit */_Bool) 2147483644U)) ? (((/* implicit */int) (short)504)) : (((/* implicit */int) (short)-31823))))));
                        var_35 = ((/* implicit */short) (~(((((/* implicit */int) var_8)) - (((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            var_36 |= ((/* implicit */long long int) (short)-2037);
                            arr_52 [i_17] [i_17] [i_18] &= arr_22 [i_11 + 2] [i_11] [i_17];
                        }
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_11 + 1] [i_11 + 2])) <= (((/* implicit */int) arr_16 [i_11 - 1] [i_11 + 1]))));
                    }
                    for (short i_19 = 2; i_19 < 17; i_19 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_20 = 2; i_20 < 19; i_20 += 2) 
                        {
                            arr_57 [i_10] [i_11 + 1] [i_11 + 1] [i_10] [i_20] [i_11] = ((((/* implicit */_Bool) -7724485712680893931LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [9U] [i_11] [9U] [i_11 + 1] [i_11] [i_10]));
                            arr_58 [i_10] [i_10] [i_19] &= ((short) var_5);
                        }
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-13194))) + (5795723275481154314LL)))) ? ((-(-5795723275481154330LL))) : (((-6479364825705218848LL) + (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_10] [i_10] [i_10] [i_10])))))));
                        arr_59 [i_10] [i_10] [i_10] = ((/* implicit */short) var_1);
                    }
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        arr_62 [i_10] [i_11] [4U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_16])) ? (-18014398509481984LL) : (arr_43 [i_10] [i_10] [i_16]))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_10]))))))));
                        arr_63 [i_10] [(short)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_50 [i_21 + 1] [i_21 + 1] [5U] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]))));
                        var_40 = ((/* implicit */_Bool) var_14);
                    }
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32754)) > (((/* implicit */int) (short)-516)))))) * (((8154155600701014939LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_10] [16LL] [i_16] [i_10]))))))))));
                    arr_64 [i_10] [i_10] [i_10] [i_16] = ((/* implicit */unsigned int) (short)516);
                }
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
}
