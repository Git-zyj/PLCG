/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201925
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) -7739587202772044790LL)) ? (arr_3 [i_0] [7LL]) : (((/* implicit */int) (signed char)56)))) : ((+(arr_3 [i_0] [22]))))))));
        var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))), (arr_3 [19U] [i_0])));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(arr_9 [4LL] [4LL]))))));
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */short) arr_7 [i_1] [i_1 + 1])), (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [(_Bool)1])))), (max((((/* implicit */long long int) 32915932)), (0LL)))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_12 [i_1])))));
        arr_13 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        var_19 |= ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (signed char)-96)) : (-1631298385));
    }
    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28875))) : (60066135967295212LL)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3139533462U)) ? (((/* implicit */int) (unsigned short)36664)) : (((/* implicit */int) (signed char)-45))))))) : (((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)96)))) || (((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (short)29665)))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_6] [i_5]))))), ((signed char)-57)))), (((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) arr_16 [i_5] [i_4])) : (((/* implicit */int) (unsigned short)36660)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4])))))))));
                }
            } 
        } 
        arr_28 [i_4 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -2330357171483939636LL)) : (arr_26 [i_4] [i_4] [i_4])))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_19 [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) arr_27 [(signed char)9] [i_4] [i_4] [i_4] [i_4] [(signed char)9])) : (((/* implicit */int) (signed char)119)))))))) ? (((((/* implicit */_Bool) 12249415335007032011ULL)) ? (-1668763366758168672LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-83))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72)))));
        arr_29 [14LL] [i_4 + 2] = ((/* implicit */unsigned short) arr_18 [(signed char)2] [(signed char)2]);
    }
    var_23 = (signed char)127;
}
