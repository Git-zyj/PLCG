/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231908
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
    var_20 = min((((/* implicit */long long int) var_8)), ((~(((984616444935997256LL) + (((/* implicit */long long int) var_14)))))));
    var_21 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */_Bool) ((var_11) << (((((/* implicit */unsigned long long int) arr_3 [8U])) * (0ULL)))));
                var_23 |= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1] [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) ((_Bool) 18446744073709551615ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_12 [i_3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_1))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14340636185122700383ULL))))), (((((/* implicit */_Bool) 6ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_16))) <= (((arr_7 [i_4]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))))));
                    var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (_Bool)1))))), (((unsigned int) arr_10 [i_4] [i_4] [i_4] [(_Bool)1]))))), ((~(18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)31350)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))), (min((((((/* implicit */_Bool) -819270158)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), ((+(14340636185122700360ULL)))))));
}
