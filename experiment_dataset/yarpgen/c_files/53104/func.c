/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53104
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) * (((/* implicit */int) var_14))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (_Bool)1))))) - (max((var_8), (((/* implicit */unsigned int) (unsigned short)8621)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-2147483647 - 1))), (var_12)))) ? (var_1) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) | (arr_6 [i_2 - 2] [i_2 + 1] [(unsigned char)6])))) ? (arr_6 [i_2 - 2] [i_2 - 1] [(_Bool)1]) : ((~(arr_6 [i_2 - 1] [i_2 + 1] [10ULL])))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */short) arr_3 [i_0] [i_1]))));
                    arr_8 [i_0] = ((/* implicit */int) var_11);
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) (unsigned short)10029);
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */int) var_12);
                    var_20 = ((/* implicit */unsigned char) arr_1 [i_1 + 2]);
                }
                var_21 -= arr_0 [i_0] [i_1];
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (arr_14 [i_0] [i_0] [i_0 + 1])));
                    arr_16 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((arr_10 [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_16)))) < (((/* implicit */int) (unsigned short)28227))));
                    arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (var_15)))));
                    var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4])) ? (arr_2 [i_4] [i_1] [i_0]) : (((/* implicit */int) var_3)))) >= (((/* implicit */int) var_4))));
                }
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (unsigned short)19617))));
                        arr_22 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && ((_Bool)1)))) > ((~(arr_2 [i_1] [i_5] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))) : (-8475349049502979920LL)));
                    }
                    arr_23 [i_1] [i_1] [i_5] [i_0] = ((/* implicit */short) var_7);
                    var_25 = var_9;
                    var_26 = ((/* implicit */int) var_16);
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    arr_27 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44680)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22210)))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)-44))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_13);
    var_29 |= ((/* implicit */unsigned long long int) var_13);
    var_30 = ((/* implicit */unsigned int) var_13);
}
