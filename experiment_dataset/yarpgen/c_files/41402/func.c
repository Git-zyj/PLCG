/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41402
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
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))), (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) (_Bool)1))))))) == (var_9)));
    var_15 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1223482739) : (-647223479)))), ((-(134217720U))))) + (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 647223458)), (2879513003U)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)31166))))) & (((arr_1 [i_1 - 1] [i_1 - 1]) - (((((/* implicit */_Bool) (short)31152)) ? (304851368550412762ULL) : (((/* implicit */unsigned long long int) var_9))))))));
                var_17 = ((/* implicit */_Bool) (+(647223474)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) min((((/* implicit */int) (unsigned char)112)), ((-(((/* implicit */int) var_3)))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [17ULL]) : (12978000664092474071ULL)))))), ((!(var_3))))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_7 [(unsigned short)0]))));
                        }
                    } 
                } 
                arr_10 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13)))))))));
            }
        } 
    } 
}
