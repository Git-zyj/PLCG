/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52109
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) max((-1579736682), (((/* implicit */int) (_Bool)1))));
                            var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [(short)9] [i_1] [i_1] [i_3 + 1]) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_5 [14ULL] [i_1] [14ULL] [i_3 + 1])))))));
                        }
                    } 
                } 
                var_12 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))), (arr_1 [i_0] [i_1 - 1])))) / (max((((/* implicit */unsigned long long int) arr_3 [i_1 + 1])), (5025770042081167379ULL)))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((9649740897771273336ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))) % (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_2)));
}
