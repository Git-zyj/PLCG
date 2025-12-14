/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192238
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
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)113)), (var_14))))) | (max((((/* implicit */long long int) var_8)), (551161151204260214LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_20 = (~(((/* implicit */int) max((arr_4 [i_0] [i_2 + 1] [i_2]), (arr_4 [i_1] [i_2 + 1] [i_3])))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)120)))) << (((((((/* implicit */_Bool) var_13)) ? (3117204336247383607LL) : (arr_2 [i_0] [i_3]))) - (3117204336247383588LL))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                var_23 = ((/* implicit */unsigned int) (+(-187434315)));
                arr_10 [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-112))))) >= ((~(var_18)))))), ((short)-4096)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((max((((((/* implicit */int) (signed char)-113)) % (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) (signed char)83)) >= (((/* implicit */int) var_13))))))) + (((/* implicit */int) var_4))));
}
