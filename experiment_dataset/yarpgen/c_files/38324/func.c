/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38324
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
    var_15 |= ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) >> (((/* implicit */int) (unsigned short)6)))), (((/* implicit */int) (short)-32749))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2088960U)) <= (var_7))))) != (((4292878333U) >> (((var_12) - (1432768308368181646LL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */unsigned long long int) var_1)) <= (var_10))) ? (((((/* implicit */_Bool) 4292878310U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)11] [i_1] [i_2]))) : (-7976241863120766904LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64995))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_4 [i_1] [i_3])))) != (((/* implicit */int) var_9))))))));
                            arr_10 [i_0] [(short)6] = ((/* implicit */unsigned int) 8982052714252141713LL);
                            var_17 = ((/* implicit */short) 1128986209U);
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_3), (var_5)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 7976241863120766883LL))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)7680)) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0])))) && (((/* implicit */_Bool) ((arr_7 [i_2] [i_1] [i_2]) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_2 [18U]))))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4178530261489384141ULL)) ? (min((((/* implicit */long long int) 1128986179U)), ((+(var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */int) ((((/* implicit */_Bool) (short)-32756)) || (((/* implicit */_Bool) 3165981083U))))) >= (((/* implicit */int) arr_8 [i_1] [(short)13] [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        arr_14 [i_4] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) 286746140U))))) ? (((/* implicit */unsigned long long int) ((long long int) -7976241863120766924LL))) : (arr_1 [(short)0])))));
        arr_15 [i_4 + 1] [i_4 + 1] |= ((/* implicit */long long int) var_13);
        var_20 |= ((/* implicit */long long int) ((arr_5 [i_4] [i_4] [i_4] [i_4]) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
}
