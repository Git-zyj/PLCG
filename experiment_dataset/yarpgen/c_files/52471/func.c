/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52471
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_0) > (400404))))))) ? (var_18) : (var_18)));
    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-72)) ? (-1493651945) : (((/* implicit */int) (short)32767))));
    var_22 = ((/* implicit */long long int) (short)28599);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_23 -= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 3])) != (((5163620770352407788ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [(unsigned char)6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (((((/* implicit */_Bool) 0LL)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0]))))))))));
                var_25 = ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])), (var_8)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_26 = ((/* implicit */long long int) ((arr_1 [i_0] [i_1]) << (((((/* implicit */int) var_1)) - (71)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_0] [i_2] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 2] [i_0])));
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) -2780118692715490900LL))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] = ((/* implicit */signed char) (-(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))));
                }
                arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])));
            }
        } 
    } 
}
