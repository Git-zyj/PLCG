/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245609
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((var_6) - (min((((-5791013480178698884LL) - ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_3)))))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1023)) ? (330849246120915477LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159)))))) ? (((((/* implicit */_Bool) -5791013480178698896LL)) ? (((/* implicit */long long int) 1003067156)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)105)) || (((/* implicit */_Bool) (unsigned char)150))))))))));
    var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 5791013480178698871LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (9223372036854775807LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 1] [8U] [i_1]))));
                                var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) | (arr_6 [i_2] [i_0] [i_0] [i_0])))) ? (arr_11 [(signed char)8] [(unsigned char)1] [i_2] [i_4 - 1] [i_4 - 1] [(short)13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [1]))) : (arr_6 [i_0] [i_0] [i_2] [i_3])))) ? (((/* implicit */int) arr_4 [i_3 - 2] [i_1] [4])) : ((+(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_5))));
                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-51)) | (((/* implicit */int) (unsigned char)99))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-8834787101089649965LL)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1]) : (arr_3 [9LL]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)31175))) - (-7061551099809443123LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) var_8)) - (170)))))), (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [10U])), (arr_10 [i_0])))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min(((~(((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) 8834787101089649964LL)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (signed char)-11)))))))));
}
