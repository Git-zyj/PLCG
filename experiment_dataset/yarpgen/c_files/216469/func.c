/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216469
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-89))))) && (((((/* implicit */_Bool) (signed char)89)) || (((/* implicit */_Bool) var_9))))))), ((~((+(var_8)))))));
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((max(((unsigned char)255), (arr_0 [i_0 - 2]))), (max((arr_0 [i_0]), ((unsigned char)255)))));
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (signed char)-101);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_2 [(_Bool)1])))), (((/* implicit */int) ((signed char) 255LL)))))) - ((-(13752096046176829208ULL)))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255LL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_9 [i_3] [i_2 + 2] [i_1]))))), (min((511ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))))));
                    /* LoopSeq 4 */
                    for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_3] [i_3] [i_5])), (18446744073709551104ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)2046))))) : ((+(245LL)))))));
                            var_24 += ((/* implicit */unsigned char) var_1);
                        }
                        for (signed char i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            arr_22 [i_2] [i_2] [i_3] [i_4] [i_4] [i_4] [i_4 - 2] = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) -234LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-2147483628)))), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            arr_23 [i_2] = ((/* implicit */unsigned int) (~(max((arr_10 [i_4] [i_2 + 1]), (arr_10 [i_2] [i_2 - 3])))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_4 - 1] [i_2 - 3] [i_3] [i_2 - 3] [i_1] [i_1])) ? (arr_10 [i_2] [i_3]) : (((/* implicit */int) arr_15 [6U] [i_2] [i_3] [i_2] [i_1])))))) ? (((((arr_8 [i_3] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(short)13] [i_2 + 2] [i_3] [i_4 + 1] [i_3] [i_3] [i_2 + 1]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) var_11))))), (((arr_6 [i_3] [1ULL]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_27 [i_4 - 2] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */int) (short)1)) * (((/* implicit */int) var_16)))))), (((/* implicit */int) arr_9 [i_3] [i_4 - 2] [i_7]))));
                        }
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 2147483627))));
                        arr_28 [i_1] [i_2 - 3] [i_2] = ((/* implicit */short) ((signed char) min((((/* implicit */int) (short)31)), (-2147483628))));
                        arr_29 [i_1] [i_2] [i_2] [i_2 - 2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) min(((((+(-14LL))) & (max((((/* implicit */long long int) var_7)), (var_9))))), (((/* implicit */long long int) (+(max((-2147483628), (arr_10 [i_4 - 2] [i_1]))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_32 [i_1] [i_2] [i_2] [i_3] [i_3] [(short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-242LL)))) ? (((/* implicit */long long int) 2147483627)) : (((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0LL)))))) ? (((/* implicit */long long int) ((unsigned int) max((((/* implicit */signed char) arr_30 [i_2] [i_3] [i_2 + 1] [i_2])), ((signed char)88))))) : (((arr_2 [i_1]) ? (((var_12) / (-234LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1])))))));
                        var_28 = ((/* implicit */unsigned char) 219LL);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)32759)), (max((((/* implicit */unsigned int) (signed char)127)), (3181971376U))))))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_35 [i_2] [i_2] [6] = ((/* implicit */_Bool) arr_11 [i_2]);
                        var_30 = ((/* implicit */long long int) arr_31 [i_9] [i_3] [i_2] [i_1]);
                        arr_36 [i_9] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((arr_13 [i_2 - 2] [i_2 - 2] [i_9]), (arr_8 [i_1] [i_2 - 2])))))) ? (((((/* implicit */_Bool) -256LL)) ? (-13) : (((/* implicit */int) (_Bool)0)))) : (min((((/* implicit */int) arr_34 [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 3] [i_2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [(unsigned char)8])) : (((/* implicit */int) var_11))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 1] [i_1])) ^ (((/* implicit */int) arr_34 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_3])))))));
                        arr_39 [i_2] = ((/* implicit */short) (-(arr_21 [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 + 2])));
                        var_32 = ((/* implicit */short) ((arr_30 [i_2] [i_2] [i_2 - 3] [i_10]) ? (((/* implicit */int) arr_30 [i_2] [i_3] [i_2 + 1] [i_3])) : ((-2147483647 - 1))));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) ((int) arr_5 [i_1]));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_11 [i_1]))));
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 234LL))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            arr_46 [i_2] [i_2 - 2] [i_2] [i_10] [i_12] = ((/* implicit */long long int) ((arr_13 [i_1] [i_1] [2U]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 137438953471ULL)) || (((/* implicit */_Bool) (-2147483647 - 1)))))))));
                            var_35 = ((/* implicit */signed char) 18446743936270598165ULL);
                        }
                        arr_47 [i_1] [i_2] [i_3] [i_10] = ((/* implicit */signed char) 18446744073709551594ULL);
                    }
                    arr_48 [i_2] = (~(((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 13; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            arr_60 [i_1] [i_13] [i_14] [i_14] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_25 [i_13 - 1] [i_13] [i_14] [i_15] [(signed char)3] [i_14] [i_15]);
                            var_36 = (-(var_10));
                        }
                        var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((((_Bool)1) ? (arr_55 [i_13] [i_13] [i_14] [i_15]) : (((/* implicit */int) arr_56 [i_13] [i_13] [i_13] [i_15])))), (((/* implicit */int) arr_50 [i_13 - 3] [i_15] [i_15]))))), (min((arr_45 [i_13] [i_14]), (arr_45 [i_13] [i_13 - 1])))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_13 [i_13 + 2] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */unsigned long long int) -245LL)) : (arr_13 [i_13 - 1] [i_13 + 1] [i_13 + 2])))))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 1; i_17 < 14; i_17 += 2) 
                        {
                            arr_64 [i_13] [i_13] [i_14] [i_15] [i_17 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) -3039204950781646946LL)) ? (((/* implicit */long long int) -1)) : (3039204950781646943LL)));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_57 [i_1] [i_13 - 3] [i_13] [i_15] [0])), (arr_8 [i_1] [i_1]))))));
                            var_40 = ((/* implicit */int) max(((-(max((arr_44 [i_1] [0U] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_17])))))), (max((arr_37 [i_17 + 1] [i_15] [i_13 - 3]), (((/* implicit */unsigned long long int) arr_26 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17] [i_17 + 1] [i_13 + 1] [i_13 + 2]))))));
                        }
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            arr_67 [i_1] [i_13] [i_14] [i_15] [i_18] = ((/* implicit */int) max((((arr_8 [i_1] [(short)8]) / (arr_8 [i_13] [i_13]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_13] [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1788077829)))) : (((((/* implicit */_Bool) -241LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)504))) : (-246LL))))))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_1] [i_13] [i_14] [i_15] [i_13 - 2])) ? (max((arr_21 [i_13 + 1] [i_13 - 3] [i_13 - 1] [i_13 - 3] [i_13 - 2]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (arr_20 [i_1] [i_13] [i_13] [i_15] [i_15] [i_18] [i_18])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_13] [i_1])))));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) 245LL)) ? (max((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */unsigned long long int) arr_49 [i_1] [i_13] [i_14])) ^ (arr_8 [i_18] [i_15]))))) : (arr_13 [i_18] [i_14] [i_1])));
                            var_43 = ((/* implicit */unsigned long long int) 3039204950781646947LL);
                        }
                        var_44 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_17)), (min((arr_44 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 + 1]), (arr_44 [i_13] [i_13 - 1] [12ULL] [i_13 - 1] [i_13 - 1])))));
                    }
                    var_45 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) 241LL))));
                    arr_68 [i_13] [i_1] [i_14] [i_13] = ((/* implicit */short) min((((arr_16 [i_13 - 2] [i_13 - 2] [i_14] [i_1] [i_1]) / (arr_16 [i_13 - 1] [i_13 - 1] [i_14] [i_14] [i_14]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_13 - 2] [i_13] [i_13] [(_Bool)0])) <= (((/* implicit */int) arr_19 [i_1] [i_13 - 2] [i_14] [i_13] [i_14])))))));
                    var_46 = min(((+(((/* implicit */int) arr_56 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) ((_Bool) ((arr_40 [i_1] [i_1] [i_13] [i_1] [i_1] [i_1]) * (((/* implicit */int) arr_59 [i_1] [i_1] [i_1] [i_13 - 1] [0ULL] [i_14] [i_14])))))));
                }
            } 
        } 
    }
}
