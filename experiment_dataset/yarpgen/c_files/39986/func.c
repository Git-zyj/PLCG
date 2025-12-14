/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39986
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
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((max((18446744073709551615ULL), (18446744073709551615ULL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (0ULL))))) : (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (13ULL))), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1]))))));
        var_19 = ((/* implicit */unsigned short) max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_7 [i_2] [i_1 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8158872543641365819ULL)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_10 [i_0] [i_0])))) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 2])))));
                        arr_12 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [(signed char)10] [i_1 - 1] [(signed char)10]))))) ? (16ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0])), (arr_0 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_2] [i_3]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16613))) & (5130594657426624600ULL)))) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (5130594657426624600ULL))) : (((arr_10 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) : (0ULL)))))));
                        var_20 *= ((/* implicit */signed char) (_Bool)1);
                        arr_13 [i_0 - 1] [i_0 + 1] [i_1] [(signed char)9] [i_2] = max((((/* implicit */unsigned long long int) ((arr_9 [i_1 + 2] [i_2] [i_1 + 2] [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 2] [i_2] [i_1 + 2] [i_2] [i_1 + 1]))))), (5130594657426624578ULL));
                        arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_10 [i_1 - 1] [(signed char)11]))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_17 [i_4] [i_4] &= ((/* implicit */short) (-((((_Bool)1) ? ((-(((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_8 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (((_Bool)1) ? (arr_18 [i_4] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))))), (arr_21 [i_4])));
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_5] = ((/* implicit */short) (~(132893525)));
                                arr_31 [i_4] [i_5] [i_5] [i_4] [i_4] = max((((/* implicit */unsigned long long int) arr_16 [i_4])), (max((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), ((+(18446744073709551615ULL))))));
                                arr_32 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_6 [i_5 + 2] [i_8 - 1])) : (((/* implicit */int) (signed char)-120))))) ? (min((5130594657426624573ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_5] [i_8]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_15 [i_5] [i_6]))))) ? (((891597968) - (((/* implicit */int) arr_20 [i_4])))) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned char)249), (arr_34 [i_9] [i_9])))))))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_33 [i_9])) : (11529251317157590284ULL))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_33 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (_Bool)1)))))) : (39215003U)))));
    }
}
