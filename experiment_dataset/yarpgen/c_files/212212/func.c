/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212212
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
    var_13 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((signed char) (signed char)-31))), (var_7))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)53892)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)46))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
                var_14 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) (unsigned char)31))), (max((((/* implicit */unsigned long long int) (signed char)-74)), (2147483647ULL)))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [(short)9] [i_1] [i_2] = ((/* implicit */long long int) (unsigned char)237);
                    var_15 *= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))));
                    arr_9 [15LL] [15LL] [(unsigned char)18] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)34))))), (0LL))), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 2144747347U))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    var_16 &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-121))))), (var_1)));
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((int) var_11))) & (arr_5 [i_0] [i_0])))));
                    arr_12 [i_3] [i_3] [i_1] [14U] = ((/* implicit */unsigned int) var_3);
                }
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_0))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
}
