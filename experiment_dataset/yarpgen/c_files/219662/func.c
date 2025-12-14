/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219662
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
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16056)) || (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_9))) & (var_11)));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17849)) ? (-8947027157003420158LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
            {
                arr_23 [(_Bool)0] [i_1 + 1] [8ULL] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((1125899638407168ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6 - 1]))))) >> (((/* implicit */int) arr_22 [i_6 + 3]))))) ? (((/* implicit */long long int) ((arr_8 [i_1 - 1]) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) arr_7 [i_6 - 3]))))) : ((-(var_8)))));
                arr_24 [i_1] [(signed char)7] = ((/* implicit */long long int) min((max((18446744073709551594ULL), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_6 + 2] [i_6] [i_6])))), (((/* implicit */unsigned long long int) min(((short)13758), (((/* implicit */short) arr_13 [14U] [i_6 + 2] [i_6 - 1] [i_6])))))));
            }
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_15 *= ((/* implicit */long long int) ((unsigned short) arr_12 [i_1] [i_7] [i_1 + 1]));
            var_16 = ((/* implicit */_Bool) arr_22 [i_1 - 2]);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_31 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1] |= ((/* implicit */unsigned short) ((arr_13 [i_1 + 1] [i_1 - 1] [13LL] [i_1 - 1]) ? (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) var_5))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1]))) : ((-(-8947027157003420165LL))))))));
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_7])) != (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1] [i_9]))));
                        arr_33 [i_9] = (unsigned short)16063;
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned short) var_1);
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        arr_36 [(short)2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_10])) && (((/* implicit */_Bool) arr_35 [i_10])))))) & (var_3))) & (((/* implicit */unsigned long long int) ((((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))))) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))) : (min((arr_35 [i_10]), (arr_35 [i_10]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11]))) - (2528168759U)));
            arr_40 [i_11] = ((/* implicit */unsigned long long int) (+(((var_11) ^ (arr_37 [i_10])))));
        }
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+((+(var_0)))))) != (var_3)));
}
