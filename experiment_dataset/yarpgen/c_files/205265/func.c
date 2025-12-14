/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205265
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_11 [12U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((18446744073709551615ULL) - (18446744073709551601ULL)))));
                    arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_1] [(signed char)9] [i_3] = ((/* implicit */unsigned int) max((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))), (((/* implicit */unsigned long long int) var_6))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) + (((((/* implicit */unsigned long long int) 929776854U)) - (18446744073709551614ULL)))));
                        arr_16 [12LL] [i_1] [i_2] [i_3] = ((/* implicit */short) (_Bool)1);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3999979115137620399ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (arr_3 [i_3]) : (((/* implicit */int) var_10))));
                    }
                    arr_17 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) 2U);
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) 956656460379880496LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) >= (arr_21 [i_4]))))));
        arr_22 [i_4] = ((/* implicit */long long int) ((arr_19 [i_4]) ? (arr_20 [i_4]) : (((/* implicit */int) arr_18 [i_4]))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (~(arr_27 [i_8])));
                                var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [12LL] [i_7] [i_8] [12LL])) ? (3846956081275087920LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9] [i_8] [i_7] [i_6])))))));
                                arr_36 [i_6] [8] [i_7] [i_8] [i_9] |= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_5])) >= (((((/* implicit */_Bool) arr_14 [(signed char)2] [i_6] [i_6] [i_7] [i_6])) ? (360629324) : (((/* implicit */int) (short)-32748))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_20 [i_6]) : (((/* implicit */int) arr_7 [i_5] [i_6] [12LL] [12LL]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5]))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1454901784U)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) (_Bool)1))));
    }
}
