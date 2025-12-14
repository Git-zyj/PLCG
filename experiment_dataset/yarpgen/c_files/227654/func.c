/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227654
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((72057594037927904LL) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) 126100789566373888LL));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 += arr_9 [9U] [i_1 + 1] [i_2] [i_2];
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [16LL] [i_1 + 1]))) : (arr_6 [i_0] [i_2])))))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)49954)))))));
                        arr_15 [i_0] [i_1 - 1] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_4] [0LL] [i_4])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        var_16 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (-8751444020679487948LL) : (((/* implicit */long long int) arr_12 [i_0] [i_4])))));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_8)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_5] [i_2] [(signed char)4] [i_0]));
                        arr_18 [i_0] [i_0] [(unsigned short)17] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) arr_17 [7ULL] [i_0]));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49952)) ? (-8751444020679487956LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_1 - 1] [i_2]))))))));
                        arr_20 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2] [i_1 + 1]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 2])))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -8751444020679487948LL)) || (((/* implicit */_Bool) (unsigned short)49954))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                    var_22 = var_6;
                    var_23 = ((/* implicit */unsigned short) ((((arr_5 [i_2] [i_0]) <= (((/* implicit */long long int) var_4)))) ? (arr_21 [i_0] [(signed char)0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) ((short) arr_3 [i_0] [i_7] [i_7]));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            arr_30 [i_9] [(_Bool)1] [(unsigned short)1] [i_1 - 1] [i_0] = ((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_0])) ? (arr_27 [12LL] [i_9] [15U] [i_9 + 3] [11ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                            var_25 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -8751444020679487937LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_8]))) : (var_4)))));
                            arr_31 [5U] [i_8] [i_8] [i_0] [5U] [i_0] [i_0] = ((/* implicit */int) (+(arr_5 [i_1 + 1] [i_9 + 2])));
                            arr_32 [i_0] [i_0] [i_0] [i_8] [i_8] [10] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((((/* implicit */_Bool) arr_28 [i_0] [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (4893643869217255115LL)))));
                        }
                        for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((arr_12 [i_10 + 2] [i_1 - 1]) ^ (var_0)));
                            var_27 = ((/* implicit */unsigned short) ((((arr_25 [i_1 - 3]) + (9223372036854775807LL))) << (((arr_8 [i_10 - 1]) - (15239393884555928908ULL)))));
                            var_28 = ((/* implicit */unsigned int) arr_5 [i_8] [i_1]);
                            arr_37 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_0] |= ((/* implicit */unsigned long long int) ((signed char) arr_28 [i_1 - 2] [i_1 - 2]));
                        }
                        arr_38 [i_0] [(short)11] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) var_7);
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((int) arr_11 [i_7] [i_1 - 1] [i_1 - 1] [i_7])))));
                        var_30 = ((/* implicit */signed char) arr_0 [i_7] [i_1 - 1]);
                        arr_42 [i_0] [i_0] [i_0] [i_7] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)49954))));
                        var_31 -= ((/* implicit */short) var_10);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        arr_46 [i_1] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_1 - 2])) ? (arr_36 [i_1 - 3]) : (arr_36 [i_1 + 1])))), (((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_8 [i_12]))));
                        var_32 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 3880595738101982434ULL))));
                    }
                    var_33 = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_34 += ((/* implicit */short) (~(((((/* implicit */_Bool) 14566148335607569182ULL)) ? (((/* implicit */int) (unsigned short)49949)) : (((/* implicit */int) (unsigned char)109))))));
                }
                for (unsigned int i_13 = 3; i_13 < 16; i_13 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (arr_26 [i_1 - 3] [i_13 - 1])));
                    var_36 = ((/* implicit */unsigned short) var_3);
                }
                for (unsigned int i_14 = 3; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((arr_41 [i_14]), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_28 [i_14 - 3] [(_Bool)1])), (7096016085611394280LL)))) : (arr_6 [i_14 - 2] [i_14])))));
                    arr_53 [(short)10] [i_1] [i_14] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((+(14566148335607569194ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63181)))))), (max(((-(var_5))), (((/* implicit */long long int) (-(arr_51 [i_14] [i_14] [i_14] [i_14]))))))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_25 [i_0])))) ? (((arr_26 [i_14 - 3] [i_14]) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)109)), (var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15581)))));
                }
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) max(((+(-8751444020679487951LL))), (((/* implicit */long long int) max((((/* implicit */short) var_10)), (var_3)))))))));
                var_40 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (max(((short)32747), (((/* implicit */short) var_8))))))), (((((/* implicit */_Bool) arr_16 [(unsigned short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0])) > (-6721371575879893210LL))))) : (((((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)9] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (arr_14 [(_Bool)1] [i_1 - 2] [i_1] [i_1] [(_Bool)1])))))));
            }
        } 
    } 
}
