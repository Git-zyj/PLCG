/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41730
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_1] [19ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_5 [i_0] [18ULL] [i_1] [i_0])), (2147483632LL)))))) ? ((-(((/* implicit */int) ((_Bool) -295467522))))) : (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_1])))));
                                var_16 ^= ((/* implicit */short) min((((unsigned int) (!(((/* implicit */_Bool) var_9))))), (((/* implicit */unsigned int) arr_11 [i_3] [i_3] [i_1 - 1] [i_1 - 1] [i_1] [i_3]))));
                                arr_13 [i_0] [i_0] [i_0] [(unsigned short)10] [i_2] [i_3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (arr_3 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0])), ((unsigned short)65535))))) : (((arr_11 [i_4] [i_4] [i_0] [i_0] [4] [i_0]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1 - 1] [i_0] [i_1] [i_0])) ? (arr_10 [i_0] [i_2] [i_1 + 1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */unsigned int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) (unsigned short)65535);
                    arr_15 [i_0] [i_0] [13LL] [i_1] = max((((/* implicit */unsigned int) (signed char)1)), (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((-(((((/* implicit */_Bool) (unsigned short)65532)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)26386)) ? (((/* implicit */int) var_14)) : (var_15))), (((int) 1055247879U))))))))));
    var_19 &= ((/* implicit */unsigned long long int) ((1055247852U) << (((max((((/* implicit */int) var_3)), (var_15))) % ((-(var_15)))))));
}
