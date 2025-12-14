/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233454
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */long long int) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))));
        var_18 ^= ((unsigned int) ((_Bool) (_Bool)0));
        arr_4 [(_Bool)0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((int) 5065495113590954160LL))));
        arr_5 [i_0] = ((((long long int) (+(var_3)))) & (max((((/* implicit */long long int) (~(var_0)))), (((long long int) var_17)))));
    }
    var_19 = ((((var_6) + (9223372036854775807LL))) << (((var_12) - (3051783584811889531LL))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                var_20 |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_21 = (-(max((arr_10 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5]), (var_6))));
                                arr_17 [14LL] [14LL] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) arr_14 [11U] [i_5 + 1] [i_3] [i_5] [(_Bool)1] [i_5])))));
                                arr_18 [i_3] [i_2] [i_3] [5LL] [i_3] = ((/* implicit */long long int) var_0);
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (-(arr_7 [i_5])));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2]), (var_14)))))))));
                var_23 *= (signed char)-117;
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (-(var_16))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
}
