/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198778
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
    var_13 = var_2;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((short) var_12));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((+(923206627U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned int) var_9);
        var_16 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))), (var_10)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_4))));
        var_19 ^= ((/* implicit */unsigned long long int) ((3371760640U) << (((arr_7 [i_2]) - (4120533019U)))));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((_Bool) 3371760652U)) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_4])) : (((((/* implicit */_Bool) 5409988447168323843ULL)) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))) : (((/* implicit */unsigned long long int) ((unsigned int) 923206648U)))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */short) 3371760640U);
                        arr_21 [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(923206659U)))) * (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (arr_19 [i_3] [i_4] [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)1190)))))))));
                        arr_22 [i_3] [i_5] = ((/* implicit */long long int) var_12);
                        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) 923206627U)), (6141774005100306452LL))))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (max((((/* implicit */unsigned long long int) (-(923206652U)))), (max((((/* implicit */unsigned long long int) var_11)), (var_5)))))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((0), (((/* implicit */int) (unsigned char)255))));
                            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_5] [i_7] [i_8])) ? (((3371760640U) << (((var_11) - (560261132U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 923206659U)) ? (var_6) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((arr_24 [i_3] [i_4] [i_5] [i_3]) / (((/* implicit */int) arr_0 [i_7] [i_8])))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_5] |= arr_25 [i_3] [i_4] [i_5] [i_7];
                            var_24 = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) 923206658U)), (((arr_19 [i_3] [i_4] [i_9]) & (((/* implicit */long long int) 3371760640U)))))));
                            arr_33 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) var_6);
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_11);
                            var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), (var_0)));
                        }
                        var_27 ^= ((/* implicit */int) ((min(((-(arr_30 [i_3] [i_4]))), (((/* implicit */unsigned long long int) arr_13 [i_7] [i_7])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((short) (unsigned short)33974)))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((-6141774005100306447LL) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) var_6))), (arr_15 [i_4])))))));
                        arr_39 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) 923206652U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551608ULL))))), (min((arr_37 [i_3] [i_3] [i_4] [i_3] [i_11]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)16)))))))));
                        var_29 = ((/* implicit */unsigned char) min((arr_35 [i_11] [i_3] [i_5] [i_4] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) / (min((arr_2 [i_5]), (3371760652U))))))));
                        var_30 -= ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) arr_35 [i_3] [i_4] [i_4] [i_4] [i_5] [i_5] [i_11])))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((923206655U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) var_2))))))))))));
                    }
                    var_32 -= ((/* implicit */unsigned int) arr_38 [i_3] [i_3] [i_3]);
                }
            } 
        } 
    } 
}
