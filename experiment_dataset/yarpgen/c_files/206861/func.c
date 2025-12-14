/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206861
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_14 |= ((/* implicit */_Bool) ((((/* implicit */int) (short)-24394)) * (((/* implicit */int) (short)-11116))));
                        var_15 &= ((/* implicit */int) (short)-1);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min(((short)24378), (((short) arr_1 [i_0] [8U]))));
                            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) (short)-30351);
                            arr_15 [i_0] [i_1] [i_0] [(short)9] [i_0] [11U] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (arr_8 [i_1] [i_0] [i_0] [i_3] [i_2] [i_3]) : (((/* implicit */long long int) arr_7 [i_4 + 4] [i_1] [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)9880)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_0] [i_5] &= ((/* implicit */unsigned char) max((min((min((-2046506303), (((/* implicit */int) arr_11 [i_0] [(short)12] [(short)2] [(short)12] [i_5] [i_5])))), (((((/* implicit */_Bool) (short)24373)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((min((((/* implicit */int) var_9)), (var_12))) < (((int) (short)9880)))))));
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-24392)) / (((/* implicit */int) (short)32759)))))))), ((~(2420088266U)))));
                            arr_20 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || ((_Bool)1))))) * (min((min((((/* implicit */unsigned int) arr_0 [i_2])), (0U))), (((/* implicit */unsigned int) var_7))))));
                        }
                    }
                    var_17 = ((/* implicit */short) min((2058102063), (((/* implicit */int) (short)1023))));
                    var_18 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)12)) ? (((8U) - (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(short)8] [i_0] [i_0] [i_2] [4]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0]), (var_11)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) ((unsigned char) arr_5 [i_0])))));
                }
            } 
        } 
        var_20 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(short)12] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) < (((((/* implicit */_Bool) (short)9880)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)0)))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_16 [i_0]), (arr_16 [i_0])))) ^ (min(((~(-1408313825))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        var_22 = ((/* implicit */_Bool) (unsigned char)253);
    }
    var_23 = ((/* implicit */int) var_7);
}
