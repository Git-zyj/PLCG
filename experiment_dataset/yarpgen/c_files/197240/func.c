/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197240
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)17)) != (((/* implicit */int) (signed char)-106)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((_Bool) arr_5 [i_4] [i_1] [i_1]))))) * (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_11 [(unsigned short)0] [i_2] [i_1] [(unsigned short)0])), (var_5)))))));
                                arr_15 [i_1] [10] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807ULL))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)105)), (arr_12 [i_0] [i_2])))) % (((/* implicit */int) arr_12 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_7)))) * (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */_Bool) var_3);
    var_13 ^= ((/* implicit */signed char) min((min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_7)))), (max((var_1), (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (((+(((/* implicit */int) var_7)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_2)))))))));
    var_14 = var_6;
}
