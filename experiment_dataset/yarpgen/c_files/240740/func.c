/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240740
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
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)16))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9713)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_2] [i_3]))))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((signed char) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (short)-9718)))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(9223372036854775807LL))))))));
                var_17 = ((/* implicit */int) min((var_17), ((+((-(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [(_Bool)0] [i_0]), (((/* implicit */short) var_8)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned char) ((short) var_5)));
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((454877305) <= (((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : ((-9223372036854775807LL - 1LL))));
}
