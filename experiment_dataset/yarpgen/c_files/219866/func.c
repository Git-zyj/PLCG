/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219866
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
    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) / (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)221)), (var_5)))))))));
    var_20 = ((/* implicit */_Bool) max(((unsigned char)221), (((/* implicit */unsigned char) (_Bool)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [13ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1])) != (min((((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) var_9)))), (((/* implicit */int) arr_2 [i_0]))))));
                            var_21 = (-(8750832928522071501LL));
                            var_22 |= ((/* implicit */signed char) (((+(((/* implicit */int) arr_8 [i_3 - 1] [i_0] [i_3 + 2] [(short)6])))) - (((/* implicit */int) (signed char)126))));
                            var_23 = ((/* implicit */unsigned long long int) ((max((((long long int) (unsigned char)10)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)221)) - (((/* implicit */int) arr_2 [i_1]))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3])))));
                            var_24 ^= ((/* implicit */_Bool) min((max(((short)-16384), (((/* implicit */short) arr_7 [i_1] [i_0] [i_0] [i_3 + 2])))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)209)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((var_7), ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) var_14))))));
                arr_14 [i_1] [i_1] = max((((2249543749081247251ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)31206), (((/* implicit */short) (_Bool)1)))))))));
            }
        } 
    } 
}
