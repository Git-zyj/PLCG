/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239253
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
    var_18 = min(((+(((/* implicit */int) (short)-24026)))), (((((/* implicit */int) (short)-14339)) - (((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)102))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [15] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_0 [i_2 - 1] [i_1])), (((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))) + (max((((/* implicit */unsigned int) arr_0 [i_0] [i_1 - 1])), (var_11)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14335))) > (var_0)))) << (((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_2] [i_4])) : (((/* implicit */int) (short)7436)))), (((/* implicit */int) ((unsigned short) var_7))))) + (37)))));
                                var_20 = ((/* implicit */signed char) (short)14329);
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)1)), (arr_8 [i_2] [i_0] [i_2] [i_1] [i_0])))) <= (((/* implicit */int) ((unsigned char) var_14))))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2 + 1] [i_2 - 1])), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) max((var_6), (((/* implicit */int) arr_8 [i_2] [i_2] [(unsigned short)9] [(_Bool)1] [i_2]))))) : (var_3)))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_16 [i_2] [i_1 - 1] [i_2] [i_5 + 1] [(short)9] [i_5 + 1] = ((/* implicit */unsigned char) (+(arr_7 [i_0] [i_1] [i_2 + 1] [i_2] [i_5 - 1] [i_6])));
                                var_21 = ((/* implicit */unsigned short) (+(1094400741307773523LL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) min((var_22), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14329)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)111))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [1]))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((var_12), (((/* implicit */long long int) ((int) ((var_12) < (((/* implicit */long long int) var_15)))))))))));
}
