/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202585
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
    var_11 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned int) ((max((var_4), (((/* implicit */unsigned int) 2147483645)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) < (var_0))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (4846685587962964211LL))) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_4 [8U]))) - (2224223382659334143LL)))))) / (((((/* implicit */_Bool) 21523539U)) ? (((/* implicit */unsigned long long int) 4273443744U)) : (0ULL)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) min((min((max((((/* implicit */unsigned long long int) 3726153831U)), (10615500350152329645ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_5 [i_2]) & (max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))))));
                        var_13 = ((/* implicit */unsigned short) arr_1 [i_1]);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */int) ((((18446744073709551615ULL) == (((/* implicit */unsigned long long int) arr_3 [i_2 - 1])))) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_7 [i_3]) == (arr_7 [i_1 + 2])))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_7 [i_0]) : (arr_7 [i_0])))));
                            arr_12 [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((arr_10 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) < (((arr_5 [i_2]) + (arr_3 [i_1]))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4273443744U) <= (arr_0 [i_2 + 2] [i_2 + 2]))))) : (min((arr_0 [i_2 + 1] [i_2 + 1]), (arr_0 [i_2 + 2] [i_2 - 1])))));
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) max((arr_4 [i_2]), (9223372036854775794LL))))) && ((!(((/* implicit */_Bool) arr_13 [i_0] [i_0]))))));
                        var_16 ^= ((max((((1ULL) << (((var_0) + (7729715022532902719LL))))), (((/* implicit */unsigned long long int) 4227858432U)))) != (((/* implicit */unsigned long long int) ((4273443761U) * (3835606112U)))));
                        var_17 &= ((/* implicit */_Bool) arr_9 [i_1] [10ULL]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (4124147312058279436LL)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (4294967295U) : (1U)))), (((((/* implicit */_Bool) 3835606110U)) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((-356321486860381579LL) >= (7120866175884099336LL))))))));
                    }
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) -379746926)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (max((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0])), (var_0))))))) ^ (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                }
            } 
        } 
    } 
}
