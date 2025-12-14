/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223098
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) 767460447))) ? (((int) var_7)) : (((/* implicit */int) var_18)))) == (((/* implicit */int) ((signed char) var_3)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_3])) : (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)163)) : (-1363155934)))));
                                arr_14 [i_3] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) -1179295978)), (max((-2543429834737792175LL), (((/* implicit */long long int) (unsigned char)159))))))));
                                var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 549109032337307719LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)99))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))));
                                var_22 -= ((/* implicit */_Bool) (~((~(250211697)))));
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_1] [i_2] = ((/* implicit */int) ((long long int) -2335087583711083365LL));
                }
            } 
        } 
    } 
    var_23 = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)100)) >> (((var_13) - (551973567)))))));
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 5U)) ? (var_8) : (var_15))))), (max((min((((/* implicit */unsigned int) 328958591)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3915243959U)) || (((/* implicit */_Bool) var_4)))))))));
}
