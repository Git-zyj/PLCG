/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245110
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_6)))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_2 [i_0]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_3 - 1]))))))))));
                            arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) && (((/* implicit */_Bool) arr_2 [i_1 + 2]))))) & ((+(((/* implicit */int) var_12))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((1999707710729299046ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_2 [i_3 - 2])) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [(unsigned char)1] [i_2] [i_3]))) : (((/* implicit */int) arr_3 [i_0]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_10 [i_0] [0U] [0U] [0U]))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)135);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_5)) | (arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((3850484119U) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (unsigned char)122))))))))) | (((((-7399703940569399528LL) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) & (((/* implicit */long long int) var_8))))));
}
