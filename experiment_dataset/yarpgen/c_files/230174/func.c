/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230174
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_9))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_1 [i_0]))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] = (-(((/* implicit */int) arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13294))) * (7665269868104933567ULL)))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) & (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_5 [i_2 + 1] [i_3 + 3] [i_2]))));
                        var_14 = ((/* implicit */unsigned int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3] [i_0] [i_3])) || (((/* implicit */_Bool) arr_9 [i_1] [i_2] [12LL] [i_0] [i_2 + 1])))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_2 + 1] [i_0] [i_5 + 1] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                            var_17 = (!(((/* implicit */_Bool) var_0)));
                            var_18 ^= ((/* implicit */short) arr_4 [i_2]);
                            var_19 = ((/* implicit */long long int) (+((+(8388604)))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 1) 
                        {
                            var_20 &= ((((/* implicit */_Bool) (short)-32758)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_6 + 1] [i_1] [i_2])));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_13 [i_1] [i_0] [i_4] [i_6]))));
                        }
                        arr_18 [i_0] [i_1] [(signed char)0] [16LL] [i_0] [i_4] &= var_3;
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120))));
                    }
                    for (short i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_8] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_1] [i_0])) ? (2778125416285739352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 + 2] [i_7] [22U] [i_0]))))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_2] [i_7] [i_9] = ((/* implicit */unsigned short) ((549755813760ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_1] [i_1] [i_2 + 1] [1] [i_9 + 2]))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((int) var_3)))));
                            arr_27 [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_28 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_24 [i_0] [i_0] [13LL] [i_2]);
                        }
                        arr_29 [i_2] [3] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (var_4))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((arr_9 [i_0] [i_0] [i_1] [i_0] [i_7]) | (arr_24 [i_0] [(signed char)6] [i_2] [i_0]))))));
                        arr_30 [i_2] = ((/* implicit */signed char) arr_13 [i_0] [i_2] [i_0] [i_0]);
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) (-(arr_15 [i_0] [i_0] [i_2] [(signed char)22] [i_2]))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_22 [i_10] [i_2 + 1] [i_1] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 2; i_11 < 22; i_11 += 1) 
                        {
                            arr_39 [i_2] [i_1] = (-(arr_3 [i_11 - 1] [i_1] [i_0]));
                            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0] [i_0]));
                        }
                        for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) (~(arr_41 [i_0] [i_1] [i_2] [i_10] [i_1] [i_0] [i_0])));
                            var_30 = ((((/* implicit */int) arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) & (((/* implicit */int) arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                        }
                        for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_13] [i_2] [i_2] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_32 = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_33 = ((/* implicit */_Bool) var_1);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_14 = 1; i_14 < 21; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_10]))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_47 [i_10] [i_2] [i_10] [i_2] [i_2 + 1])) : (-2147483643)));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)230)) > (((/* implicit */int) ((0) != (((/* implicit */int) arr_35 [i_10] [i_10] [i_2] [i_10] [i_14] [i_0]))))))))));
                        }
                    }
                    arr_48 [i_2] [i_1] [(unsigned short)10] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_36 [i_2 + 1] [(short)7] [i_1] [(short)7] [(short)7]))));
                    var_37 = ((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2] [i_2 + 1] [3] [i_2]));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((unsigned long long int) arr_40 [i_0] [i_1] [i_2 + 1])))));
                    var_39 = var_9;
                }
            } 
        } 
    }
    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
    {
        var_40 = ((/* implicit */int) min(((-((~(var_5))))), (((/* implicit */unsigned long long int) ((_Bool) var_0)))));
        arr_53 [i_15 - 1] = (!((!(((/* implicit */_Bool) (short)32765)))));
        arr_54 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_22 [i_15] [i_15] [i_15 + 1] [i_15])), (var_5)))))) ? (((/* implicit */unsigned int) ((int) min((arr_6 [i_15] [(_Bool)1] [(_Bool)1] [i_15]), (((/* implicit */unsigned short) arr_35 [i_15] [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_15]))) + (2652073547U)))));
        arr_55 [i_15] = ((/* implicit */unsigned short) (-((-(var_7)))));
    }
    var_41 = ((/* implicit */int) (-(var_3)));
}
