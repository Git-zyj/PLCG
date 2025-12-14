/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205834
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((-1034417300) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))), ((+(((long long int) 13U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_12 ^= max((2019223194U), (((/* implicit */unsigned int) -1788170887)));
                    var_13 = var_9;
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 3; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((-1729354446), (((int) arr_10 [i_4]))))) > (arr_8 [i_0] [i_1] [i_1])));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((int) var_1)) <= (min((var_8), (((/* implicit */int) var_1))))))), (max((var_8), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6)))))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(var_0))) : (((/* implicit */int) ((unsigned short) var_1)))))), (((unsigned int) var_1))));
}
