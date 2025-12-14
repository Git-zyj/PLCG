/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31917
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
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_4 [i_2] [i_1] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) - (2072099839U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */int) var_7);
                var_21 &= ((/* implicit */unsigned long long int) (!((_Bool)0)));
            }
            var_22 = ((/* implicit */unsigned char) min((((arr_5 [i_0] [i_1]) << (((((/* implicit */int) (short)-32166)) + (32226))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_9 [i_4]))));
                        var_24 = ((/* implicit */unsigned int) arr_16 [i_0] [i_3] [i_0] [i_4] [i_5 - 3]);
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                            arr_19 [4LL] [4LL] [4LL] [i_5 - 1] [i_3] &= ((/* implicit */unsigned long long int) var_3);
                        }
                        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_5 + 2] [i_5 + 2] [i_5 + 2])) : ((~(arr_2 [i_7])))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32166)) & (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) arr_0 [i_3])), (arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) max((arr_21 [i_0] [7ULL] [i_4] [i_4] [i_7]), (((/* implicit */int) arr_1 [i_3])))))));
                            arr_22 [i_4] = ((/* implicit */signed char) (-((+(arr_7 [i_0] [i_3] [(signed char)13])))));
                            var_27 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        }
                        var_28 = ((7681702959649184002ULL) / ((+(arr_10 [i_0] [i_3] [i_4]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_3]))));
        }
        var_30 += ((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_0])));
        var_31 &= ((/* implicit */unsigned long long int) (~(max(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)17865)))), (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_32 ^= ((/* implicit */unsigned long long int) var_4);
}
