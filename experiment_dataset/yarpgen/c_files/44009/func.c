/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44009
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [(unsigned short)4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */unsigned long long int) 576460752303423487LL)) > (arr_9 [i_1])))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) < (arr_6 [i_3])))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_18 [8U] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) arr_9 [i_1]);
                                arr_19 [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */unsigned char) arr_5 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 = ((/* implicit */short) min((2657269236U), (((/* implicit */unsigned int) ((1777800614U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_6] [i_8] = (~(arr_27 [i_8] [i_7] [i_8] [i_7] [i_1] [i_1]));
                            var_13 *= ((/* implicit */long long int) ((((4590643264806995791LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65338))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6 + 1] [i_7 + 1] [i_9 + 1])) ? (arr_21 [i_6 + 1] [15U] [i_7 - 1]) : (((/* implicit */unsigned int) arr_23 [i_6 + 1] [i_6 + 1] [i_7 - 1] [i_9 - 1])))))));
                        }
                        arr_32 [i_1] [i_6] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) arr_16 [i_8] [i_6] [i_7 + 1] [i_8] [i_1]);
                        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_5 [i_6 + 1]) != (arr_5 [i_6 + 1]))))));
                        arr_33 [i_1] [i_6 + 1] [i_6] [i_8] = ((/* implicit */_Bool) arr_23 [i_1] [i_8] [i_7] [i_1]);
                        var_15 *= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_1] [i_1] [(short)16] [i_1])) >> (((arr_9 [i_6 + 1]) - (7145818386439203389ULL)))))) + (710380824296732446LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_6] [i_6] [i_7] [i_8])))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) ((((-597286932) + (2147483647))) >> (((((/* implicit */int) (unsigned char)218)) - (202)))));
    var_17 = ((/* implicit */long long int) ((signed char) var_7));
    /* LoopNest 2 */
    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((1612013316950569897ULL) | (((/* implicit */unsigned long long int) 421490461U))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_26 [11] [i_10] [i_10] [i_10 + 1])) > (((/* implicit */int) arr_26 [i_10] [i_11] [i_11] [i_10 - 2]))))) | (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_20 [i_10] [i_10] [i_10])) + (arr_16 [i_10 - 1] [i_10] [i_10 - 1] [i_11] [i_11]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_10] [20ULL] [i_11] [i_10])) > (arr_25 [i_10]))))))))));
                var_20 = ((/* implicit */int) ((((/* implicit */int) arr_11 [8U])) > (((/* implicit */int) arr_8 [i_10 + 2] [i_11]))));
            }
        } 
    } 
}
