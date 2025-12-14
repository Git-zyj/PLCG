/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54212
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
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (var_12)))) ? (((/* implicit */int) min(((unsigned short)22009), ((unsigned short)43526)))) : (((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(arr_0 [i_0 + 3]))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)23)) && (((/* implicit */_Bool) 2761331285U))))) >> (((((((/* implicit */_Bool) (unsigned short)43541)) ? (((/* implicit */int) (unsigned short)21999)) : (((/* implicit */int) (short)(-32767 - 1))))) - (21996))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (short)32767))));
                            var_19 = ((/* implicit */signed char) ((int) (signed char)-66));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) (unsigned short)63197)))))));
                            var_21 = ((/* implicit */long long int) var_7);
                            arr_16 [i_0] [(_Bool)1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2] [i_1])) && (((/* implicit */_Bool) arr_4 [i_2 - 2] [i_0 + 3])))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21981)) ? (((/* implicit */int) (short)-31411)) : (((/* implicit */int) (short)31424))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_1 [i_1]))));
                            arr_19 [13] [i_6] = ((/* implicit */signed char) min((min((((((/* implicit */int) (signed char)-93)) / (((/* implicit */int) arr_4 [i_0] [i_1])))), (((((/* implicit */_Bool) (unsigned short)43527)) ? (((/* implicit */int) arr_8 [i_6] [i_3] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) arr_6 [i_0] [i_0]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_25 = min(((signed char)91), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2 - 1]))))));
                            var_26 *= ((/* implicit */short) arr_11 [i_7] [i_7] [i_0] [i_1] [i_1] [i_0] [i_0]);
                            var_27 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((min((((/* implicit */unsigned long long int) (signed char)0)), (5378683744701373122ULL))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_3 [i_8]) : (((/* implicit */int) var_9))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_21 [i_8] [(signed char)10] [i_2] [(signed char)10] [(signed char)10])))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_8])), (242121961U)))) && (((/* implicit */_Bool) (unsigned short)58429))));
                            var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551602ULL)));
                        }
                        arr_25 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(short)6] = ((/* implicit */unsigned long long int) ((((2130679708) % ((+(((/* implicit */int) var_9)))))) - (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3 - 1] [i_2 - 2] [i_2 - 2] [i_0 + 1])) != (((/* implicit */int) arr_15 [i_3 + 1] [i_2 - 2] [i_2 - 2] [i_0 + 3])))))));
                        var_31 = ((/* implicit */signed char) ((min((((unsigned long long int) 242121961U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) | (191948223941806022ULL))))) == (((((/* implicit */unsigned long long int) arr_22 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 2])) | (((((/* implicit */_Bool) (signed char)11)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_2 + 1] [i_1] [i_0 + 3] [i_2 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_9]))) | (arr_21 [i_9] [i_9] [i_0 + 3] [i_0] [i_0]))))));
                        var_32 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((short) arr_29 [i_2]))) ? ((-(((/* implicit */int) arr_26 [i_0] [0LL] [0LL] [i_0] [0LL] [i_2])))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_9] [i_9] [i_9] [i_2] [i_2])) ? (((/* implicit */int) arr_14 [(signed char)17] [i_2] [i_2] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
                        arr_31 [i_0] [i_0] [i_9] = ((/* implicit */short) arr_18 [i_0 + 1]);
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_33 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)58429)) <= (min((arr_27 [i_1] [i_1]), (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            var_34 = (i_11 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_17 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]) >> (((arr_17 [i_0] [i_11] [14ULL] [i_10] [i_10] [i_11 + 2] [i_11]) - (3764315239U)))))) : (((/* implicit */unsigned char) ((arr_17 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]) >> (((((arr_17 [i_0] [i_11] [14ULL] [i_10] [i_10] [i_11 + 2] [i_11]) - (3764315239U))) - (1566981047U))))));
                            arr_37 [i_2] [i_11] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_7 [i_0]);
                        }
                        for (unsigned char i_12 = 2; i_12 < 21; i_12 += 3) 
                        {
                            arr_41 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned short)58429)))) + (2147483647))) >> (min((((/* implicit */unsigned int) (unsigned char)1)), (((((/* implicit */_Bool) arr_28 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_10]))) : (var_4)))))));
                            arr_42 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((arr_22 [i_12 - 1] [i_2 - 2] [3] [i_0 + 3] [i_0 + 3]) + (((((/* implicit */_Bool) arr_22 [i_12 - 2] [i_2 + 1] [i_1] [i_1] [i_0 + 2])) ? (arr_22 [i_12 - 1] [i_2 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (arr_22 [i_12 - 1] [i_2 - 2] [i_2] [i_0 + 2] [i_0 + 2])))));
                        }
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0 + 3] [i_2 - 1]))))) | (min((var_4), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-88)), (arr_24 [i_2] [i_1] [i_2] [i_2] [i_2]))))))));
                    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_0]))));
                    arr_43 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_32 [i_2 - 1] [i_2] [i_2] [i_0 + 3])))) ? (((int) var_2)) : (arr_32 [i_2 - 1] [i_2] [i_2] [i_0 + 3])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) 
    {
        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_37 = ((/* implicit */int) arr_18 [i_15]);
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_18 [i_16 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)31411))))) : (((((/* implicit */int) arr_18 [i_16 - 1])) & (((/* implicit */int) arr_18 [i_16 - 1]))))));
                                var_39 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)43527)), (var_12))) ^ (((/* implicit */unsigned int) (-2147483647 - 1)))));
                                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_13 + 1] [i_15 - 1])) ? (arr_27 [i_13 - 1] [i_15 - 1]) : (arr_27 [i_13 - 1] [i_15 - 1])))) ? (arr_27 [i_13 + 1] [i_15 - 1]) : ((-(arr_27 [i_13 - 1] [i_15 - 1])))));
                            }
                        } 
                    } 
                    var_41 = var_9;
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_33 [0ULL] [i_14] [i_15] [i_14] [i_14]))))))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_14] [i_14] [i_15] [i_14] [i_15] [i_14] [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_13] [20] [i_15] [i_13] [i_13] [20] [i_13])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_13] [i_13] [i_15])))))) : (min((8602935655259717606ULL), (((/* implicit */unsigned long long int) arr_56 [i_13] [i_13] [i_14] [i_15])))))), (((/* implicit */unsigned long long int) var_3)))))));
                }
            } 
        } 
    } 
}
