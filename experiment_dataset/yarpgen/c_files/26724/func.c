/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26724
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) < ((~(var_12)))));
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) - (var_5))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((unsigned int) ((var_3) * (((/* implicit */int) var_1))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(arr_3 [i_0]))))));
        arr_4 [i_0] [i_0] = (-(((/* implicit */int) var_6)));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((arr_5 [i_1] [16LL]), (((/* implicit */int) var_6)))))) << (((var_10) - (14404066627398790400ULL)))));
        var_18 = ((/* implicit */short) min((min((arr_5 [i_1] [i_1]), (((var_6) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))))), (((/* implicit */int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) 23U)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)26)) && (arr_6 [i_1] [i_1]))) ? (((((/* implicit */unsigned int) arr_5 [i_1] [i_1])) & (4294967273U))) : (((/* implicit */unsigned int) (+(-850311358)))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_4);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((4294967273U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2])))))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */long long int) 26U)) : (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */long long int) 67108863U)) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) 4294967277U))));
        /* LoopNest 3 */
        for (short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_5] [i_5] [i_5] [i_5] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21924)) - (((/* implicit */int) (signed char)7))))) : (min((((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_4 + 2] [i_3])), (arr_13 [i_2]))))), (((/* implicit */unsigned int) arr_17 [i_2] [i_4 - 1] [i_2] [i_4 - 1] [i_5] [i_5])))))));
                        arr_19 [i_2] [i_3] [i_4] [i_3] = arr_13 [i_5];
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    arr_30 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) ((var_11) < (((/* implicit */unsigned long long int) arr_25 [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 14; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_9 - 3] [i_9 + 1])) ? (((/* implicit */int) (short)511)) : (var_7))))));
                                arr_36 [i_6 - 1] [i_6] [i_6] [i_6] [7] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_6 + 1] [(_Bool)1] [i_6 + 1] [i_9])) ? (arr_34 [(unsigned short)9] [i_7] [i_6 - 1] [i_7]) : (arr_34 [i_9] [i_9] [i_6 - 1] [i_9])));
                                arr_37 [i_10] [i_9] [i_8] [i_7] [i_6] = ((((/* implicit */int) arr_28 [7ULL] [i_9 - 2] [i_10] [i_10])) | (((/* implicit */int) (unsigned char)46)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((int) ((23U) + (((/* implicit */unsigned int) var_3)))));
        arr_38 [i_6] [i_6] = ((/* implicit */unsigned char) arr_32 [i_6] [i_6] [i_6] [i_6]);
        arr_39 [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_6 + 1]))));
        var_25 = ((/* implicit */unsigned char) arr_5 [i_6 - 1] [i_6]);
    }
}
