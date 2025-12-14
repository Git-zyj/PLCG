/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227256
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1367929604)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 445987987U))))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((445987965U) >> (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (445988007U))))) : (((((/* implicit */_Bool) 3848979288U)) ? (445988008U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    arr_9 [i_0] = ((((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_4))) + (9223372036854775807LL))) << ((((((~(97674015155754473LL))) + (97674015155754529LL))) - (54LL))))) ^ (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_7))) & (((arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0]) ? (var_10) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
}
