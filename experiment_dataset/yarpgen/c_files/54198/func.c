/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54198
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
    var_10 = ((/* implicit */unsigned char) ((long long int) var_8));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [(_Bool)1])) - (((/* implicit */int) arr_2 [(signed char)10] [(signed char)10]))))), (((long long int) var_5))))) && (((/* implicit */_Bool) min((((unsigned long long int) -548479905378408351LL)), (((/* implicit */unsigned long long int) (~(2622279982U)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                                var_13 += (~(((/* implicit */int) arr_11 [8U] [i_3] [i_4] [i_2] [i_4 + 1] [i_1] [i_3])));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) -24951998))));
                                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_4] [9U] [i_4 - 1] [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1])), (8526809506779420941ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)17)), (arr_1 [(short)7]))))))), (((/* implicit */unsigned long long int) ((short) (-(arr_12 [i_4 - 1] [i_2] [i_2] [i_2] [4LL])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) 9919934566930130692ULL);
}
