/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231072
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((int) ((short) arr_1 [i_1] [i_0])));
                var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_2 [i_0] [0ULL] [i_1])), (max((var_16), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))) != (((/* implicit */long long int) ((/* implicit */int) (short)11881)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) arr_8 [i_2]);
            arr_11 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
            var_20 += ((long long int) arr_6 [i_2]);
            var_21 = ((/* implicit */int) arr_2 [i_2 - 3] [i_2 + 3] [i_3 - 2]);
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_4 [i_3])))));
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(((unsigned int) (~(var_9)))))))));
            arr_15 [(short)5] = ((/* implicit */unsigned int) ((int) var_17));
        }
        arr_16 [i_2] [i_2] |= (((+((~(((/* implicit */int) arr_3 [i_2 + 2])))))) & (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) arr_5 [i_2] [i_2])))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_21 [i_2] [i_5] [i_6] &= ((unsigned short) max((((var_1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22553))))), (((long long int) arr_8 [i_2]))));
                    arr_22 [i_2] [i_2] [i_6] = ((/* implicit */_Bool) var_0);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) arr_1 [i_2] [i_2]);
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+((~((+(((/* implicit */int) arr_5 [i_2] [i_6])))))))))));
                            }
                        } 
                    } 
                    arr_28 [i_2] [(short)1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)29)) ^ ((~(((/* implicit */int) arr_5 [i_2] [i_5])))))) > (((/* implicit */int) ((short) arr_25 [i_2] [0LL] [i_2 - 3])))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) min((((arr_9 [i_2]) >> (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_13)))))), (((/* implicit */unsigned int) ((int) (~(var_9))))))))));
    }
    for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
    {
        var_26 = ((/* implicit */int) (-((-(var_9)))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    var_27 -= ((/* implicit */int) ((unsigned int) min((arr_29 [i_9 + 1]), (((/* implicit */short) arr_30 [(unsigned char)15])))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (~((-(min((((/* implicit */long long int) arr_31 [i_9])), (var_11))))))))));
                    arr_38 [(unsigned short)2] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) arr_36 [i_11]));
                }
            } 
        } 
    }
}
