/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226670
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 += ((/* implicit */signed char) arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) 4294967295U)) ? (127ULL) : (((/* implicit */unsigned long long int) -3063269831680343923LL))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((long long int) arr_3 [i_1 + 1])) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U))))))))) << (((long long int) ((arr_12 [i_4] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1] [i_2]))) ? (max((var_9), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])))) : (min((arr_12 [i_1] [18]), (((/* implicit */unsigned long long int) 5667481801213595408LL)))))))));
                                var_18 = ((/* implicit */short) (-(var_5)));
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [(unsigned short)8])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_4] [i_3 - 2]))) != (var_7)))) : (((/* implicit */int) ((unsigned short) arr_15 [i_1 + 1] [i_1 + 1] [6U] [i_4])))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */int) (((+(arr_8 [i_1] [i_1] [i_2] [i_2]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) >= (min(((+(((/* implicit */int) var_12)))), (((/* implicit */int) ((arr_16 [i_2] [i_2] [i_1 + 1] [i_2] [i_2] [i_1]) > (arr_12 [i_1 - 1] [i_2]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) 250701502);
}
