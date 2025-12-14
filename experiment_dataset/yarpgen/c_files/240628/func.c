/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240628
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] = ((/* implicit */short) ((long long int) max((arr_2 [(signed char)0] [i_2]), ((~(0ULL))))));
                                var_19 &= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (_Bool)0)), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)6] [i_1] [i_0] [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) (+(arr_5 [i_2] [(unsigned short)0]))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) var_9);
                arr_12 [i_0] [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) var_17);
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_15 [i_0] [(_Bool)1] [(unsigned short)8] [1] = ((/* implicit */unsigned short) arr_13 [(_Bool)1] [(unsigned short)1] [i_5] [(signed char)6]);
                    arr_16 [i_0] [(unsigned char)5] [(short)3] [i_5] = ((/* implicit */signed char) (+((~(arr_2 [(short)10] [i_1])))));
                    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)32756)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) || ((_Bool)1)))) : (((/* implicit */int) var_14))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_19 [i_0] [i_6] [9] = ((/* implicit */short) (_Bool)1);
                    var_22 = ((/* implicit */long long int) arr_2 [9ULL] [i_6]);
                    var_23 = ((/* implicit */unsigned short) arr_2 [(_Bool)1] [(signed char)6]);
                    arr_20 [i_6] [0] = ((/* implicit */unsigned short) var_8);
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    arr_24 [i_7] [9U] [(short)6] = max((((/* implicit */int) arr_23 [i_0] [i_1 - 3] [i_7] [(_Bool)1])), (996809237));
                    arr_25 [(unsigned char)5] [i_1] [(unsigned char)4] = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), ((+(((/* implicit */int) ((unsigned short) (unsigned char)254)))))));
                    var_24 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64253))) + ((+(5ULL))))), (arr_2 [i_0] [i_0]));
                    arr_26 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)1283)))) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_0), (((/* implicit */short) var_14)))), (arr_0 [i_1 + 1]))))) : (arr_2 [(_Bool)1] [i_7])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 3) 
        {
            {
                arr_33 [i_8] [i_9] = ((/* implicit */unsigned long long int) var_10);
                var_25 = ((/* implicit */short) max((((/* implicit */int) min((var_16), (arr_30 [i_8] [i_8] [7ULL])))), (((int) arr_17 [i_9 - 3] [i_8]))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 4; i_10 < 10; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_26 -= ((/* implicit */short) max((((/* implicit */int) arr_8 [6LL] [i_10] [i_8] [(short)6])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_8 [i_8] [0] [i_8] [4U]))))));
                            arr_40 [i_9] [(unsigned short)3] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_28 [i_8] [0LL]))))) ^ (arr_10 [i_9 + 1] [i_9] [8U] [(short)4] [i_10] [i_10 - 1]))), (((((/* implicit */_Bool) 0U)) ? (arr_10 [(_Bool)1] [i_10 - 1] [i_9 - 2] [i_8] [i_8] [9ULL]) : (arr_10 [(unsigned short)4] [i_10 - 1] [i_9 - 3] [i_8] [(signed char)2] [(signed char)1])))));
                            arr_41 [i_8] [i_9] [1U] [(unsigned short)2] [4U] [(unsigned char)0] = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) || (var_9)));
    var_28 = ((/* implicit */unsigned long long int) var_6);
    var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) ((_Bool) var_15))), ((+(0ULL)))))));
}
