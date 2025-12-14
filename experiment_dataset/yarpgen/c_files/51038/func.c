/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51038
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
    var_11 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    var_12 &= ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)89))))) : (var_2)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((max(((-(var_4))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (min((arr_8 [i_1] [i_2]), (((/* implicit */int) arr_1 [i_0] [i_1 + 2])))) : ((+(((/* implicit */int) (unsigned char)85)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [13ULL] [i_4 - 2] [i_2] [i_4 - 1] [i_4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_9)))) : (((/* implicit */int) min(((unsigned char)163), ((unsigned char)171))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)160)) - (((/* implicit */int) (unsigned char)66))))))) && (((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_4]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_8 [i_4 - 1] [i_2 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
