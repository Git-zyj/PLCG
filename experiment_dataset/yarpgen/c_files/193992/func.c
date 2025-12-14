/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193992
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 5524317365107591724ULL)) ? (((/* implicit */int) max((arr_1 [i_1 - 1]), (((/* implicit */unsigned short) min((arr_0 [i_1]), (arr_3 [6U] [i_1]))))))) : (max((((/* implicit */int) arr_8 [i_0] [(signed char)5] [i_2] [7ULL] [i_4] [(unsigned short)6])), (((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) arr_3 [i_1] [(_Bool)1])))))))))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_11) * (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (-1639106166))))))), (((arr_10 [i_1]) ? (5332954928094256536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)-32))))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1 - 2]);
                }
            } 
        } 
    } 
    var_16 = var_7;
}
