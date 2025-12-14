/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31421
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
    var_14 = ((/* implicit */signed char) var_9);
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [(short)1]))))) + (var_13))) : (min((max((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (arr_3 [i_0] [6]))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [12]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [16LL] [i_3] [i_4 + 4] = ((((/* implicit */int) ((unsigned char) (short)17528))) - (((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 4] [i_4 + 3])) ? (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [4]), (arr_4 [i_2] [i_2] [i_1])))) : (((/* implicit */int) ((short) arr_4 [i_4 - 2] [12LL] [(short)16]))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20425))) : (-9223372036854775807LL)))) ? ((-(((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [6LL] [i_1] [(_Bool)1] [(_Bool)1])) : (var_9))))) : (((var_9) % (min((arr_3 [10ULL] [6ULL]), (((/* implicit */unsigned long long int) arr_7 [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        for (int i_6 = 4; i_6 < 18; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */short) arr_17 [9ULL] [5ULL]);
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_24 [i_5 + 1] [i_6] [i_6] [2LL] = ((/* implicit */unsigned char) (!((((+(144115188075855871ULL))) > (((/* implicit */unsigned long long int) 9223372036854775797LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = min((((/* implicit */int) var_3)), (((arr_15 [i_5] [i_5 + 1]) ? (((/* implicit */int) arr_26 [i_5] [i_5 + 1] [i_7])) : (((/* implicit */int) arr_26 [15] [i_5 + 1] [(unsigned char)10])))));
                                arr_32 [(signed char)17] = ((/* implicit */short) arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_5] [i_7] [i_6 - 3]))));
                            }
                        } 
                    } 
                    arr_33 [i_5 + 3] [(unsigned char)17] [(unsigned char)10] [i_7] = ((/* implicit */unsigned short) ((unsigned char) min((9223372036854775797LL), (((/* implicit */long long int) (short)-1)))));
                }
                arr_34 [i_5] = ((/* implicit */long long int) arr_17 [i_6 - 3] [i_6 - 1]);
            }
        } 
    } 
}
