/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21279
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [23]) : (arr_0 [i_0]))), (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)13439))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)13436)) != (((/* implicit */int) (short)13439))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [9U] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) > (((/* implicit */int) (((-(((/* implicit */int) arr_5 [6] [i_1] [i_3])))) != (((/* implicit */int) min((arr_7 [i_1] [i_2] [i_3]), (((/* implicit */unsigned short) (short)32767))))))))));
                                arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13453)) ? (max(((-(((/* implicit */int) (unsigned short)52956)))), (((((/* implicit */_Bool) (short)13439)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)103)))))) : ((-(((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_5] [7] [i_1] [i_5 - 1] [i_5 + 1]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 137371844608ULL)) ? (arr_1 [i_1]) : (arr_9 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 50331648U)), (arr_9 [i_1] [i_1] [i_1] [3LL] [i_2] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (arr_9 [i_1] [i_1] [i_1] [i_2] [5ULL] [i_2]) : (4993152502303052272LL))) : (((((/* implicit */_Bool) 5074243261841788265ULL)) ? (-965654962440763787LL) : (((/* implicit */long long int) 2008673869U))))))));
                var_19 = min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1304612789))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [(unsigned short)1] [i_1]))) : (arr_10 [i_1] [i_1] [(_Bool)1] [i_2 - 1]))))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)1807)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_9)) * (var_17))) : (((/* implicit */int) var_13)))))));
    var_21 |= ((/* implicit */long long int) max((1006632960), (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */int) max(((~(((((/* implicit */_Bool) var_1)) ? (7128394603531690724LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) 5074243261841788263ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13453))) : (-240925326903534665LL)))));
}
