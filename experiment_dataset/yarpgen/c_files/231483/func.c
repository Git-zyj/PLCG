/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231483
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2]))));
        var_17 = ((/* implicit */long long int) var_11);
        var_18 = ((/* implicit */short) (((((_Bool)1) ? (-7048166065570562110LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) != (((/* implicit */long long int) ((arr_3 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-59)))))));
    }
    var_19 = var_15;
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_6 [i_1]);
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_16 [13] [i_2] [i_2] [i_3 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))))) + (((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_13)))));
                            /* LoopSeq 1 */
                            for (int i_5 = 1; i_5 < 23; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */short) min(((((!((_Bool)1))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_8 [i_1]))), (((/* implicit */long long int) (!((_Bool)1))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)227), (((/* implicit */unsigned char) (_Bool)1)))))) ^ (var_15)));
                            }
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4])) << (((((/* implicit */int) arr_9 [9])) - (146)))))), (max((((/* implicit */long long int) var_3)), (arr_5 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_3 - 1])))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))))), ((~(-4062190335554817830LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
