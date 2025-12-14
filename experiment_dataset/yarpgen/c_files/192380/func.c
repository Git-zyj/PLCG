/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192380
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1])) + (arr_9 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 - 1] [0U] [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1])) : (12971368048840053685ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1]))));
                            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_9 [(unsigned short)12] [i_0] [i_1] [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)26692)) == (((/* implicit */int) arr_1 [i_0]))))))));
                            var_14 = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_0] = ((/* implicit */short) ((arr_13 [i_1 + 4] [i_1 + 2]) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_14 [3] [i_1 + 1] [i_4] [i_5] [i_6])) & (((/* implicit */int) arr_11 [i_1 + 3] [i_4] [i_6])))))) : (min((((18385119881533939444ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))), (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [17LL] [i_0]))))));
                                var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_1] [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) min((arr_3 [(unsigned char)5] [i_6] [i_6]), (((/* implicit */long long int) ((9882642993502786043ULL) < (arr_9 [i_1] [17ULL] [i_1] [i_0]))))))) : (var_2)));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((max(((short)-32763), ((short)-32763))), (arr_5 [i_0] [i_5])))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */short) var_4)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_7);
    var_18 |= ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_7))))))));
    var_19 |= min((((var_10) << (((((((/* implicit */_Bool) var_6)) ? (-6) : (((/* implicit */int) var_12)))) + (54))))), ((~(min((14147771184612314890ULL), (((/* implicit */unsigned long long int) var_9)))))));
}
