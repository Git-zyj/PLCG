/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238017
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
    var_16 &= ((/* implicit */unsigned int) var_4);
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (unsigned short)65319)))))) & (((unsigned int) min((((/* implicit */unsigned int) var_14)), (1173130430U)))))))));
    var_18 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((0ULL), (arr_4 [i_0]))))) ? ((+(3121836866U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) ((unsigned char) (unsigned short)65319))))))));
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_3 - 2])) || (((/* implicit */_Bool) arr_5 [i_1 + 4] [i_3 + 1]))))), (min((max((5154738844361390681LL), (((/* implicit */long long int) (unsigned short)45732)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6359)) - (((/* implicit */int) var_11)))))))));
                            var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) arr_4 [i_0])) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)55771)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_0] [i_0])), ((unsigned short)45732)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (arr_5 [i_0] [i_0]))))), (((/* implicit */int) ((short) max((arr_2 [i_0]), (((/* implicit */unsigned int) var_10))))))));
            }
        } 
    } 
}
