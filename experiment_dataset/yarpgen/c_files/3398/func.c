/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3398
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (1144902887))))));
    var_18 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_6) % (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_16))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(698358676)));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_2) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) ((short) (short)6727))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 536805376))) ? (((/* implicit */unsigned int) ((int) 698358676))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (var_2)))) : (((unsigned int) 2235853894627301009ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] [12U] &= ((/* implicit */unsigned short) arr_5 [(signed char)14]);
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((arr_1 [i_1] [i_0]) / (((/* implicit */long long int) var_13)))))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) / (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) arr_9 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */unsigned short) arr_6 [i_2])))))))) : (((/* implicit */long long int) (~(((((((/* implicit */int) arr_0 [i_2])) + (2147483647))) << (((arr_5 [i_2]) - (1347190305))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 2235853894627301009ULL)))), (((((/* implicit */int) var_3)) >= (((/* implicit */int) var_5))))))), (min((arr_14 [i_3] [(short)0] [i_5 - 1]), (((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_2] [i_2]))))));
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-42))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_4] [i_3]))))) : (((((/* implicit */_Bool) -698358686)) ? (((/* implicit */unsigned long long int) -698358676)) : (16210890179082250607ULL))))))));
                        var_23 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) -1445010056)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4239))) : (1558185849U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27225)) ? (1873628037) : (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned int) ((int) arr_9 [i_4] [2])))));
                        var_24 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [(signed char)5] [i_2] [i_2] [i_2])) ? (var_13) : (((/* implicit */int) var_15))))), (arr_1 [i_2] [i_3]))) + (((/* implicit */long long int) ((unsigned int) arr_11 [i_4 + 2] [i_4 + 2] [i_5 + 1])))));
                    }
                    var_25 -= ((/* implicit */short) arr_15 [i_2] [i_3] [i_2] [(_Bool)1] [i_3]);
                    var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */int) (short)-11815)), (1445010067)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)113)) + (-698358678)))) : ((+((~(1774899314U)))))));
                }
            } 
        } 
    }
    var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1445010075), (1873628032)))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_0) & (((/* implicit */int) var_15)))) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))))));
}
