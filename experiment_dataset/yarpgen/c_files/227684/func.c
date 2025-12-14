/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227684
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!((_Bool)0)))), ((+(0U)))));
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)9917)))), (((/* implicit */int) arr_2 [i_2 - 1] [i_2] [i_2]))))), ((+(arr_0 [i_0])))));
                }
            } 
        } 
        var_19 |= ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) arr_4 [(short)10])))));
    }
    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)192)), (-8260357922907839019LL))), (((/* implicit */long long int) ((unsigned char) (_Bool)0)))));
        arr_11 [i_3] [i_3 - 3] = ((/* implicit */_Bool) var_2);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_21 = min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)9917))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18467))) / (18446744073709551615ULL))));
                    var_22 = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((_Bool) 4294967295U))), (var_2)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_20 [i_4] [6LL] [i_4] [i_5] [i_4] [i_5] |= ((/* implicit */_Bool) ((max((((((/* implicit */int) var_15)) < (((/* implicit */int) arr_10 [i_3] [i_4])))), (((_Bool) var_3)))) ? (((unsigned int) (unsigned char)0)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_4 [i_5])) + (((/* implicit */int) arr_2 [i_3] [i_4] [i_5])))))))));
                        var_23 = min((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-18057)))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
    {
        arr_23 [i_7 + 1] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)58482));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) var_13))), (((((/* implicit */_Bool) arr_21 [i_7 + 1])) ? (min((((/* implicit */unsigned long long int) arr_6 [i_7 + 1])), (7977372036337077458ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7 - 1] [i_7 + 2]))))))))));
        var_25 = ((/* implicit */_Bool) var_10);
    }
    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) (unsigned short)9917)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)41513)))))))));
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) arr_21 [i_8 + 2])))) ? (855649835) : (((int) ((short) (short)18467)))));
        var_28 = ((/* implicit */unsigned long long int) var_15);
    }
}
