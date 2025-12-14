/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217839
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
    var_18 = ((/* implicit */_Bool) 1315408418U);
    var_19 = ((/* implicit */_Bool) ((unsigned int) var_0));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_14))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) * (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(491510775U)));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [5LL] [i_1 - 3] [i_3]))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_0 [i_3]))));
                    var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(491510760U)))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 - 3] [i_1 + 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_0)))));
                    arr_13 [8LL] [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_12 [(short)9] [i_1 + 2] [(short)9] [(short)5]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1]))));
                }
                arr_14 [7] [(_Bool)1] = ((/* implicit */short) var_3);
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (short)31222))));
                    arr_19 [i_0] [i_0] [i_0] [(signed char)4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_1]), (2147483520U)))) ? (((/* implicit */int) ((((long long int) arr_8 [i_0] [i_1] [i_1])) < (((/* implicit */long long int) ((((-1282114953) + (2147483647))) << (((((/* implicit */int) arr_12 [(_Bool)1] [2] [i_4] [9ULL])) - (13466))))))))) : (((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) arr_2 [0U] [i_1])) ? (var_1) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 2])))) - (703674098)))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))))) ? (((arr_18 [i_1 + 2]) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_4])) : (((((/* implicit */_Bool) 3803456518U)) ? (((/* implicit */int) (short)18852)) : (((/* implicit */int) (short)-18853)))))) : (((/* implicit */int) ((unsigned char) (short)-18848)))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])))))));
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_22 [i_5] [i_5] [i_1 - 3] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) -1282114955)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [(_Bool)1] [i_1] [i_1 + 1])))) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (short i_7 = 3; i_7 < 8; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8398)) ? (((/* implicit */int) arr_1 [i_7 - 2] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_7 - 1] [i_1 - 2]))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_0] [1] [1]))) ? (((/* implicit */int) arr_5 [i_1] [9U] [i_6])) : (((((/* implicit */int) (short)14178)) / (((/* implicit */int) arr_24 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [(_Bool)1] [3LL]))))));
                            arr_28 [(_Bool)1] [i_6] [i_5] [(_Bool)1] [i_7] = ((/* implicit */_Bool) (signed char)-122);
                            var_29 = ((((/* implicit */_Bool) arr_0 [i_7 + 2])) ? ((((_Bool)1) ? (491510755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [(unsigned char)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))));
                            arr_29 [(_Bool)1] [i_6] [i_6] [(_Bool)1] [(short)0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32740))) : (((arr_7 [(short)3] [1] [i_6]) ? (arr_2 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7])))))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_24 [(short)8] [i_1 + 2] [i_5] [i_5] [(short)2])) : (((/* implicit */int) ((248652441U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
                            arr_32 [(signed char)8] [9] [i_1] [(signed char)0] [i_6] = ((/* implicit */_Bool) ((arr_2 [i_1 + 1] [2LL]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_6] [(short)7] [i_8 - 1])))));
                            arr_33 [i_6] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_25 [i_5] [(_Bool)0] [i_5] [i_8 - 1] [i_8] [i_6]);
                            arr_34 [i_0] [(unsigned short)4] [i_0] [i_6] [(_Bool)1] = ((/* implicit */long long int) arr_31 [i_8] [i_6] [i_5] [i_1 - 2] [i_6] [i_0]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_5] [i_9] [i_5] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3839033012241696889ULL)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [6LL] [(_Bool)1] [9U] [i_5] [i_6] [(short)1] [i_9]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 - 2])))));
                            var_31 ^= ((/* implicit */short) ((((/* implicit */int) (short)9904)) != (((/* implicit */int) arr_18 [i_9]))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned short) (_Bool)1);
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) 4294967295U))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-61))));
                        arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(arr_2 [i_1 + 1] [i_1 - 3])));
                        var_35 ^= (_Bool)1;
                    }
                }
            }
        } 
    } 
}
