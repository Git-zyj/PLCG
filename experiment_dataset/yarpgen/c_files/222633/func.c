/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222633
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
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 ^= ((/* implicit */short) (~((~(((/* implicit */int) var_15))))));
    var_20 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned char)158)), (-1))), (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((var_12) - (9063199913404894535ULL))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (-(((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */int) (-(arr_0 [i_2 + 3])));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) 17012483870564084907ULL);
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]) <= (((/* implicit */unsigned long long int) var_0))))) >= (((/* implicit */int) arr_8 [i_2 + 3] [i_1] [i_2])))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((var_6) | (arr_0 [i_0]))))));
                            var_26 -= ((/* implicit */unsigned int) arr_12 [i_0] [i_2 - 1] [i_2] [i_3] [i_0 - 3]);
                            var_27 *= ((/* implicit */short) (-(arr_14 [i_0] [i_1] [i_2] [i_2 - 2] [i_4] [i_1] [i_3])));
                        }
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_28 *= (((+(83044660U))) / (((/* implicit */unsigned int) var_8)));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_2] [i_2 - 1] [i_5])) + (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_2] [i_2 + 2])))))));
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24576)) || (((/* implicit */_Bool) (signed char)54))));
                        }
                        arr_19 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((((/* implicit */_Bool) (unsigned short)1873)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_12)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_7 + 3] [i_2 + 1] [i_7] [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : (((long long int) (short)32746))));
                            var_33 = arr_0 [i_0];
                            arr_23 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (arr_21 [i_0] [i_1] [i_2] [i_3] [i_7 - 1] [i_7])));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */int) ((signed char) arr_4 [i_2]));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (var_6))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_31 [i_0] [i_2] [i_2] [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 10851732062858897480ULL))) ? (((var_9) << (((3643091505659273058LL) - (3643091505659273050LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1])))));
                            var_35 = ((/* implicit */int) ((((/* implicit */int) (signed char)121)) > (((/* implicit */int) var_17))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_37 = ((/* implicit */unsigned short) ((unsigned int) 2016577476866544510ULL));
                        var_38 = ((/* implicit */signed char) ((((-1970171087) + (2147483647))) >> (((var_3) - (3014094754U)))));
                    }
                }
            } 
        } 
    } 
}
