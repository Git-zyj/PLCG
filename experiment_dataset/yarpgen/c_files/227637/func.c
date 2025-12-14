/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227637
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
    var_16 = ((/* implicit */long long int) -1);
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_5 [i_0] [i_0])) << (((9223372036854775807LL) - (9223372036854775789LL)))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (-9223372036854775798LL) : (var_0))))))) & (((/* implicit */int) arr_5 [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) (+(max((arr_8 [i_0] [i_0] [i_2] [4]), (((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775798LL)) && (((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (-1463605794)))) & (((9223372036854775807LL) << (((((var_12) + (269850533))) - (27)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))))) : (((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) (~(1463605794)))) : (((unsigned int) var_12))));
                                arr_15 [i_0] [i_2 + 3] [i_2 + 3] [i_0] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) && (((/* implicit */_Bool) (~(var_8))))));
                        arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                        var_23 &= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)47868)) ? (var_5) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (72057594037895168LL) : (-3355533929644781127LL)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [7] = ((/* implicit */int) ((((-3325043696665546401LL) + (9223372036854775807LL))) << (((926045085) - (926045085)))));
                            arr_23 [i_0] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)47868)), (3284750442U)))));
                            arr_24 [i_0] [i_0] [i_2] [(unsigned short)3] [i_6] [4LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3325043696665546392LL)))))));
                            var_24 = ((/* implicit */unsigned char) (-(arr_10 [i_2 + 2] [i_2 - 3] [i_2 + 2] [i_2 + 1])));
                            var_25 += ((/* implicit */unsigned short) ((((var_15) << (((((((((/* implicit */_Bool) 2869485231420144566LL)) ? (-1916479801597636979LL) : (((/* implicit */long long int) -903983846)))) + (1916479801597636981LL))) - (2LL))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1713223435)) ? (8360036721466377499LL) : (((/* implicit */long long int) 1062947333))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53060)) && (((/* implicit */_Bool) (-(6350110877188154415LL)))))))));
                        var_28 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        arr_29 [i_7] [(unsigned short)9] [i_0] [i_0] [i_1] [(unsigned short)9] = ((/* implicit */int) (_Bool)1);
                    }
                    var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_0])) ? (-3325043696665546384LL) : (9223372036854775794LL)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_32 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                    var_30 = ((/* implicit */unsigned short) (-(((1801237580) & (((/* implicit */int) (_Bool)1))))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [2U] [(_Bool)1]))))) - (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [6] [2LL] [i_1]))))))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    arr_35 [i_0] [i_1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)0)));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(140703128616960LL))))));
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((int) ((((1062947333) << (((var_4) - (5674444494682760466LL))))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))));
    var_34 = ((/* implicit */_Bool) (unsigned short)21387);
}
