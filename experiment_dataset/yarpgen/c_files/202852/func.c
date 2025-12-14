/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202852
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2064384U)), (4458815782520197072ULL)));
        arr_2 [i_0] = ((/* implicit */signed char) (!(arr_1 [i_0])));
        var_21 *= ((/* implicit */unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -4266970178282374694LL))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((arr_0 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_1] [10ULL]))));
        arr_6 [i_1] = ((/* implicit */unsigned char) var_16);
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_3 - 1] [i_3 - 1] [i_4] [i_3 + 1]) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_4] [i_4]))))) ? ((-(arr_10 [i_3 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)105))));
                    arr_16 [i_3 - 1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_4] [i_2] [i_2]))))), (var_17)));
                }
            } 
        } 
    } 
}
