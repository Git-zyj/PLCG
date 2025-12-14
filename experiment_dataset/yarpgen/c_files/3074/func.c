/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3074
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_8);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [(signed char)12] [i_0 + 1]))));
                    var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((int) (short)-7231))), (min((var_6), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [13LL] [i_0])))));
                    var_18 = ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) min((var_4), ((unsigned short)65535)))))) : (((/* implicit */int) min(((unsigned short)5659), (arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((arr_13 [i_6] [i_4] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5 - 1] [i_5 + 1]))))) >> ((((+(var_6))) - (964529547U)))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (max((((/* implicit */unsigned int) ((min((-1), (((/* implicit */int) (unsigned short)5659)))) / (arr_3 [i_4] [i_5 - 1] [i_4])))), ((-(((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned int) arr_3 [i_3] [18] [i_3])) : (var_6)))))))));
                        arr_18 [i_3] [i_3] [i_3] = arr_4 [i_3] [i_3] [i_3] [13];
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */int) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [16U] [(short)1] [1U]))))), (min((((/* implicit */unsigned int) (unsigned short)5643)), (var_11)))))));
        var_22 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) & (arr_13 [i_3] [i_3] [i_3])))));
        arr_19 [i_3] [i_3] = ((/* implicit */int) 536870911LL);
    }
}
