/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33815
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 += arr_3 [i_0];
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    var_13 += (short)-10968;
                    var_14 += ((/* implicit */unsigned char) 17LL);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)7)))))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2 + 3] [0LL] [i_1 - 4]))));
                    }
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        var_16 += min((((((/* implicit */_Bool) arr_12 [i_1] [i_0])) ? (max((((/* implicit */long long int) (unsigned short)0)), (arr_11 [i_4 + 2] [(short)6] [i_1] [(unsigned short)7]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)14))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_4 + 4]))))));
                        var_17 = ((/* implicit */signed char) ((((var_2) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_1 - 3])) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_2 + 1] [i_1 - 3])))))));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)2] [i_1 - 3])) ? (-1) : (((/* implicit */int) (signed char)-32))))) ? (max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-63)), (arr_8 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_18 [14] [(_Bool)1] [14] [14] [i_1])) ? (var_2) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) var_10))))))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5] [i_0])) ? (arr_17 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_20 [(unsigned char)4] [i_1 - 1])) : (min((var_10), (((/* implicit */int) (unsigned char)7))))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((signed char) arr_22 [i_5 + 2])))));
                    }
                    var_21 = ((/* implicit */signed char) 0);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5 + 3] [(_Bool)0] [i_1] [i_0])) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) arr_22 [3LL]))))), (min((((/* implicit */unsigned int) arr_16 [i_0])), (arr_23 [5U] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)216)) * (((/* implicit */int) arr_22 [9]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)6]))) >= (3036177898565922152LL)))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_5 + 1] [i_0]))))))))));
                }
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_23 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) var_1))))))));
                    var_24 = ((/* implicit */unsigned int) ((max((var_8), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_1] [i_7])) ^ (((/* implicit */int) (unsigned char)237))))))) != (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_28 [(unsigned char)15] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) min((-345644335), (((/* implicit */int) (unsigned char)116))))) | (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)249))))) ^ (min((var_2), (((/* implicit */long long int) arr_23 [i_0] [i_1 - 3]))))))));
                }
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_23 [i_0] [i_0])) / (((long long int) (short)-23832))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_2);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (var_3)))), (var_8)))) ? (((/* implicit */unsigned long long int) 8418950324598963672LL)) : (var_7)));
}
