/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38537
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
    var_11 = ((long long int) min((13671794501268602408ULL), (((/* implicit */unsigned long long int) ((long long int) var_0)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = var_8;
                    arr_10 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3299686709U)));
                    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) var_7);
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3299686709U)) ? (1636648873U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_12 [i_3] [i_3]) > (9859854473903385478ULL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) || (((((/* implicit */int) arr_11 [i_3] [i_3])) != (((/* implicit */int) arr_11 [16ULL] [16ULL]))))))) : (((/* implicit */int) (((_Bool)1) && ((!(((/* implicit */_Bool) var_4)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_15 [i_3] [i_3] [(short)19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_4]))) & (3156356862155482956ULL))) << (((/* implicit */int) max(((_Bool)0), (arr_11 [i_3] [i_3]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) 3299686709U))))) ? (arr_13 [(short)23]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)23217)))))))));
            arr_16 [(short)4] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) (unsigned char)19)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))))) ? ((-(var_7))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_0))))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) min((var_0), (arr_11 [i_3] [i_4])))) >> (((((((/* implicit */_Bool) (short)-7980)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (15290387211554068637ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_11 [i_4] [1U])) : (((/* implicit */int) arr_11 [i_3] [(unsigned char)10])))))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_20 [i_5] [i_5] = ((/* implicit */long long int) (unsigned short)0);
            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [(short)8])) : (((/* implicit */int) arr_11 [i_3] [i_5 + 1]))))))) / (var_7)));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)233)) && ((_Bool)1))) ? (((((/* implicit */_Bool) 1121448892858490500LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4535))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (min((var_1), (arr_12 [i_5 + 1] [i_5]))))))));
        }
    }
    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -5621883291166929397LL))) ? (((/* implicit */unsigned long long int) arr_25 [i_7] [i_6] [i_8 - 1])) : (((arr_2 [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_9 [i_7] [11ULL] [16LL] [i_7])) * (((/* implicit */int) var_9))))))) : (min((((/* implicit */unsigned long long int) arr_28 [i_6 + 1] [i_7])), (18446744073709551615ULL)))));
                    arr_30 [0U] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_6]))))), (((unsigned int) var_10))))) || ((!(((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6 + 1] [i_6]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) arr_6 [8LL]);
        arr_31 [(signed char)6] &= ((/* implicit */unsigned char) var_4);
    }
    var_24 = 1636648873U;
}
