/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218411
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (arr_0 [i_0 + 1]))))) : (max((((((/* implicit */_Bool) var_4)) ? (13019525559129234469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16691))))), (min((2199023255551ULL), (2937273296377468861ULL)))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_0)))) + (((((/* implicit */_Bool) 18446741874686296052ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))))) | (((min((((/* implicit */unsigned long long int) var_6)), (var_8))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (73620740U))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)2595), ((short)0)))) ? (((/* implicit */int) (unsigned short)7143)) : (max((((/* implicit */int) arr_1 [(unsigned short)16])), (var_3)))))), ((~(((((/* implicit */long long int) ((/* implicit */int) var_11))) | (arr_0 [i_0]))))))))));
    }
    var_20 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) -1216610138280448145LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_10)), (var_15)))))) >> (((max((var_3), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))))) - (1565715392)))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [20ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_1]))))))) >= (max((var_8), (((/* implicit */unsigned long long int) (~(var_3))))))));
        /* LoopSeq 4 */
        for (int i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)14)), ((+(((/* implicit */int) arr_3 [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_19 [i_4] [i_4] [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_6 [i_4] [i_4]))) % (((/* implicit */int) var_1))));
                            arr_20 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_5] [i_5] = ((/* implicit */_Bool) arr_5 [i_5]);
                        }
                        arr_21 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)94)))), ((!(((/* implicit */_Bool) arr_6 [i_4 + 1] [i_2 + 3]))))));
                    }
                } 
            } 
            arr_22 [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) var_16)), (((((((/* implicit */int) arr_10 [i_1] [i_2])) >= (((/* implicit */int) var_10)))) ? (max((-4280662058197343169LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-50)), ((unsigned short)54036)))))))));
        }
        for (int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) ^ (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_8 [i_1] [i_1] [i_6 - 1]))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                arr_29 [i_1] [i_7] [i_1] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_24 [i_1] [i_6] [i_7])) >> (((((/* implicit */int) arr_16 [i_1])) - (44088))))) : ((~(((/* implicit */int) (unsigned char)255))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_36 [i_1] [11ULL] [i_7] [i_7] [9U] [i_9] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_1] [i_7])) ? (((/* implicit */unsigned long long int) var_14)) : (var_8))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-4280662058197343169LL) : (arr_28 [i_1] [i_6] [i_7] [i_8]))))));
                            var_22 = ((/* implicit */long long int) arr_30 [i_7] [i_8] [11ULL] [i_6] [i_7]);
                            arr_37 [16U] [i_7] [i_8] [i_7] [i_7] [16U] = ((/* implicit */unsigned int) ((signed char) arr_35 [i_7] [(unsigned short)10] [i_6 + 1] [i_6] [i_7 - 2]));
                        }
                    } 
                } 
                arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_1])) << (((/* implicit */int) var_1))))) : ((-(var_5)))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9705)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_7] [i_7]))) : (17974100332307889983ULL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_7 + 1])) : (((((/* implicit */_Bool) var_10)) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_3)))));
            }
            arr_39 [i_6 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)21031)), (arr_0 [i_1])))), (max((var_5), (((/* implicit */unsigned long long int) 144044819331678208LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 3] [i_6] [i_6] [i_6 + 1]))))) : ((~(((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) arr_17 [i_6] [4] [i_1] [(unsigned char)11] [i_1])) : (((/* implicit */int) var_6))))))));
        }
        for (int i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) arr_32 [i_10] [(short)20] [i_1] [i_1] [i_1] [i_10]))))) ? (((min((arr_33 [i_10] [i_10] [i_10] [i_1]), (arr_31 [i_1] [i_1] [i_10] [i_1] [i_10]))) | (arr_28 [i_1] [i_10 + 3] [i_1] [i_10 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_10] [i_10])) > (((/* implicit */int) var_11))))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23322)) || (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_10] [i_10])))))))), (7912729419840652673ULL))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 4; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_52 [i_11] [(signed char)16] [(signed char)16] [(signed char)16] = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            arr_56 [i_1] [i_11] [i_11] [i_12] [i_13] [i_14] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_13)))))) ? (((min((((/* implicit */long long int) arr_53 [(short)7] [9U] [9U] [i_11])), (arr_45 [i_12]))) % (((/* implicit */long long int) ((/* implicit */int) arr_32 [17ULL] [i_13] [i_13] [i_13] [i_14] [i_11]))))) : ((~(((((/* implicit */_Bool) arr_6 [i_11] [i_11])) ? (arr_0 [i_11]) : (((/* implicit */long long int) var_3))))))));
                            var_26 = max(((!(arr_34 [i_12] [i_13 + 1] [i_11] [i_14] [i_14]))), ((((!(((/* implicit */_Bool) (signed char)59)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (7912729419840652673ULL)))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */short) arr_54 [i_1] [(unsigned short)14] [i_1] [(unsigned short)14] [i_1] [i_1]);
                            arr_60 [i_11] [i_11] [i_11] [i_12] [i_13] [i_15] [i_15] = ((/* implicit */short) max((((((/* implicit */int) arr_9 [i_13 - 3])) | (((/* implicit */int) (signed char)14)))), (((/* implicit */int) arr_9 [i_13 - 3]))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 19; i_16 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) (short)21031);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_13] [i_13] [i_13] [i_13 - 2] [i_11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_11] [i_13] [i_16]))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_16 [i_11]))))) : (((((/* implicit */_Bool) arr_28 [6U] [5ULL] [5ULL] [(_Bool)1])) ? (var_2) : (arr_55 [i_11] [i_11])))))) : (((((/* implicit */_Bool) min((arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_11]), (arr_32 [i_11] [(unsigned char)15] [i_12] [i_11] [i_1] [i_11])))) ? (max((288229276640083968ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_48 [i_1] [i_11] [i_12] [i_13]), (((/* implicit */short) arr_63 [i_16] [i_11] [i_11] [i_12] [i_12] [i_11] [i_1]))))))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_1 [i_1]))));
                        }
                        for (unsigned short i_17 = 1; i_17 < 19; i_17 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) arr_50 [i_1] [i_1] [i_1] [(unsigned short)19]);
                            arr_67 [i_1] [i_11] [2LL] [i_1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1]), (arr_35 [i_11] [i_11] [i_12] [i_12] [i_17]))))))) & ((+(((/* implicit */int) arr_53 [i_11] [i_12] [i_11] [i_17]))))));
                            var_32 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12] [i_13] [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) ((signed char) max((arr_55 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)63755)))))) : (((/* implicit */int) (short)21031))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned short) (-((+(max((((/* implicit */long long int) arr_8 [i_11] [(unsigned short)10] [i_11])), (var_2)))))));
            var_34 = ((/* implicit */signed char) min((max((((arr_57 [i_1] [i_11] [i_11] [(short)16] [(short)16]) << (((((/* implicit */int) arr_15 [i_1] [i_11])) - (10257))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_1 [i_11])), (arr_35 [i_11] [i_1] [i_1] [i_11] [4U])))))), (((/* implicit */unsigned long long int) arr_13 [i_11]))));
        }
    }
    var_35 = ((/* implicit */unsigned short) (~(max(((~(18158514797069467647ULL))), (((/* implicit */unsigned long long int) var_12))))));
}
