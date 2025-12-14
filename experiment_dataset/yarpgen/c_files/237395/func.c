/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237395
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
    var_14 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7863697069025724755LL)))) ? (((((/* implicit */int) var_6)) - (((/* implicit */int) var_0)))) : (((int) var_1)))), (((((/* implicit */_Bool) min((450027899U), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)10597))) >= (7863697069025724755LL))))))));
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)98))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-8291060251614735054LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 - 1])), ((+(((/* implicit */int) arr_8 [i_1] [i_1]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)250)))) ^ (347420165931587357ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                            var_17 &= var_12;
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_1 + 4] [i_3 - 2]), (arr_0 [i_0 - 1]))))));
                            arr_9 [i_1] = ((/* implicit */int) min((max((((/* implicit */long long int) (signed char)3)), (-8291060251614735054LL))), (((/* implicit */long long int) (((~(arr_1 [i_3]))) / ((-(arr_1 [i_2]))))))));
                        }
                    } 
                } 
                var_19 -= (_Bool)1;
                var_20 = ((/* implicit */_Bool) 3198149056U);
                var_21 = ((/* implicit */signed char) ((_Bool) var_7));
            }
        } 
    } 
}
