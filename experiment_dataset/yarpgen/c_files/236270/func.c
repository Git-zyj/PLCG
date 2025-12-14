/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236270
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
    var_16 *= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((unsigned char) var_7))))), (((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_12))))) <= (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))))));
                var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))))) ? (24ULL) : (((/* implicit */unsigned long long int) 1340742220U)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1 - 1])))))))));
                            var_21 -= ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (0LL)))) ? (((/* implicit */int) arr_4 [i_1] [14LL] [i_0])) : (((/* implicit */int) arr_5 [(short)6] [i_1 + 1])))) == (((/* implicit */int) ((2575929582U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))))))));
            }
        } 
    } 
}
