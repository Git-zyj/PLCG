/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54424
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */signed char) (((((_Bool)0) ? (18446744073709551615ULL) : (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((signed char) ((long long int) arr_0 [i_0 - 1])))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned short)4] [i_2] [i_2])) << (((((long long int) ((signed char) arr_3 [i_0] [i_0] [i_2]))) + (54LL))))))));
                    var_20 |= ((/* implicit */short) max((((int) ((arr_0 [i_0]) >> (((/* implicit */int) arr_6 [i_0] [i_0]))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(_Bool)1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))))));
                    var_21 = ((/* implicit */int) min((var_21), (((int) ((unsigned short) (unsigned char)249)))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_10))))) && (((/* implicit */_Bool) ((unsigned long long int) var_4))))));
}
