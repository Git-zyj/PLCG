/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208943
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
    var_15 = ((/* implicit */short) ((max((min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -861629390)), (var_8)))))) + (((/* implicit */unsigned long long int) var_13))));
    var_16 = var_9;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */_Bool) min(((-(17530290139386329211ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_1])), (10179049U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
                    arr_7 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_2 [i_2]))));
                    var_18 = ((/* implicit */unsigned short) ((1926705472) != (((/* implicit */int) (signed char)-103))));
                    var_19 = (+(((/* implicit */int) arr_1 [i_0])));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)96))));
}
