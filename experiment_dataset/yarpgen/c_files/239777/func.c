/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239777
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
    var_12 = ((/* implicit */long long int) (+(1624123583U)));
    var_13 |= (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (4294967295U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [(_Bool)1] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1525010829)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2670449306981644407ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (15776294766727907209ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15776294766727907214ULL)) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_4]))))) : (15776294766727907214ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((3U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (0LL))))));
                                arr_13 [i_4] [i_4] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)76))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((15776294766727907214ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_2 - 1]))))))) == (((unsigned long long int) ((short) var_4))))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)216)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        {
                            arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)4176)) << (((2670449306981644402ULL) - (2670449306981644387ULL)))));
                            var_16 = ((/* implicit */unsigned long long int) var_6);
                            arr_19 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */int) ((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((((/* implicit */int) (signed char)18)) << (((arr_6 [(signed char)3] [i_1 + 1] [(signed char)22]) + (8333029242372238151LL))))))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ ((~(((/* implicit */int) (signed char)36))))));
                var_18 = ((/* implicit */short) var_5);
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
