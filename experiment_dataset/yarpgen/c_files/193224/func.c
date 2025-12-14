/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193224
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
    var_18 &= ((/* implicit */short) ((8226271981983341226LL) + (-8226271981983341254LL)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) var_16)) - (32)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_1)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_0))))))));
    var_20 = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) -8226271981983341232LL)) | (268304384ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)-21002)))))))) && (((((/* implicit */_Bool) ((var_15) * (var_15)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-64))) <= (14234977660178580704ULL)))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((((((~(var_14))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_10)))) + (252))))) * (((/* implicit */long long int) ((/* implicit */int) ((min((var_4), (((/* implicit */unsigned long long int) (signed char)5)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)57)) + (((/* implicit */int) (unsigned char)40))))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) + (arr_3 [i_3] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)190))))))) == (((((arr_7 [i_0] [i_1 + 1] [i_0] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_1))))))))));
                            arr_9 [i_0] [(signed char)9] [i_2] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) min((-8226271981983341244LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_0]))))) + (((arr_1 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))), (max((((((/* implicit */unsigned long long int) var_2)) * (268304384ULL))), (max((((/* implicit */unsigned long long int) var_3)), (arr_7 [i_1] [i_1] [i_3] [i_3])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_1 + 1]) > (arr_4 [i_1] [i_1 - 1] [i_0])))), (max((arr_1 [i_1 + 1] [i_0]), (var_15)))))))))));
            }
        } 
    } 
}
