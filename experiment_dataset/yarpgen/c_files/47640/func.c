/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47640
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
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 4])) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1])))))) ? (((arr_4 [i_1 + 2] [i_0 - 1]) ? (((-945862706285750812LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [(unsigned char)4]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_0 + 2]), (arr_3 [i_0 + 3] [i_0])))), (min((max((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0] [13])))), (max((var_0), (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                arr_7 [(signed char)16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 480LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 3]))) : (arr_5 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 - 3] [i_0]), (arr_3 [i_0 - 4] [8U]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0])), (arr_5 [i_0 + 2])))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_14);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (_Bool)1)))))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_14)))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_2 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))), (((((/* implicit */_Bool) max(((signed char)116), (((/* implicit */signed char) arr_1 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) var_4)) : (((var_0) + (((/* implicit */unsigned long long int) var_1))))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2])) < (var_1))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_16 [i_2] [i_2] [i_4]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            var_19 += ((((((/* implicit */_Bool) arr_8 [14ULL] [18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [(signed char)8] [i_5] [i_3 + 1] [i_4 + 2] [i_6] [i_6 + 1])))) >= (min((((/* implicit */int) arr_19 [i_3] [i_5] [i_3 + 1] [i_4 + 2] [i_5] [i_6 + 1])), (arr_8 [i_3 - 1] [7U]))));
                            arr_23 [i_2] [11] [i_4] [i_5] [i_6] [1] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((+(((/* implicit */int) arr_3 [i_2] [i_5]))))))));
                            arr_24 [i_2] [i_6] [i_4] [i_5] [i_6] [i_5] [i_3 - 1] = 1028773456U;
                        }
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 *= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4] [i_4])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_2] [i_4] [i_3 + 1] [i_4] [i_7] [i_7]))))) : (var_5)))));
                        arr_28 [i_2] [i_4] [i_7 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)28))))) : (min((var_5), (((/* implicit */unsigned int) (unsigned short)0))))))));
                    }
                    for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        arr_32 [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_3 [i_3 - 1] [i_3]), (arr_3 [i_3 - 1] [i_3])))), ((+(min((((/* implicit */unsigned int) var_12)), (2451714234U)))))));
                        var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8 + 3] [i_2])))))) || (((/* implicit */_Bool) ((short) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)21229)) & (((/* implicit */int) arr_18 [i_2]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_3]) : (480LL))) : (((/* implicit */long long int) arr_22 [i_8] [i_4 - 2] [i_3 - 1] [i_3 - 1] [18U] [i_3]))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)0))));
                    }
                    arr_33 [i_2] [i_3 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                    arr_34 [4ULL] = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) 4294967294U);
}
