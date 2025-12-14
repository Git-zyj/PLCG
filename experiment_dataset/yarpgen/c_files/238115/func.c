/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238115
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3 - 1] [i_4]))) % (arr_9 [i_0 - 2] [i_0 - 2])))) || (((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -949351791))));
                            }
                        } 
                    } 
                } 
                arr_17 [17U] [i_0] = ((/* implicit */short) ((((((((/* implicit */int) arr_4 [i_0] [i_1])) << (((arr_9 [i_1] [i_0 + 1]) - (3038643254176327873ULL))))) + (((/* implicit */int) arr_0 [i_0])))) << (((max((((/* implicit */unsigned int) arr_2 [i_0])), (((arr_3 [i_0]) ^ (arr_3 [i_0]))))) - (4294967238U)))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((var_5) >> (((((/* implicit */int) (signed char)-32)) + (61)))));
    var_19 = ((/* implicit */short) (~(max((1467671282U), (((/* implicit */unsigned int) (signed char)-32))))));
}
