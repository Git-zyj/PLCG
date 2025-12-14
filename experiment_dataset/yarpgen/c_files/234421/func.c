/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234421
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)25998)))), (((/* implicit */int) var_6))))), (max(((~(var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_7), (((/* implicit */short) arr_11 [1LL] [i_3] [i_2] [i_1] [(short)8]))))) : (((/* implicit */int) max((var_14), (arr_8 [i_3]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) var_12))), (arr_4 [i_2 + 2] [(unsigned char)7] [i_2])))) : ((~(15813468200185315522ULL)))));
                            arr_14 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 + 2] [i_1]))))) ? (((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) <= (var_13)))))) : (((/* implicit */int) var_4))));
                            arr_15 [(unsigned char)3] [i_0] = ((/* implicit */unsigned short) ((_Bool) max((max((arr_7 [i_2]), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) arr_12 [i_1 - 1] [(short)5] [i_2 + 2] [i_2] [i_1 - 1] [i_2 - 1])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_2 [i_0] [(unsigned short)1]), (arr_2 [(unsigned short)2] [i_0])))) & (((/* implicit */int) (unsigned short)25998))));
                var_18 = max((((/* implicit */long long int) (signed char)-94)), (var_9));
                var_19 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-2)), (arr_9 [2LL] [i_1] [i_1] [i_0])))), (min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)65535))))))), (((((/* implicit */_Bool) 4193280U)) ? (15813468200185315495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min(((short)-11016), (var_7))))))));
    var_21 = (~(((unsigned int) max((((/* implicit */unsigned int) (short)4028)), (var_11)))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (4290774026U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39505))))))));
}
