/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227725
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19446)) ? ((-(9ULL))) : (18446744073709551615ULL)));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) -5LL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) arr_4 [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [11ULL]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((long long int) arr_4 [i_1]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                            var_19 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) < (17592186044415ULL))) && (((/* implicit */_Bool) ((unsigned short) arr_2 [i_1] [i_3]))))));
                        }
                    } 
                } 
                var_20 &= ((/* implicit */unsigned long long int) (+(arr_1 [i_0])));
            }
        } 
    } 
}
