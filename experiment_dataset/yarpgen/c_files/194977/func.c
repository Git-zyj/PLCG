/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194977
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_0 [i_0] [i_0])));
        var_19 |= ((/* implicit */_Bool) 584144595U);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) 3710822701U);
                var_21 += ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) 3710822720U)) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))))));
                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1857784953)), (min((-2577017066372695646LL), (((/* implicit */long long int) var_18)))))))));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_4] = (+(var_13));
                            var_23 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (_Bool)1)), (((arr_1 [i_0]) + (((/* implicit */int) (unsigned short)2))))))));
                            var_24 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_3] [i_4]))) : (min((((/* implicit */long long int) (signed char)119)), (arr_5 [i_4] [i_4] [i_4]))))), (((/* implicit */long long int) ((_Bool) arr_11 [i_0] [i_1] [i_3])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) 487649142))), (((((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)8] [i_1])) << (((((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_1])) - (22)))))));
            }
            var_26 = ((/* implicit */unsigned int) var_7);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (arr_20 [i_0] [i_6 + 1] [i_6])));
                arr_23 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((3710822700U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 - 1] [i_6 - 1] [i_6 + 1])))));
            }
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_28 = ((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))));
                arr_27 [i_0] [i_0] [i_0] [9ULL] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((584144588U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_7] [i_7])))))) < ((((_Bool)0) ? (((/* implicit */int) (short)20506)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) var_12);
                    var_29 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) (+(-1LL)))));
                    var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) ((584144590U) & (((/* implicit */unsigned int) 1))));
                    arr_36 [i_10] = ((/* implicit */_Bool) ((short) arr_28 [i_0] [6ULL]));
                    var_32 |= ((/* implicit */short) ((3464868502U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))));
                }
                var_33 = ((/* implicit */short) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0]))) * (arr_0 [i_0] [i_0])))))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_39 [i_0] [i_1] [(unsigned short)9] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                var_34 = var_14;
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_35 = ((/* implicit */short) arr_41 [i_11] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        var_36 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) arr_40 [i_13 + 1] [i_13 + 2] [(short)2] [(unsigned char)1] [(unsigned char)1] [i_13 + 2]))) : (((/* implicit */int) ((arr_42 [i_11] [(short)5] [i_13 + 1] [(short)5] [i_11]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_13 + 2])))))));
                        var_37 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (0LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13] [4LL] [i_13 + 1] [i_13 + 2] [i_13 + 2] [4LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */long long int) 584144595U)), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_11] [i_11])) : (((/* implicit */int) (short)29757)))))))) : (((((/* implicit */_Bool) ((var_9) ? (9525611181308843447ULL) : (((/* implicit */unsigned long long int) 493445464U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) : (min((arr_38 [i_11] [i_1]), (((/* implicit */unsigned long long int) arr_25 [(short)3] [i_1] [(_Bool)0]))))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((unsigned long long int) ((_Bool) ((unsigned long long int) (unsigned char)246)))))));
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), (arr_25 [i_0] [i_0] [9ULL])));
                }
            }
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_28 [i_0] [i_14])))), (min((var_15), (((/* implicit */int) arr_28 [i_0] [i_15]))))));
                        var_41 = ((/* implicit */unsigned short) ((var_12) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_15] [i_14] [i_1]))) - (((((/* implicit */unsigned long long int) 3972106067U)) - (868194673025481099ULL)))))));
                    }
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((min((min((var_0), (((/* implicit */unsigned int) (signed char)-18)))), (((/* implicit */unsigned int) arr_37 [i_0] [(short)7] [9LL])))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0] [i_16] [i_0] [i_0])) && (((/* implicit */_Bool) arr_48 [i_0] [i_16] [i_0] [i_0])))))))))));
            var_43 = ((((/* implicit */_Bool) min((((int) arr_2 [(signed char)4])), (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))))) ? (min((4193792U), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0])))) : (arr_47 [i_0] [i_0] [i_0] [4U]));
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_44 = ((/* implicit */unsigned int) ((short) arr_18 [i_0] [i_16] [i_17] [i_17] [(unsigned char)8] [i_17]));
                arr_55 [i_0] [i_16] [i_17] = ((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (9071142475666427835LL))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(arr_37 [i_17] [i_16] [i_0]))))))));
                arr_56 [i_17] [i_16] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))), (arr_5 [i_0] [i_0] [i_0])));
            }
            for (int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))));
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (~(((arr_9 [i_0] [8] [i_0] [(signed char)2]) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [(short)1] [i_16] [i_16]))))))))));
                arr_59 [i_18] [i_16] [i_16] [6LL] = ((/* implicit */int) arr_45 [i_0]);
            }
            arr_60 [i_0] = ((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [(short)8]);
            arr_61 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) 4290773503U))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39008))))) > (((0ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) | (-1829183435312098970LL))))))));
        }
    }
    var_47 = ((/* implicit */int) (_Bool)1);
}
