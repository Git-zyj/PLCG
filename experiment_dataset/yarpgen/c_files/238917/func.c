/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238917
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (25378732U) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
        }
        var_17 += ((/* implicit */unsigned long long int) ((12273414685048811605ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))));
        arr_5 [i_0] = arr_3 [i_0];
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) 4269588563U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)312))) : (arr_0 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */long long int) ((unsigned int) arr_6 [i_4]));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [i_5] [(unsigned short)9]);
                                arr_21 [i_2] [i_3] [(unsigned short)4] [i_6 - 2] [i_6] [i_4] [i_3] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [6U] [i_4] = ((/* implicit */short) ((4208234780U) - (4269588551U)));
                }
            } 
        } 
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((-925713557) & (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))));
        var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) 25378745U)) >= (6173329388660740010ULL)))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_33 [i_2] [i_7] [i_8] [(unsigned short)16] [i_10] [(unsigned short)16] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1])) | (((/* implicit */int) arr_7 [i_7 - 3] [i_2]))));
                            arr_34 [i_2] [i_2] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned int) (-(arr_2 [i_2] [i_2] [i_7 - 1])));
        }
    }
    var_22 -= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1967360058U)))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_8)))))))));
    var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)126)))) > (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) var_0))))));
    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned short)54191)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_5))));
}
