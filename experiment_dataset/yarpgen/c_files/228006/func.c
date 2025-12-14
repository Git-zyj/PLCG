/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228006
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
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned char) ((signed char) var_0)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -252019088)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_9 [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)209)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_3] [1ULL] [6ULL] [(unsigned char)9])), (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_2])))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) ? (arr_7 [(_Bool)1] [i_2] [i_1] [i_0]) : (var_7))))))))));
                        var_19 = ((unsigned char) max((((/* implicit */unsigned short) (unsigned char)47)), (var_9)));
                    }
                    for (int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1 + 1] [i_1] [i_1] [i_0] [i_4 + 1] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_1 [i_0 + 1]), ((signed char)-46)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_9))))) ? (arr_8 [i_0 - 1]) : (min(((-2147483647 - 1)), (arr_7 [(signed char)1] [i_1 - 1] [i_2] [1ULL])))))));
                        var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((int) -503835670))), (max((((/* implicit */long long int) arr_6 [i_1])), (var_13)))));
                        arr_16 [i_1] [i_4] [i_1] [i_4 + 2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_0), (var_9)));
}
