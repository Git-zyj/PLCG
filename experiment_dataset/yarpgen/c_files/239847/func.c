/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239847
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_0), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (signed char)32)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned short)65535)))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) arr_6 [i_1] [i_1]))), (((signed char) var_3))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */unsigned long long int) var_1)) * (var_3))))) : (((/* implicit */unsigned long long int) 844424930131968LL))));
                            var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -844424930131968LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))), (((/* implicit */long long int) min((arr_6 [i_1] [i_0]), (((/* implicit */int) (unsigned char)75)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 844424930131977LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))) ^ (arr_0 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
}
