/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198765
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_1] = arr_5 [i_1] [i_1] [i_1];
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) (unsigned short)0);
        }
        for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-104)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) * (0ULL)))));
                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_15);
                var_19 = ((/* implicit */long long int) -2147483635);
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_12))));
            }
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                arr_16 [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                arr_17 [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 268304384LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (2842314050653598551ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_21 = (+(((/* implicit */int) (_Bool)0)));
                    var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27601))) : (35184372088831ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)81)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_23 = (~(12067126704712053147ULL));
                    arr_22 [i_2 - 3] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */_Bool) var_5);
                    var_24 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0]);
                    var_25 = ((/* implicit */long long int) arr_3 [i_2 - 3] [i_2 - 3]);
                    var_26 = ((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)5]);
                }
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) (((-(576456354256912384LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6122580571977848210ULL))))))));
                arr_25 [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2])));
                /* LoopSeq 2 */
                for (long long int i_8 = 3; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 12; i_9 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned long long int) ((arr_9 [i_2 - 2] [i_8 + 1] [i_9 - 1]) << (((arr_21 [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 2] [i_9 - 1]) - (477204260U)))));
                        var_29 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_7] [i_7] [i_2] [3])))));
                        arr_31 [i_2 + 1] [i_2] [(_Bool)1] [i_2] [i_2 + 1] [(signed char)13] [(unsigned char)4] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        var_30 = ((((/* implicit */_Bool) arr_15 [i_9] [i_8] [i_9 - 2] [i_8])) ? (((/* implicit */unsigned long long int) 9223372036854775806LL)) : (arr_23 [i_8 - 3] [i_8 + 1]));
                    }
                    var_31 = ((/* implicit */signed char) arr_5 [i_8] [(signed char)9] [i_0]);
                    var_32 = ((/* implicit */unsigned int) ((unsigned char) 3904931542U));
                    var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_10 [i_0] [i_2] [i_7] [i_8])) % (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                }
                for (long long int i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
                {
                    arr_36 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_10] = arr_1 [i_0] [i_10];
                    arr_37 [i_10] [(unsigned short)10] [i_2 + 1] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)64))));
                    arr_38 [i_0] [i_0] [i_2 + 1] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (14ULL))) ? (var_1) : (((((/* implicit */_Bool) (unsigned short)25)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_14)) : ((-(2303344019549161777ULL)))));
                    arr_40 [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (var_4)));
                }
            }
            for (int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((arr_1 [i_2 - 2] [i_11]) ? (7872234549187357744LL) : (arr_34 [i_0] [i_0] [i_0] [i_2 - 3] [i_0])));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        {
                            var_35 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((12494028448460073012ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) == (arr_27 [i_13 - 1] [i_13] [(short)11] [i_13 - 1])));
                            var_36 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_15)))));
                            var_37 = ((/* implicit */short) var_4);
                            arr_51 [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_52 [i_13 + 1] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)-21)) ^ (((/* implicit */int) (unsigned short)42751)))));
                        }
                    } 
                } 
            }
            var_38 = ((/* implicit */unsigned char) ((arr_26 [1ULL] [i_0] [i_0] [(signed char)8]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 1] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */int) ((unsigned long long int) ((26U) << (((/* implicit */int) (_Bool)0)))));
                            var_40 = ((/* implicit */unsigned short) ((long long int) (signed char)-30));
                            arr_60 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = (~(arr_30 [i_0] [i_2] [i_0] [i_16]));
                            var_41 = ((/* implicit */unsigned short) 0U);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    arr_64 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) -3229362939671355770LL))) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66)))));
                    var_42 = ((/* implicit */signed char) var_11);
                }
                var_43 = ((/* implicit */unsigned long long int) var_11);
                var_44 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) & (-8451018839793091014LL)))) ? (arr_48 [i_0] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42751))))));
            }
        }
        var_45 = ((/* implicit */signed char) ((int) -1LL));
    }
    var_46 = ((((/* implicit */int) ((((/* implicit */long long int) 792508932U)) < (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)68))))))) << (((9223371899415822336LL) - (9223371899415822333LL))));
    var_47 = ((/* implicit */int) var_7);
}
