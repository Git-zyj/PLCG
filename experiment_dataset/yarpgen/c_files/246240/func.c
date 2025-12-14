/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246240
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 &= (~(((/* implicit */int) arr_0 [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_2))) ? ((-(((/* implicit */int) (signed char)122)))) : (var_7)));
                                var_21 = ((/* implicit */unsigned long long int) var_2);
                                var_22 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_3 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) 1845287491948191932LL)) || (((/* implicit */_Bool) arr_1 [i_3])))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1845287491948191917LL)))))))) : ((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (min((1845287491948191917LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((int) 1845287491948191902LL)))))));
                                var_23 = ((/* implicit */signed char) (((~(2199237497796845175ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2157930225899186218ULL)) ? (-1548654446) : (((/* implicit */int) (signed char)-123)))))));
                                arr_12 [i_0] = ((/* implicit */short) arr_9 [(unsigned short)7] [i_2] [i_0] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_8);
}
