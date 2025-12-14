/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222621
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1 - 2])) ? (((((/* implicit */_Bool) 5315794518702521204LL)) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (490114278305148347LL))) & (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) / (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    var_14 ^= ((/* implicit */long long int) arr_1 [i_0]);
                    var_15 = arr_5 [i_0] [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >> (((((min((((/* implicit */unsigned long long int) 5315794518702521204LL)), (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (5315794518702521111ULL)))));
    var_17 = 5315794518702521214LL;
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                arr_13 [i_3] [i_4] = ((/* implicit */unsigned int) -4390572518237148788LL);
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_19 [i_4] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)113)), (18446744073709551615ULL)))) ? (((var_6) ? (arr_17 [i_3] [i_4] [i_5] [i_6]) : (((/* implicit */unsigned long long int) -5315794518702521204LL)))) : (((/* implicit */unsigned long long int) (~(1113542972430306032LL)))))), (((((/* implicit */unsigned long long int) ((-5315794518702521205LL) % (6119469360355063798LL)))) | (((((/* implicit */_Bool) 4390572518237148788LL)) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])) : (arr_17 [i_3] [i_3] [i_3] [i_3]))))));
                            arr_20 [i_3] [i_4] [i_5] [i_5] = min((((var_3) / ((+(arr_9 [i_3]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 4280843337255595364ULL))));
        arr_23 [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned int) 5783688711204304797ULL);
    }
    for (long long int i_8 = 1; i_8 < 14; i_8 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-5315794518702521214LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2ULL)) ? (arr_1 [i_8]) : (arr_6 [i_8] [i_8] [i_8] [i_8]))))))) || (((/* implicit */_Bool) arr_12 [i_8 + 1])))))));
        var_20 = max((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-19)) + (2147483647))) >> (((var_10) - (6505849067211354305ULL)))))) ? (((/* implicit */long long int) (+(314423060U)))) : (max((var_3), (((/* implicit */long long int) var_9)))))), (((arr_12 [i_8]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1] [i_8] [i_8]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 4) 
        {
            for (long long int i_10 = 2; i_10 < 12; i_10 += 4) 
            {
                {
                    var_21 = var_4;
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                arr_35 [i_8] [i_9] [i_8] [i_11] [i_12] = arr_24 [i_8] [i_10];
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_10 - 2] [i_10] [i_10 - 2] [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3207154526367560603ULL)) ? (arr_5 [i_10 - 2] [i_10] [i_10] [i_10 + 2]) : (var_0)))) : (max((15239589547341991013ULL), (((/* implicit */unsigned long long int) arr_5 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        for (long long int i_14 = 1; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_40 [i_8 - 1] [i_9 - 1] [i_10 - 2] [i_13] [i_9] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))) ^ (((((/* implicit */long long int) arr_36 [i_10] [i_10] [i_10 - 2] [i_9])) | (5315794518702521222LL)))))) & (arr_11 [i_9] [i_8 + 1]));
                                arr_41 [i_10] [i_10 - 2] &= ((/* implicit */long long int) max((var_4), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_36 [i_8] [i_8 + 1] [i_8] [i_10]))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) 751329149624153212LL);
                }
            } 
        } 
    }
}
