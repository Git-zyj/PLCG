/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31835
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-20826)) > (((/* implicit */int) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)110)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned int) var_3)), (var_7)))));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) - (min((-4053820342444650884LL), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_0 - 1] [i_1 - 1] [i_0 - 1]))) % (var_5)))));
                        var_15 = ((/* implicit */unsigned char) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        arr_9 [i_0 + 1] [i_1] [i_0 + 3] [i_1] [i_3] [i_1] = ((/* implicit */short) var_6);
                        var_16 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4053820342444650880LL)) ? ((-(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_4 + 1])))));
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        var_19 = ((/* implicit */long long int) ((var_7) / (((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 1]))));
                        var_20 += ((/* implicit */unsigned long long int) (+(var_7)));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */short) (~((~(8046526154117839281LL)))));
                        arr_14 [11LL] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)120)) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1]))))) ? (((/* implicit */int) arr_5 [i_5 - 2] [i_1 - 1] [i_0 + 3])) : (((/* implicit */int) var_9))));
                        var_22 += ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1])) - (((((/* implicit */int) (signed char)100)) % (((/* implicit */int) (signed char)-100))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_17 [i_0 + 3] [i_6] [i_1] [i_6] = ((/* implicit */int) ((((var_2) & (var_2))) >> (((max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) - (48)))));
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (var_6))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_22 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)221)) > ((+(((/* implicit */int) (short)20807))))));
                            arr_23 [i_7] [2ULL] [i_2] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)20802)))), (((/* implicit */int) (short)1023))));
                            var_24 += ((/* implicit */signed char) min((((((/* implicit */int) arr_0 [i_0 + 2])) - (((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */int) arr_0 [i_0 + 1]))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_2 [i_0] [0ULL] [i_6]))));
                    }
                    for (int i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */int) min((min((((/* implicit */long long int) max((var_2), (1627452354U)))), (max((4270787249849734025LL), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-20835)) + (2147483647))) << (((3294002022U) - (3294002022U))))))));
                        var_27 = ((/* implicit */unsigned int) var_0);
                        arr_27 [i_2] [i_1 - 1] [(unsigned char)6] = ((/* implicit */signed char) (((-(5282479219832886926ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (signed char)-91)))));
                        arr_31 [i_9] [i_2] [i_1 + 2] [i_0 - 1] = ((/* implicit */long long int) arr_25 [i_0 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_9]);
                        var_28 = var_4;
                        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_28 [i_9] [i_2] [i_1 - 1])));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_4)))))))), (var_10)));
}
