/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203132
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
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [21] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((arr_3 [i_0 - 1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))) : (((/* implicit */int) (unsigned char)188))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_2] = var_14;
                    arr_10 [i_0 + 1] [i_0] [15ULL] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_6 [i_2]));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_4] [i_3] = ((int) 4825857489124476652ULL);
                        var_19 = ((/* implicit */short) (+(((/* implicit */int) var_15))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) var_18);
                            arr_20 [i_0 - 1] [i_4] = ((/* implicit */unsigned int) ((short) ((unsigned short) (unsigned char)23)));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) (signed char)73)))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)39)) ? (arr_15 [i_3] [i_1] [(signed char)17] [i_4 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_0 - 1] [i_1] [i_0 - 1] [i_4 - 1] [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_6 [2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4] [i_6])) ? (0) : (18)))) : (arr_1 [(unsigned short)7])));
                            arr_24 [i_4] [i_1] [i_4] [i_4 - 1] [21ULL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_2 [i_0 - 1] [i_4 - 1] [i_6])));
                            var_23 = ((/* implicit */unsigned long long int) (unsigned short)53762);
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [18ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -29)))))))));
                            arr_27 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 10ULL))));
                        }
                        arr_28 [i_0] [(signed char)17] [23LL] [(unsigned short)22] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)18847))));
                    }
                    arr_29 [i_0] = ((/* implicit */long long int) (~((~(-21)))));
                }
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)28123)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36437)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)39))))) : (var_12)))));
}
