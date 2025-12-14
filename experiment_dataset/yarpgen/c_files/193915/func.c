/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193915
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
    var_11 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 2147483648LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15872))) : (2238556638U))), (((/* implicit */unsigned int) (short)-15878)))) + ((~(max((((/* implicit */unsigned int) (_Bool)1)), (2238556638U)))))));
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_13 += ((/* implicit */unsigned long long int) (-(((unsigned int) (~(arr_5 [i_2] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3264796660U)) ? (8800365507313385063ULL) : (((/* implicit */unsigned long long int) 3264796660U))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 2] [i_0 - 3]), (arr_3 [i_0 - 3] [i_0 - 2])))) : (min((max((((/* implicit */unsigned long long int) (short)-15872)), (var_4))), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 1] [i_4]))))));
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0 - 4] [i_1] [i_0 - 4] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_15 [i_0 - 2] [i_1] [i_1 - 1] [i_2 - 2]))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))), (min((var_3), (((/* implicit */int) (short)4204))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((((_Bool)0) ? (var_8) : (((((/* implicit */int) var_5)) << (((arr_7 [i_0] [i_0] [i_0] [(unsigned short)1]) - (1523720572))))))))))));
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(short)4] [i_5] [i_5])), (3264796660U));
                                var_17 -= ((/* implicit */_Bool) min((min((((/* implicit */short) ((_Bool) (signed char)-1))), ((short)-26832))), (((/* implicit */short) (signed char)95))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_4))), (((/* implicit */unsigned long long int) 1030170636U)))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_23 [i_1] [i_2] [i_8])) < (((/* implicit */int) (_Bool)1))))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_24 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)115)))) + (((((/* implicit */int) (short)-12701)) + (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((~(arr_1 [i_8])))));
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_2]));
                            }
                        } 
                    } 
                }
                for (int i_9 = 2; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) max((min((29551447U), (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_3)))))), (((/* implicit */unsigned int) ((unsigned short) ((signed char) var_3))))));
                                arr_34 [(unsigned short)8] [i_1] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-14087)))), (((/* implicit */int) (short)12700))));
                                var_21 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)115)), ((short)-29481)))) ? (var_7) : ((-(((/* implicit */int) (signed char)115))))))), (max((min((6407821153840886545LL), (((/* implicit */long long int) arr_2 [i_11])))), (((/* implicit */long long int) var_1))))));
                                arr_35 [i_0] [i_0] [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) <= (arr_10 [i_9] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) ? ((-(var_4))) : (((17836048968589968501ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                arr_40 [i_12] [i_12] [i_12] [i_12] [i_9 - 1] [i_12] [i_12] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) & (arr_3 [i_0] [i_0])))) != (max((var_0), (((/* implicit */unsigned int) var_8))))))));
                                var_22 *= ((/* implicit */unsigned char) ((int) ((arr_2 [i_0 - 3]) | (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                }
                for (int i_14 = 2; i_14 < 10; i_14 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) ((arr_26 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 4]) <= (((/* implicit */int) ((((/* implicit */int) (short)-20933)) < (((/* implicit */int) (signed char)95)))))))) | ((-(var_8)))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max(((~(((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_0])))), (((((/* implicit */int) arr_11 [i_14] [i_14 - 1] [i_1] [i_0] [i_0])) + (var_3))))))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_48 [i_16] [i_16] [i_14] [i_15] [i_16] = ((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((int) (short)26831)))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-26832)))))))));
                                var_26 ^= ((/* implicit */long long int) (!(max((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0 - 1]), (arr_21 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                for (int i_20 = 3; i_20 < 15; i_20 += 4) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) (short)-12701)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)254)))))))));
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) arr_56 [i_19] [i_19] [i_20 + 1] [i_17])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_21 = 3; i_21 < 14; i_21 += 4) 
        {
            for (int i_22 = 1; i_22 < 17; i_22 += 2) 
            {
                {
                    var_29 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) (short)0))) ^ (((/* implicit */int) ((arr_59 [8ULL] [i_22 - 1] [8ULL]) || (((/* implicit */_Bool) ((short) (unsigned char)255))))))));
                    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) + (((/* implicit */int) arr_64 [i_21] [i_17]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 18; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        var_31 ^= ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127))))))));
                        var_32 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (max((1130913728098412081ULL), (((/* implicit */unsigned long long int) arr_55 [i_17] [i_17]))))));
                    }
                } 
            } 
            arr_78 [i_17] = ((/* implicit */signed char) (~(((((/* implicit */int) ((signed char) (signed char)31))) * (((/* implicit */int) max(((signed char)-127), (((/* implicit */signed char) arr_56 [i_17] [i_17] [i_17] [i_17])))))))));
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (int i_27 = 1; i_27 < 16; i_27 += 3) 
                {
                    {
                        var_33 = ((/* implicit */int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (1130913728098412081ULL))), (max((((/* implicit */unsigned long long int) var_9)), (var_4)))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) arr_60 [i_17]))), (max((((/* implicit */unsigned int) var_3)), (arr_54 [i_17])))))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) arr_62 [i_26]))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) ((((arr_83 [(_Bool)1] [(_Bool)1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_28]))))) >= (((/* implicit */unsigned long long int) ((((var_2) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_65 [i_28])))))));
        var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) (unsigned short)65535))))));
        arr_85 [10U] [i_28] = ((/* implicit */short) max((((((/* implicit */_Bool) -671346120533895831LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)127))))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_39 [i_28] [i_28] [i_28] [i_28] [i_28]))))), (((/* implicit */unsigned long long int) ((arr_4 [i_28] [i_28]) >= (arr_4 [i_28] [i_28]))))));
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) (signed char)-42);
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_61 [8])) || (((/* implicit */_Bool) 1130913728098412081ULL))))) & (min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (short)-1)))))))));
        arr_88 [i_29] [i_29] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [(unsigned char)3] [i_29] [i_29] [i_29])) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)))) ? (((((/* implicit */_Bool) arr_71 [i_29] [i_29] [i_29])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_75 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])))) : (var_8));
    }
    var_39 |= ((/* implicit */unsigned int) var_1);
}
