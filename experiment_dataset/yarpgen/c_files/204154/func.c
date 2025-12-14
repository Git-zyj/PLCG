/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204154
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [(short)3] [i_3] [(_Bool)1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [8ULL] [5LL] [i_0] [i_0])))))))), (var_1))))));
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (var_0)))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1 + 1] [(_Bool)0] [i_0 + 1] [i_2])) - (59564))))), (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */unsigned long long int) ((((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (15572))))) | (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((var_1) - (2814950045U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)3] [(short)3]))) & (var_3)))) : (15999584508923693285ULL)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) >= (((unsigned long long int) arr_4 [i_1 + 2])))))));
                }
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65519)))))))))));
                var_17 ^= ((/* implicit */unsigned short) (!(((((/* implicit */int) ((short) arr_0 [i_0] [i_1]))) <= (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_5)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 4; i_5 < 12; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18)) && (((/* implicit */_Bool) -3434189028464091746LL))))) : (((/* implicit */int) min((((/* implicit */short) var_11)), (var_8))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_10))))))) : (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_14 [(short)6]), (((/* implicit */unsigned short) (unsigned char)219))))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) -1LL))) - (((/* implicit */int) (!((_Bool)0))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((long long int) var_0)) - (1241603611LL))))))));
    }
    var_19 *= ((/* implicit */unsigned int) var_7);
}
