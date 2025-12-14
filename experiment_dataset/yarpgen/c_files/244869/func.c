/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244869
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 -= arr_6 [(unsigned short)16] [(unsigned short)16] [i_2] [i_2];
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */signed char) 0U);
                        arr_11 [i_1] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(var_1)))), ((signed char)(-127 - 1)))))) : ((+(arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [0ULL])))));
                        var_14 *= ((/* implicit */int) max((((/* implicit */long long int) arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])), (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])));
                        var_15 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3 - 1])))), (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~((~(arr_7 [i_4] [i_2] [i_1] [i_0])))));
                        arr_16 [i_0] [i_1] [(short)0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) ((signed char) var_0)))))) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_2])) != (((/* implicit */int) arr_0 [i_4] [i_2]))))))) : (((/* implicit */int) arr_14 [i_2]))));
                        var_16 = ((short) max((arr_4 [i_0] [i_2] [i_4]), (arr_4 [i_0] [i_4] [i_2])));
                        var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_0 [i_0] [i_4])))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)185))))))), ((+(((((/* implicit */int) (unsigned char)201)) * (((/* implicit */int) (_Bool)0))))))));
}
