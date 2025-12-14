/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26114
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
    var_12 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_2)))) < (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5))))))));
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_4 - 2]);
                                var_15 = ((/* implicit */int) max((var_15), (((((((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3711))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2866601303U)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_0])) ? (var_2) : (((/* implicit */int) (signed char)43))))))));
                                var_16 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [3U] [18] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_10)) : (arr_4 [i_1 - 3] [i_4 + 1])))) + (((((/* implicit */_Bool) var_1)) ? (max((var_11), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_4 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))));
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */unsigned short) (((-(2866601303U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
}
