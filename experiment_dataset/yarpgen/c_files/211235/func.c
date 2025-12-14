/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211235
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_0 [8U] [i_1 - 1]))))));
                var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) max(((unsigned short)10570), (max(((unsigned short)59546), (((/* implicit */unsigned short) (signed char)-62))))));
                                arr_14 [i_0] [i_0] [i_1 - 1] [i_2] [i_3 - 1] [i_1] [i_4] = ((/* implicit */long long int) max(((unsigned short)5974), ((unsigned short)17923)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 -= var_12;
    var_17 = ((/* implicit */long long int) max((var_17), (max((((/* implicit */long long int) (unsigned short)59570)), (min((((/* implicit */long long int) var_9)), ((~(-6771563228500719069LL)))))))));
}
