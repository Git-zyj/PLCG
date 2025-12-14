/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211050
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) 4248801690U);
        arr_3 [8LL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((arr_2 [i_0] [i_0]) || (((/* implicit */_Bool) arr_1 [i_0]))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (46165605U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [12LL]))) : (min((-5873946690263234656LL), (((/* implicit */long long int) var_6))))))));
        var_14 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (-((~((~(var_3)))))));
                                var_16 -= var_12;
                                arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] [(signed char)9] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_9)) : (4248801671U))))) < (((/* implicit */unsigned int) max((var_3), (((((/* implicit */_Bool) arr_8 [17LL] [i_2] [i_2])) ? (((/* implicit */int) (short)-22780)) : (1150885866))))))));
                            }
                        } 
                    } 
                    arr_18 [(signed char)7] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((int) 4248801685U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) 1150885866)))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_3])))) : (((/* implicit */int) max(((short)9565), ((short)22780))))))) ? (max((((((/* implicit */_Bool) 46165605U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_9 [i_1] [i_2] [16U] [i_2]))), (((/* implicit */long long int) 46165606U)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (min((3403237984U), (((/* implicit */unsigned int) arr_12 [i_1]))))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [18LL] [i_2] [(_Bool)1]))) <= (arr_5 [4] [3])))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)22779)) : (var_6))))) : ((~(((var_6) | (((/* implicit */int) var_7))))))));
                }
            } 
        } 
        var_19 = (signed char)-109;
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((int) ((var_2) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))));
        arr_21 [i_6 + 2] = ((/* implicit */_Bool) -2147483630);
    }
    var_21 = (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (4248801703U) : (((/* implicit */unsigned int) var_9)))))));
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((var_6) <= (var_3)))) * ((-(var_3))))));
}
