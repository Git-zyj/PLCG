/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196121
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = (((!(((((/* implicit */_Bool) -894403660)) || (((/* implicit */_Bool) -894403676)))))) ? (((/* implicit */int) ((_Bool) ((4294967294U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))))) : (((/* implicit */int) (short)4146)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_1 - 1] [i_0] [i_3]))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_3] [7LL])) ? (1453770564U) : (2324340810U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(arr_6 [i_1] [i_0])))))));
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((var_12) > (((/* implicit */long long int) var_2)))))))) != ((-(2864944521U)))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) 1453770555U)), (7531218877798981240ULL)))))));
                                var_21 *= ((/* implicit */signed char) ((max((arr_12 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_12)))) < (((/* implicit */unsigned long long int) 1450815961U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
