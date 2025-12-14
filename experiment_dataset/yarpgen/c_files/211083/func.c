/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211083
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [7]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_19)))))));
                    var_21 -= ((/* implicit */int) 4294967275U);
                }
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)13560))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) 18)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-20121)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                var_22 *= ((/* implicit */long long int) min((min((arr_6 [i_3] [i_3] [22U]), (arr_6 [i_3] [i_3] [(short)12]))), (((/* implicit */int) min(((unsigned short)13562), (((/* implicit */unsigned short) (signed char)1)))))));
                var_23 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) arr_0 [i_3]))), (max((arr_0 [i_3]), (arr_0 [i_4])))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((((/* implicit */int) min((var_3), ((short)-9266)))) * (((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */_Bool) max((-6749146666378948838LL), (((/* implicit */long long int) (short)20113))))) && (((/* implicit */_Bool) 9223372036854775807LL)))))));
}
