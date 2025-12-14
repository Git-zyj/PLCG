/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240139
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min(((-(18446744073709551615ULL))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (9ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((unsigned char) (signed char)63)))))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 12026082403427298779ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3] [i_0])) & (((/* implicit */int) arr_4 [i_2]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) (short)-11664);
                            var_15 = ((/* implicit */_Bool) 18446744073709551615ULL);
                            arr_19 [i_0] [i_1] [i_1] [i_5] = (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) (_Bool)1))))) : (var_4));
                            var_16 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_12 [(short)8] [i_4 + 1] [(short)8])) ? (((/* implicit */int) var_5)) : (arr_10 [i_0] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned char) var_11);
}
