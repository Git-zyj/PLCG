/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213356
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max(((((_Bool)0) ? (1107672801U) : (3187294495U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_0))))))) ? ((-(1152917106560335872ULL))) : (((/* implicit */unsigned long long int) (~((+(-1LL))))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (max((((/* implicit */unsigned int) (signed char)-123)), (3187294482U))) : (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) (signed char)3)))))))) ? (min((min((((/* implicit */unsigned long long int) var_5)), (1057540818969947261ULL))), (((var_5) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), ((_Bool)1))))) : (((((/* implicit */_Bool) (short)-2414)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))))));
    var_12 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) min((var_7), (var_5)))), (min((var_2), (var_3)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [(short)15] = ((/* implicit */unsigned short) (signed char)1);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? (max((10163872576180681373ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) (signed char)45)), (arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) (unsigned char)62)) : (((((/* implicit */_Bool) (short)-2414)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~((~(min((1107672801U), (((/* implicit */unsigned int) 1594945731))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)4095))))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-38))))), (arr_4 [i_2 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 2])))) ? (max((((/* implicit */int) arr_7 [(short)6] [i_1] [i_2] [(_Bool)1])), (536870880))) : (((/* implicit */int) (_Bool)1)))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)13] [i_0]);
                    }
                    var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) min((max(((-2147483647 - 1)), (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (signed char)-28)), (min((arr_1 [2LL] [i_0]), (4611686018427387903ULL))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [6LL]))));
    }
    var_19 = ((/* implicit */long long int) var_6);
}
