/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196496
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!((_Bool)1)));
                    arr_11 [(unsigned char)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [(short)1] [i_0]) == (arr_7 [i_0] [i_0]))))) : (((arr_7 [i_1] [i_0]) % (arr_7 [i_0] [i_0])))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (unsigned char)239))))))) != (((/* implicit */int) max((max((var_11), (((/* implicit */unsigned short) (unsigned char)0)))), (((/* implicit */unsigned short) arr_3 [i_0] [12] [i_0])))))));
    }
    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_13 [(signed char)15] [i_3 - 1]))))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) & (10948024813149220945ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_13)) ? (2416126983174651156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))))));
        arr_16 [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) & (3712456832557401158ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 2]))))) : (1830591109)));
        var_18 *= ((/* implicit */unsigned long long int) (!(((_Bool) (unsigned char)16))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_26 [i_3] [i_3 - 1] = (signed char)-4;
                                arr_27 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) >= (2416126983174651156ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 24; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                arr_33 [i_3 - 1] [(unsigned char)20] [(unsigned char)20] [i_9] = ((/* implicit */unsigned long long int) (~(min(((~(9223372036854775803LL))), (((/* implicit */long long int) arr_23 [i_3 + 2] [i_3 + 2] [i_8] [i_8 - 3] [18] [(unsigned char)24]))))));
                                arr_34 [(unsigned char)0] [(unsigned short)17] [i_4] [i_5] [(unsigned short)17] [22ULL] [(unsigned short)17] = ((/* implicit */_Bool) arr_30 [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3 + 1] [i_3] [i_3 + 3] [i_3 + 3]))) * (arr_30 [i_3 + 2])))) && (((((/* implicit */int) arr_21 [i_3 + 3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 3] [i_3])) == (((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 2] [i_3 - 1] [(signed char)18] [i_3 + 1] [i_3 + 1]))))));
    }
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)234))));
}
