/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223182
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */long long int) arr_2 [i_0])) : (9223372032559808512LL)))) ? (((((/* implicit */_Bool) -2412101748050195587LL)) ? (2412101748050195596LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))))) : (((/* implicit */long long int) (-(-795637672))))))))))));
                    var_15 = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (var_11) : (((/* implicit */long long int) var_5)))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) || (((((/* implicit */_Bool) (signed char)-120)) && (((/* implicit */_Bool) (short)2032))))))))));
                    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) >= ((~(((var_5) | (((/* implicit */int) var_6))))))));
                    arr_8 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_6)) % (((/* implicit */int) arr_4 [i_1])))) == (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (short)32767))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = (i_1 % 2 == zero) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((((((/* implicit */int) arr_11 [i_1] [i_0] [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1])) + (13200))))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((((((/* implicit */int) arr_11 [i_1] [i_0] [i_1] [i_1])) + (2147483647))) >> (((((((/* implicit */int) arr_4 [i_1])) + (13200))) - (7718)))))))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_2] [i_2] [i_0 - 1])) & (((/* implicit */int) var_9))))) >= (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) + (var_10))))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_6 [i_0])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [2ULL] [i_0])))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) -9223372036854775807LL)))) && ((!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29049)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7067)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (short)14336))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (-4706693072054323147LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775794LL)) ? (var_7) : (((/* implicit */int) (unsigned short)43570))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned long long int) var_5))))) ? ((~(var_5))) : ((~(((/* implicit */int) (_Bool)0)))))))));
}
