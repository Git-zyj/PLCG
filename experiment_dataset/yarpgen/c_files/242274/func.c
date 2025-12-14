/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242274
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)53796))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_9))))) : (((/* implicit */unsigned long long int) ((min((var_10), (var_10))) * (((/* implicit */unsigned int) var_0)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) min((var_12), ((+(((/* implicit */int) var_5))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [15]), (arr_2 [i_0 + 2] [i_0 + 1])))) ? (((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 + 2] [i_0 + 2])))) : (min((-1), (((/* implicit */int) (unsigned char)246))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0]);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_11 [3U] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) (+(arr_0 [i_0 - 1] [i_1]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_15 [15LL] [i_0] [i_2] [i_1] [i_1] [12] [i_0] = ((/* implicit */unsigned char) var_6);
                            var_15 ^= ((/* implicit */int) min((arr_1 [i_4] [i_2]), (arr_1 [i_1] [i_2])));
                            var_16 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_0 - 1] [i_4]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_0 + 1] [i_0 - 1])), (arr_13 [(_Bool)1] [i_1] [(unsigned char)6] [i_1] [(unsigned char)6])))), (min((((/* implicit */long long int) arr_9 [17])), (min((-1LL), (((/* implicit */long long int) arr_7 [i_1] [(short)12] [i_2]))))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)8]))) & (var_9)));
                            var_18 *= ((/* implicit */unsigned long long int) arr_6 [(signed char)17] [(signed char)17] [5ULL] [16LL]);
                        }
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((arr_10 [i_0] [i_0 + 2]), (arr_10 [i_0] [i_0 - 1]))))));
                    }
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)44973)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) - (var_10))), ((~(min((((/* implicit */unsigned int) arr_21 [i_6] [i_2] [i_1] [i_1] [i_0])), (arr_22 [i_2] [i_1] [i_2] [i_2] [i_0])))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)44973)) >= (((/* implicit */int) arr_8 [i_0] [3U] [i_2] [i_6]))))), (arr_8 [i_6] [i_2] [i_1] [i_0])))), (arr_1 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_22 += ((/* implicit */_Bool) var_7);
                        var_23 = ((/* implicit */int) max((var_23), ((-(((((-1) + (2147483647))) >> (((((/* implicit */int) var_8)) - (13004)))))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((arr_12 [i_7] [i_7] [3ULL] [i_0 + 2] [i_0 + 2]) - (arr_12 [i_0] [4ULL] [i_1] [i_0 - 1] [i_2]))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [(_Bool)1] [i_2] [i_2] [(short)13] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) arr_12 [(unsigned char)9] [i_8] [(unsigned char)9] [i_1] [i_0 - 1]))))) - (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_8] [i_8])) || (((/* implicit */_Bool) -1610657318))))), (arr_13 [i_0] [i_1] [i_2] [16] [i_0 + 1])))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_28 [(_Bool)0] [i_1] [i_9] [i_8] [(_Bool)0] [i_1] [i_9]))));
                            var_27 ^= ((/* implicit */short) var_3);
                        }
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) arr_28 [17LL] [i_1] [17LL] [(signed char)14] [8] [i_8] [9])) : (var_4))) == (((/* implicit */int) arr_8 [i_0] [i_1] [5U] [i_8]))))), (min((((((/* implicit */_Bool) arr_6 [i_8] [i_2] [i_1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_10)) : (11840098310828718083ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_2] [i_2] [i_8] [i_2] [i_2])))))))));
                        var_29 = ((/* implicit */unsigned char) (!(arr_4 [(unsigned short)14])));
                    }
                    var_30 = ((/* implicit */short) arr_18 [(short)18] [i_1] [i_1] [i_1] [(_Bool)1] [8ULL] [(_Bool)0]);
                }
            } 
        } 
        var_31 ^= ((/* implicit */unsigned short) arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                        {
                            var_32 &= arr_37 [(unsigned char)14] [i_11];
                            arr_46 [i_10] [i_10] [i_10] [i_10] [(unsigned char)11] [i_10 - 1] = ((/* implicit */unsigned short) ((((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [0LL] [i_11] [i_11]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_41 [i_11] [i_11] [i_11] [i_11] [i_11])))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)9] [(short)14] [i_12] [i_11] [i_10])))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) var_9);
                            var_34 = ((/* implicit */int) min((var_34), (min((((/* implicit */int) arr_16 [i_15] [(unsigned short)14] [(unsigned short)14] [i_10])), (((((/* implicit */_Bool) arr_45 [i_10 - 1] [i_10 - 1])) ? (arr_14 [i_13] [i_10 + 2]) : (arr_14 [i_10 + 2] [i_12])))))));
                            var_35 &= ((/* implicit */signed char) var_10);
                            arr_51 [i_10] [i_11] [i_12] [11U] [i_13] [i_11] = ((/* implicit */unsigned char) var_9);
                        }
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_1)), (arr_20 [i_10] [2ULL] [i_10] [(unsigned char)4] [i_10]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_10 - 1] [i_10 - 1])) : (min((arr_34 [i_10]), (((/* implicit */unsigned long long int) min((arr_37 [i_11] [i_11]), (arr_37 [3LL] [i_11]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    {
                        arr_59 [i_10] [13LL] [i_16] [(_Bool)1] [i_18] = ((/* implicit */short) var_2);
                        var_37 = min((((/* implicit */unsigned int) min((min((arr_48 [i_10] [5ULL] [i_16] [i_17] [i_18]), (((/* implicit */int) (unsigned short)20551)))), (((/* implicit */int) arr_16 [i_17] [i_17] [i_17] [i_10 + 2]))))), (min((arr_39 [(_Bool)1] [i_10 + 1] [i_17]), (arr_39 [i_10 + 1] [i_10 + 2] [i_17]))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) (+(((arr_33 [i_10 + 2]) | (((/* implicit */long long int) arr_22 [i_10] [i_10 - 1] [(unsigned char)7] [i_10 + 2] [i_10 + 2]))))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_20 = 1; i_20 < 18; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) arr_36 [(signed char)8] [i_19]);
                        arr_70 [i_21] [i_20] [i_10 + 2] [i_19] [i_10 + 2] [i_10 + 2] = ((/* implicit */signed char) arr_44 [i_10 + 2] [i_10 + 2] [i_20 + 1] [i_21] [i_21]);
                    }
                } 
            } 
            arr_71 [i_10] [i_10] [(unsigned short)0] = ((/* implicit */unsigned int) (short)-12519);
        }
        /* vectorizable */
        for (unsigned char i_22 = 0; i_22 < 19; i_22 += 3) 
        {
            arr_75 [i_10] [i_10] = ((/* implicit */signed char) (-(var_10)));
            arr_76 [i_22] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_22] [i_22] [i_10])) ? (arr_54 [i_10] [i_22] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_10] [i_10] [(unsigned short)18] [i_10]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [(short)4] [i_10 - 1] [i_10 - 1] [i_10])))));
            var_40 ^= ((/* implicit */unsigned char) var_6);
        }
    }
}
