/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36739
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 ^= max((2180499255211301996ULL), (((/* implicit */unsigned long long int) min((4294967285U), (arr_0 [i_2 - 1])))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 ^= ((/* implicit */unsigned short) var_3);
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_3)), ((short)96)))) | (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned short)23834)) : (((/* implicit */int) (short)-1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2 + 3] [i_2 + 3]))) : (37914963U)))))) : ((~(-295004484308007800LL)))));
                        arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) min(((~(101383320U))), (((/* implicit */unsigned int) (signed char)-6))));
                        var_14 = ((/* implicit */unsigned char) ((unsigned short) ((arr_4 [i_0] [(unsigned short)8] [i_0] [(unsigned short)8]) ? (((((/* implicit */_Bool) (short)12948)) ? (var_5) : (var_5))) : (max((((/* implicit */long long int) var_1)), (var_7))))));
                    }
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = var_8;
                        arr_14 [i_0] [i_1] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                        arr_15 [i_0] [i_0] [i_0] [13U] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854644736LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_20 [i_1] = ((/* implicit */signed char) 0ULL);
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_12 [i_1] [i_2] [i_4 - 2])))), (((int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24055)))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)8)), (9223372036854775785LL)))), (2199023255551ULL)))));
                            arr_21 [i_5] [i_0] = ((/* implicit */signed char) arr_10 [i_2 + 3] [i_2 - 1] [i_4 + 1] [i_5]);
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)248)) : (((/* implicit */int) (unsigned short)10340))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))) ? (((/* implicit */long long int) max((arr_16 [i_0]), (((/* implicit */unsigned int) var_9))))) : (min(((-(var_7))), (((/* implicit */long long int) var_8))))));
                        arr_25 [i_6] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) 2147483647U);
                        arr_26 [i_6] [i_0] [i_6] [9U] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))), ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_6]))))))));
                        arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [(unsigned short)7] [11U])))) & (min((2658665008U), (((/* implicit */unsigned int) var_8))))))) & (min((min((((/* implicit */unsigned long long int) 1219526241)), (arr_22 [i_0] [i_1] [i_2 + 3] [i_6 + 1] [i_0] [i_1]))), (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6))))) : (min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) arr_8 [i_2] [i_0] [i_0])), (4825216013892329745LL))))))))));
                        arr_31 [i_0] [i_1] = (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 2] [0ULL]))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(max((1886566007U), (((/* implicit */unsigned int) (unsigned short)62206))))));
}
