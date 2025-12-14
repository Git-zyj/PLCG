/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230900
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
    var_12 = ((/* implicit */unsigned char) (~(((long long int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) / (var_2))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                            var_14 = ((/* implicit */unsigned int) (~(20)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) min((var_11), (arr_0 [i_1])))) == (((((/* implicit */_Bool) ((int) arr_5 [0] [i_1]))) ? (((/* implicit */int) arr_5 [(_Bool)0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(short)10])))))))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 20))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_4]))) : (max((((/* implicit */unsigned int) (signed char)0)), (2697128997U)))));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) 12649474811047538515ULL)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (((((var_7) + (9223372036854775807LL))) >> (((13173880015454210496ULL) - (13173880015454210448ULL))))))) * (((/* implicit */long long int) ((var_5) & (min((2697128997U), (((/* implicit */unsigned int) (_Bool)0)))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)255), (((/* implicit */unsigned short) (_Bool)0))))) + (((/* implicit */int) (unsigned short)268))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3)))))));
}
