/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47076
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
    var_18 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (signed char)-120))))) ? (min((var_11), (((/* implicit */long long int) (signed char)120)))) : (((/* implicit */long long int) (+(var_0)))))) * (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */signed char) arr_14 [14U] [i_1] [i_2] [i_3] [i_4]);
                                arr_15 [i_3] [i_1] [(unsigned char)12] |= ((/* implicit */unsigned char) (~((-(arr_7 [i_3 - 1] [i_3 + 1] [i_4] [i_4])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_2] [19LL] [i_3 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) 1455199951)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (var_11)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_15)), (var_7)))))) ? (((((/* implicit */int) arr_12 [i_3 + 4] [i_3 + 3] [23LL] [i_3] [(unsigned short)24])) % (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (arr_9 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) (signed char)-120))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-121))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) + (arr_3 [i_0] [i_0])))));
                var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((unsigned int) 153434571U))))));
                var_24 ^= ((/* implicit */long long int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
