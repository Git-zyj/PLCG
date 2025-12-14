/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194225
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */long long int) 4294967295U)), (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -810048560)) : (691220455595687985LL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */signed char) max((((var_10) * (max((0U), (((/* implicit */unsigned int) -1821028720)))))), (((/* implicit */unsigned int) ((int) 5666599455110136461LL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-691220455595687986LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3 - 1]))) : (var_10)))) ? (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_12) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0]))));
                            var_19 = ((/* implicit */_Bool) ((short) var_2));
                            var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) max((var_0), (((/* implicit */int) var_13))))) : (max((((/* implicit */long long int) 2481969576U)), (-8303896633493309289LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2])))))));
                            var_21 = ((/* implicit */long long int) ((signed char) arr_5 [i_1 - 1] [i_1 - 1] [i_3 - 1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) max(((unsigned char)231), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_10))) != (((/* implicit */int) ((((/* implicit */_Bool) (short)-12254)) && (((/* implicit */_Bool) (unsigned char)183))))))))));
}
