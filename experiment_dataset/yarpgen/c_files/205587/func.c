/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205587
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
    var_18 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
        var_19 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_16)))) - (((/* implicit */int) ((var_2) <= (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
        arr_5 [i_0] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [4U])) ? (((/* implicit */int) arr_3 [i_0] [(short)10])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))))) & ((~(((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_12)))))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) (unsigned char)184);
            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-22258))))) != ((+(var_8)))))), (((1431075902U) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)96), (((/* implicit */unsigned char) (signed char)-63))))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((unsigned long long int) (~(((/* implicit */int) arr_14 [i_3]))))) : (((var_8) - (min((((/* implicit */unsigned long long int) arr_6 [i_3])), (arr_9 [i_1] [i_1])))))));
            var_24 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_1])))), (((/* implicit */int) var_4)))), ((-((-(((/* implicit */int) (unsigned short)33614))))))));
        }
        var_25 ^= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_13 [i_1])), (0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        var_26 &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */int) var_9);
        var_27 -= ((/* implicit */unsigned int) arr_8 [i_4]);
    }
}
