/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47285
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
    var_18 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [i_3])), (var_17)));
                            arr_9 [i_0] = (signed char)-73;
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52844))))) ? (6951100078451809900LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-80)))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)52844);
                            arr_11 [(unsigned short)6] [i_3] [i_2] [i_3] [i_3] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)73)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (-(7288923150477991632LL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-5)), (var_0)))) ? (var_17) : (((/* implicit */unsigned long long int) var_6)))))));
    var_23 *= ((/* implicit */long long int) ((_Bool) ((8912940058124925337ULL) >> (((var_6) + (1926387451))))));
}
