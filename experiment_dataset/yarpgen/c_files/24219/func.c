/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24219
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */int) (short)26706)), (((((/* implicit */int) var_7)) >> (((2438178556U) - (2438178553U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_1] [i_1] [i_1])))) ? (arr_2 [i_0] [i_0] [i_0 + 2]) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 + 3])) ? (var_13) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_2])) ? (arr_6 [i_0 + 2] [i_1] [i_2] [i_2]) : (arr_3 [i_0 + 3]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((((/* implicit */unsigned long long int) ((long long int) (signed char)-3))) + (arr_0 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((-1532541233563985999LL) - (((/* implicit */long long int) 4294967277U)))))));
                                arr_11 [3U] [3U] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(arr_10 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_2] [i_4 + 1] [i_4] [i_4]))) <= (((((/* implicit */_Bool) -7778671577022082653LL)) ? (arr_10 [i_0] [i_0 + 3] [i_0] [i_3] [i_4 - 1] [i_4] [i_4 - 2]) : (((/* implicit */unsigned long long int) -3385191862306122735LL))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((+(var_2))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 3]))))) / (arr_0 [i_0] [i_1])));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62063)) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-26706)) + (2147483647))) << (((arr_13 [i_5]) - (294958214)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-26706), (((/* implicit */short) (signed char)90)))))) : (-7778671577022082639LL))) : (((/* implicit */long long int) 3940288363U))));
                    arr_16 [i_5] [i_0] = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2])))))));
                    arr_17 [i_0] [i_0 + 2] [i_0] = ((/* implicit */int) var_11);
                }
                var_23 = ((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);
                var_24 = ((/* implicit */long long int) ((signed char) arr_5 [i_1] [i_0]));
            }
        } 
    } 
    var_25 = -7778671577022082623LL;
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) & (((6ULL) | (((/* implicit */unsigned long long int) 7778671577022082647LL))))))));
}
