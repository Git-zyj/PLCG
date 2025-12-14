/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36753
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) (unsigned char)155);
                    var_15 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)17256)) ? (var_12) : (((/* implicit */long long int) var_7)))) + (9223372036854775807LL))) >> (((688300316831585036LL) - (688300316831584978LL)))));
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        arr_13 [i_0] [14U] [i_3 - 3] [i_3 + 1] [i_4] [i_4 + 3] |= ((/* implicit */signed char) ((((var_6) - (((/* implicit */long long int) var_7)))) + (((/* implicit */long long int) ((((/* implicit */int) (short)7544)) + (((/* implicit */int) (unsigned char)0)))))));
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)24))));
                        var_17 = -688300316831585036LL;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_16 [i_5] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)211))));
                            var_18 = ((/* implicit */int) ((((var_0) != (((/* implicit */long long int) arr_0 [i_0])))) ? ((-(arr_11 [i_0] [3LL] [i_3 - 1] [i_4 + 1] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)7828)))));
                            var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_4] [7LL])))) && ((!(((/* implicit */_Bool) var_11))))));
                        }
                    }
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(((unsigned int) -688300316831585024LL)))))));
                        var_21 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)24307))))));
                        var_22 = ((/* implicit */unsigned int) (signed char)43);
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 1] [i_3 - 3])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)211)))) : (((/* implicit */int) var_3))));
                    var_24 = ((((/* implicit */_Bool) arr_19 [i_3 - 3] [i_0] [i_1 + 2] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)15574)) : (((/* implicit */int) var_4)));
                    var_25 |= ((/* implicit */short) ((long long int) (unsigned char)23));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_26 += ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (4253922898993280401LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2778041862U)))) : (((((/* implicit */_Bool) 4161278195279964373LL)) ? (((/* implicit */long long int) 536870911)) : (-4253922898993280401LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) (unsigned char)155);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned short) arr_20 [i_0] [i_1] [i_7] [i_7] [1U] [i_8])))));
                        var_29 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) ^ (-8207421466094114297LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 3366528012246776432LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3165350630U))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) max(((~(max((4161278195279964372LL), (((/* implicit */long long int) (unsigned char)5)))))), (((/* implicit */long long int) (~((-(var_11))))))));
                                var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)20098)), (((long long int) (-(((/* implicit */int) (unsigned char)246)))))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(var_8))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */int) arr_27 [i_0 + 1] [i_0 - 1] [i_1 + 3] [i_9 - 1] [i_10])), (2060683574))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_34 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))))))) > (((arr_35 [i_12 + 1]) ? (var_11) : (var_11))))))));
                                var_35 |= ((unsigned int) 688300316831585039LL);
                                var_36 = var_0;
                            }
                        } 
                    } 
                }
                var_37 = ((/* implicit */signed char) ((93548835742182875ULL) < (((/* implicit */unsigned long long int) -688300316831585048LL))));
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((short) (-(max((((/* implicit */long long int) var_7)), (-6118075365409617501LL)))))))));
            }
        } 
    } 
    var_39 = ((/* implicit */long long int) var_4);
}
