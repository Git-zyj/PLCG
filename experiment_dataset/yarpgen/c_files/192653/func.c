/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192653
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
    var_19 = ((/* implicit */int) min(((short)32767), ((short)-19096)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned char) ((_Bool) max((((unsigned char) var_4)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (short)32767)) - (((((/* implicit */_Bool) max((9234063845821186234ULL), (((/* implicit */unsigned long long int) (short)-32767))))) ? (((/* implicit */int) max(((short)32749), (((/* implicit */short) arr_13 [i_4] [i_3] [i_2] [i_1]))))) : (((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_3])))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (short)-32767);
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((var_17), (((/* implicit */unsigned long long int) var_11)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))))) >> ((((+(((int) var_1)))) - (40383161)))));
                    arr_16 [i_2] [i_0] |= ((/* implicit */long long int) arr_10 [7U] [i_2] [i_1] [i_1] [(short)2] [i_0]);
                }
            } 
        } 
    } 
}
