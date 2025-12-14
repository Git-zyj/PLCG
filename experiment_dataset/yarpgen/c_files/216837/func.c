/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216837
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0]))))))) : (((((arr_0 [i_1]) < (arr_0 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1]) == (arr_0 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [(unsigned short)1] [(unsigned short)1] [i_0] [i_3] = ((/* implicit */int) ((signed char) min((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)1216)), (((long long int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)11484)) : (((((/* implicit */_Bool) ((unsigned int) (unsigned short)11494))) ? (700760742) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)99)), ((unsigned short)54080))))))));
                        }
                    } 
                } 
                arr_11 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 2])) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 2])))) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_17)), (var_12)))), (max((((/* implicit */long long int) var_8)), (var_14)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))));
}
