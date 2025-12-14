/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38776
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [(unsigned short)6] [i_3] = ((/* implicit */signed char) var_0);
                            arr_14 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) arr_11 [i_2]);
                        }
                    } 
                } 
                arr_15 [i_1] [(_Bool)0] [(signed char)0] |= ((/* implicit */long long int) min((((((/* implicit */int) var_6)) ^ (((((/* implicit */int) (short)-25645)) ^ (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) arr_10 [i_0 + 1] [(unsigned char)14] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_12 = min((((/* implicit */int) ((max((var_0), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [6ULL] [i_4] [i_4])))))), (((((/* implicit */int) min(((unsigned short)65468), (((/* implicit */unsigned short) (unsigned char)184))))) * (((/* implicit */int) arr_0 [i_0 + 1])))));
                    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)10700)) : (((((/* implicit */_Bool) (unsigned short)7680)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)35893))))));
                }
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */short) var_4);
                        var_15 *= ((/* implicit */short) ((((/* implicit */int) arr_23 [i_0 + 1] [i_1] [i_5] [i_5])) + (-1820300125)));
                        arr_26 [i_0] [i_0] = (~((-2147483647 - 1)));
                    }
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (_Bool)1))));
                }
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    arr_30 [i_0 + 1] [i_1] [i_7] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_7 + 1] [i_7] [i_0]);
                    var_17 = ((/* implicit */unsigned int) arr_25 [i_7 - 2] [i_0 + 1] [i_0] [i_0 + 1]);
                    arr_31 [i_0] [i_1] [(unsigned short)14] [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 18374686479671623680ULL))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_8] [i_8]))))) : (arr_32 [3ULL] [3ULL])));
                        var_20 = ((short) arr_27 [i_0] [i_0] [i_0 + 1] [i_0]);
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_0), (((/* implicit */long long int) var_6)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_6)) - (189)))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))));
}
