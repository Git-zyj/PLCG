/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40168
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -867564634)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [(signed char)18] = min((((unsigned int) arr_3 [i_1 + 1])), (((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))))) : (((arr_2 [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)2]))))))));
                            arr_11 [i_3] [(signed char)18] [20U] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_0]))) <= (4294967275U)))) - (var_8)))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * ((+(4294967295U)))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((((/* implicit */int) (signed char)-29)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(signed char)18] [(signed char)16]))))) < (arr_7 [i_2 - 2] [i_1 + 1] [i_2 - 2] [4])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = -79909343;
            }
        } 
    } 
    var_20 ^= ((/* implicit */signed char) max((524287), (var_14)));
}
