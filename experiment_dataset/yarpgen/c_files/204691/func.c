/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204691
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 &= ((/* implicit */unsigned long long int) ((unsigned char) (-(0U))));
        arr_3 [i_0] [i_0] = (+(((((((/* implicit */_Bool) (unsigned char)8)) && (arr_1 [6]))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_2 [i_0])))))));
        var_20 = min((((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned char)0)))) & (((((/* implicit */_Bool) arr_2 [14ULL])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_2 [i_0]))))))), (((((((/* implicit */_Bool) 1855793339)) ? (arr_0 [(unsigned char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (1453303078U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((arr_9 [i_1] [i_1] [2U]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : ((~(3267252969U))))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_12 [i_3] [i_2] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2]);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) ((unsigned int) (unsigned char)9))))));
                        var_23 = ((unsigned int) arr_10 [i_2] [i_2] [i_3] [i_2]);
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((unsigned char) 17713227218119221906ULL);
                    var_24 = ((/* implicit */signed char) (+((-(var_3)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_23 [i_1] [i_1] &= ((/* implicit */int) ((((arr_5 [i_5 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)3] [(short)10]))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (arr_7 [i_1] [i_1] [i_6]) : (((/* implicit */int) (unsigned short)19833)))))));
                        var_25 &= ((/* implicit */unsigned int) arr_15 [i_1] [i_6] [i_6]);
                        var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (-(arr_17 [i_1] [i_1] [i_1] [i_1])));
        var_27 += ((/* implicit */unsigned short) (-(7U)));
        var_28 |= ((/* implicit */int) (unsigned char)171);
    }
    var_29 = ((/* implicit */unsigned long long int) (+((~((+(var_11)))))));
}
