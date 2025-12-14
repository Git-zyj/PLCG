/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27860
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (max((((((/* implicit */_Bool) (short)20097)) ? (3145728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) var_17)) : (679576564U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-26561)) ? (-1880256137) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0 + 3] [i_0 + 3] [i_2] [i_3] = ((/* implicit */_Bool) (-((+(((int) (unsigned char)71))))));
                            arr_10 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? (534493656U) : (((/* implicit */unsigned int) var_0))))));
                            var_20 += ((/* implicit */int) (-(((unsigned long long int) ((_Bool) (signed char)-1)))));
                            arr_11 [i_0] = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3615390732U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (var_7))))) : (arr_1 [i_1 - 2])))), (min((((/* implicit */unsigned long long int) ((var_9) ? (679576559U) : (((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 1] [i_1] [8LL]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_2 [i_0] [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])))))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */signed char) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (((((/* implicit */_Bool) var_13)) ? (577460427U) : (2245871388U))))))));
    var_23 = var_16;
}
