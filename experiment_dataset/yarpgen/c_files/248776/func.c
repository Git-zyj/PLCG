/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248776
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] |= ((signed char) (-((+(((/* implicit */int) (unsigned short)0))))));
                                var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                                arr_17 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) arr_15 [i_2 + 1] [i_2 + 1] [i_1] [i_0]))))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)53))))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_4))));
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)18175)) : (((/* implicit */int) (signed char)52))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_2] |= ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33134))) : (var_2))), (((/* implicit */long long int) arr_6 [i_0] [i_2 - 1] [i_2]))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_0] [i_1] [i_0] [i_0])))))) : ((((((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) + (2147483647))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)2] [i_0] [15])) : (((/* implicit */int) (signed char)(-127 - 1))))) - (2203))))));
                    arr_20 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)254)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (750889737))))))) : (((/* implicit */int) min((arr_7 [(unsigned short)5] [i_2 + 1] [i_2] [i_1]), (((/* implicit */short) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (unsigned short)65535);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51717)) || (((/* implicit */_Bool) (unsigned char)24))))), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6))))))))));
}
