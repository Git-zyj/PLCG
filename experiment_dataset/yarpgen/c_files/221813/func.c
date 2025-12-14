/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221813
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
    var_20 &= ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */short) ((((var_18) == (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) var_4)))))))) ? (max((max((var_17), (var_18))), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))))));
    var_22 = (-(((((/* implicit */_Bool) ((3114176547085071974LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_12))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) -1806391591307406304LL);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_9))))))))) / (var_0)));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_7 [(unsigned char)0] [2] [14] [2]))) != ((-(var_0))))))) <= (((((/* implicit */_Bool) ((unsigned char) 1704501032U))) ? (((((/* implicit */_Bool) (unsigned short)13)) ? (arr_6 [i_0] [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (unsigned short)14)))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (short)32767)))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)9)) ? (var_10) : (((/* implicit */long long int) arr_10 [i_3] [i_3])))) << (((((((/* implicit */_Bool) 1704501032U)) ? (((/* implicit */int) var_7)) : (arr_11 [i_3]))) - (201))))))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19)) / (((/* implicit */int) (unsigned short)12))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_11 [i_8 + 1]) / (((/* implicit */int) var_11))))))) ? (((/* implicit */int) min(((unsigned short)65526), (((unsigned short) (unsigned short)14))))) : (((((/* implicit */int) arr_16 [i_8 + 2] [i_8 + 2])) & (((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1])))))))));
                                arr_27 [(short)2] [i_5] [i_6] [i_7] [i_8 + 1] = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_16 [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */unsigned short) arr_16 [i_4] [i_4]);
        var_27 = ((/* implicit */unsigned short) 2590466263U);
        arr_29 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_18)) : (var_14)))) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))))) ? (arr_12 [i_4]) : (((/* implicit */int) (unsigned short)14))));
        var_28 = ((/* implicit */unsigned int) (((~(arr_15 [i_4]))) << (((((/* implicit */int) var_16)) - (52228)))));
    }
}
