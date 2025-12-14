/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216206
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((((unsigned int) var_9)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_10)))) : (max((var_10), (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((var_10) != ((+(((((/* implicit */int) var_2)) * (((/* implicit */int) var_0))))))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48440))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((var_17), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            arr_12 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_11)))) || (var_0))))));
                            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (var_5))), (var_11)));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)17095)) / (((/* implicit */int) var_4)))))))));
                var_21 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_7)), ((+(var_1))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_13))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_6)))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)17095)) : (2147483647))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) (~(max((var_13), (((/* implicit */unsigned int) var_4))))))) : (max((((/* implicit */long long int) ((unsigned char) var_13))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17095))) : (8526052630123491786LL))))))))));
    var_24 = ((/* implicit */_Bool) max((var_24), (((((((/* implicit */_Bool) 2954506908U)) ? (max((((/* implicit */unsigned long long int) 342487414)), (0ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2026469955U)), (-15LL)))))) == ((((_Bool)1) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)13027)) : (((/* implicit */int) (unsigned short)0))))) : (7434234718199356871ULL)))))));
}
