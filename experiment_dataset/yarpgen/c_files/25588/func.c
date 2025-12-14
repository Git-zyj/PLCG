/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25588
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_17 -= ((/* implicit */long long int) (-(max((var_11), (((/* implicit */unsigned int) var_3))))));
                        arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_1]));
                    }
                    arr_10 [(unsigned char)9] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)69)), (-341061419)))), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)7]))) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (arr_3 [i_1])))) && (((/* implicit */_Bool) min((var_0), (arr_0 [i_0])))))))) : (var_10)));
                    arr_11 [i_1] [i_1] [i_1] |= ((/* implicit */short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)69)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_18 [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_2] [i_2 - 1] = ((/* implicit */long long int) arr_7 [i_2 - 2] [i_1] [i_2 - 1]);
                                var_18 *= ((/* implicit */short) ((unsigned char) min(((~(var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_2) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_9)), (var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))) < (((unsigned long long int) (signed char)69))))))));
}
