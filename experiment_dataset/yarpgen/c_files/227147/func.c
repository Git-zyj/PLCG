/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227147
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1] [i_1 + 3]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2])))))));
                arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)3] [20LL]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52227)) >> ((((~((-(((/* implicit */int) var_7)))))) + (51)))));
                                arr_14 [i_3] [i_3] [i_2] [i_3] [19U] = ((/* implicit */unsigned short) ((signed char) max((arr_12 [14LL] [i_4 + 1] [i_3] [i_2] [i_1] [i_0]), (((/* implicit */int) (signed char)127)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                            {
                                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 584552220))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 32767U)) ? (32762U) : (((/* implicit */unsigned int) 871277924))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                            {
                                var_15 |= ((/* implicit */unsigned short) (-(((int) var_3))));
                                arr_21 [15U] [24] [i_2] [24] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                                arr_22 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_16 [i_1] [i_1] [i_2] [(signed char)8]) : (var_4)));
                                arr_23 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))));
                            }
                            for (int i_7 = 3; i_7 < 23; i_7 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned short) var_1);
                                arr_26 [i_0] [i_2] [i_2] [i_3] [i_7] = ((/* implicit */unsigned short) (signed char)-1);
                                arr_27 [i_0] [i_0] [(signed char)6] [i_0] [14] [i_7 - 2] |= ((/* implicit */unsigned short) 737243836U);
                            }
                            var_17 = ((/* implicit */signed char) ((var_5) * (((/* implicit */int) (!(((/* implicit */_Bool) 17)))))));
                            var_18 = ((/* implicit */int) max((((/* implicit */long long int) ((((var_4) > (((/* implicit */unsigned int) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1530263586U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))))), (((((/* implicit */_Bool) 36028797018963967LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (28671598856229000LL)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((((((/* implicit */int) var_3)) / (((int) var_4)))) != (((/* implicit */int) var_3))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            {
                arr_34 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) ((unsigned short) arr_10 [i_9] [i_9] [i_8] [i_8])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((0) ^ (584552221)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-5072868004193755816LL) > (((/* implicit */long long int) -584552222)))))) : ((+(4294934528U))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) 32769U);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_9 + 2] [i_9] [i_12] [i_9 + 2] [i_9 - 1])) ? (1709242404U) : (((/* implicit */unsigned int) var_5)))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_12])) ? (((/* implicit */long long int) -9)) : (-1LL)));
                                arr_42 [i_8] [i_9] [0LL] [i_11] [8] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_9] [(signed char)5] [i_9] [i_9] [i_9 + 3] [i_9])) : (((/* implicit */int) var_3)));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) arr_6 [i_8])))));
                            }
                            var_24 = 11U;
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) max(((signed char)102), (arr_4 [i_9 + 1])))), (((((/* implicit */_Bool) arr_4 [i_9 + 3])) ? (-3473033416645958787LL) : (((/* implicit */long long int) arr_12 [i_9 - 2] [i_9 - 2] [i_9] [18] [i_8] [i_9 - 2])))))))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */long long int) -1);
            }
        } 
    } 
    var_27 = ((long long int) ((((/* implicit */_Bool) ((unsigned int) 0LL))) ? ((~(1304884696))) : (min((var_1), (((/* implicit */int) var_3))))));
    var_28 = ((/* implicit */unsigned short) var_4);
}
