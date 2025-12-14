/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226386
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))), (var_14)))) ? (min((((/* implicit */unsigned int) var_3)), (max((var_14), (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 |= ((/* implicit */long long int) ((min((4294967295U), (((/* implicit */unsigned int) (signed char)127)))) ^ (max((((/* implicit */unsigned int) var_1)), (arr_3 [i_2] [i_2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] [i_3] [i_3] [i_1] [(signed char)4] [(unsigned char)4] |= ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_1] [(_Bool)1] [i_2]), (((/* implicit */unsigned short) var_8)))))) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -693265778)) : (arr_0 [i_0] [i_0])))))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 1] [i_3] [i_4])) <= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19362))))))));
                                arr_17 [i_0] [(unsigned char)8] [i_2] [i_1] [(unsigned char)8] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)46173), (((/* implicit */unsigned short) arr_9 [i_4] [i_4] [i_3] [i_2 - 1])))))) - (min((arr_0 [i_0] [i_2 + 1]), (68709196U)))));
                                arr_18 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                                arr_19 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2 + 1] [i_3])) ? (arr_10 [2LL] [2LL] [i_2 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((arr_10 [14LL] [i_1] [i_2 + 1] [9U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60691)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (unsigned short)46179);
    var_19 *= ((/* implicit */_Bool) var_0);
}
