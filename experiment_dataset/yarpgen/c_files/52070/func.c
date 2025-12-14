/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52070
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
    var_13 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((8171852809959117534ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_15 = min((max((5117228957011885606ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1] [i_2])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_0))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) >= (var_11))))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((int) arr_8 [i_3] [8LL] [i_0])))) || (((/* implicit */_Bool) min((max((-7544116844178571325LL), (((/* implicit */long long int) arr_2 [(unsigned char)4])))), (((/* implicit */long long int) var_12))))))))));
                        var_18 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                    }
                }
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)245)) | ((~(((/* implicit */int) var_0))))))));
                    arr_12 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), (arr_0 [i_1])))), ((~(arr_6 [i_0] [i_4])))))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9759132566127906560ULL)) && (((/* implicit */_Bool) 9759132566127906560ULL))));
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 14; i_7 += 4) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_6] [i_7] = (+((~(var_5))));
                            arr_23 [i_7] [i_6] [i_0] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [i_7]);
                            arr_24 [i_0] [i_1] [14LL] [i_6 + 1] [i_7] = ((/* implicit */short) ((long long int) var_3));
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_6))))));
                            var_24 = ((((/* implicit */_Bool) arr_16 [i_5])) || (((/* implicit */_Bool) (~(arr_0 [14])))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((short) arr_9 [i_0] [i_0] [i_0] [i_0]));
                            arr_27 [i_0] [i_1] [i_5] [i_6] [i_8] [i_8] = arr_17 [i_5];
                            arr_28 [i_0] [i_1] [(short)13] [4LL] [i_5] = arr_3 [8LL] [i_5] [i_8];
                            var_26 -= (~(var_11));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_27 = ((unsigned char) arr_20 [i_0] [(unsigned char)14] [i_1] [i_5] [i_6] [i_9] [i_9]);
                            var_28 += min(((~(13329515116697666010ULL))), (((/* implicit */unsigned long long int) (~((+(arr_6 [i_0] [13ULL])))))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            var_29 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_26 [14LL] [i_0] [i_1 - 2] [i_5] [i_1 - 2] [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_10])) && (((/* implicit */_Bool) var_1))))))))) == ((+((+(var_5)))))));
                            arr_33 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max(((+(5117228957011885626ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */unsigned long long int) var_5))));
                            var_30 = ((/* implicit */short) var_12);
                            var_31 = ((/* implicit */short) (+((+(((/* implicit */int) var_12))))));
                        }
                        var_32 = ((/* implicit */unsigned char) var_0);
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((unsigned int) var_8));
                        /* LoopSeq 2 */
                        for (short i_13 = 3; i_13 < 12; i_13 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) max((8687611507581645056ULL), (((/* implicit */unsigned long long int) (unsigned char)167))))))));
                            var_35 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_0] [i_1] [i_11] [i_0] [i_12] [i_12])))) - (arr_25 [i_0] [i_0]))))))));
                            arr_42 [i_0] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_13] [i_11] [i_12])) / (min((((/* implicit */int) arr_16 [i_13])), ((+(((/* implicit */int) var_7))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) var_5))));
                            var_38 *= ((/* implicit */int) ((unsigned short) (short)0));
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_0] [i_1] [i_0] [i_14])))))));
                            arr_46 [i_0] [i_11] [i_11] |= ((/* implicit */short) (+((~(((/* implicit */int) var_9))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            {
                                arr_52 [(unsigned char)2] [i_15] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((short) var_0))))));
                                var_40 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_5)), ((+(10545536735368226289ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))));
                            }
                        } 
                    } 
                }
                var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */short) max((max((var_11), (arr_30 [i_17] [i_18]))), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_9)))))))));
                            var_43 = ((/* implicit */unsigned char) arr_57 [i_0] [i_1 - 2] [i_17] [i_18]);
                            var_44 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) min((((/* implicit */short) arr_1 [i_17])), (arr_45 [i_0] [i_0] [i_17])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            {
                var_45 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_11) | (((/* implicit */unsigned int) var_6)))))) >> (((arr_13 [i_19] [i_20]) - (5769218304428434016ULL)))));
                var_46 = ((/* implicit */unsigned short) arr_40 [i_19] [i_19] [i_19] [(unsigned short)11] [i_20] [i_19]);
                var_47 -= ((/* implicit */short) var_6);
                var_48 -= ((/* implicit */short) max(((~(arr_53 [i_20]))), (max(((+(((/* implicit */int) arr_44 [i_19] [i_19] [i_19] [i_20] [i_20] [i_20] [i_20])))), (((/* implicit */int) var_9))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 17; i_21 += 1) 
    {
        for (long long int i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            {
                arr_69 [i_21] [i_21] = ((/* implicit */long long int) ((unsigned short) var_6));
                /* LoopSeq 2 */
                for (short i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    arr_73 [i_23] = ((/* implicit */unsigned char) var_5);
                    /* LoopNest 2 */
                    for (short i_24 = 2; i_24 < 16; i_24 += 4) 
                    {
                        for (short i_25 = 0; i_25 < 17; i_25 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */int) arr_67 [i_23] [i_23] [i_23]);
                                var_50 = ((/* implicit */unsigned short) (+((+(((arr_64 [i_21] [i_22]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), ((+(min((((/* implicit */unsigned long long int) (unsigned short)52972)), (5117228957011885606ULL)))))));
                    arr_78 [i_21] [i_22] [i_22] [i_23] = ((/* implicit */signed char) arr_75 [i_23]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        arr_81 [i_21] [5LL] [i_23] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)10346)))) ^ (((long long int) var_4))));
                        var_52 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)183))));
                        var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                        var_54 = ((/* implicit */unsigned int) min((var_54), (arr_65 [i_21])));
                    }
                }
                for (short i_27 = 0; i_27 < 17; i_27 += 4) 
                {
                    arr_84 [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) var_11);
                    arr_85 [i_21] [i_21] [i_21] = ((/* implicit */signed char) var_0);
                }
            }
        } 
    } 
}
