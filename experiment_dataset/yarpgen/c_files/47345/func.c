/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47345
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_1 [i_0])))) : (min((7044955898499852554LL), (((/* implicit */long long int) (unsigned char)178)))))) + (9223372036854775807LL))) << ((((+(((/* implicit */int) (unsigned short)2)))) - (2)))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20223)) << (((4583537410814805085LL) - (4583537410814805081LL)))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) 4583537410814805072LL)) && (((/* implicit */_Bool) arr_1 [i_0])))))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) -385277987))))), ((-(((/* implicit */int) (unsigned short)7)))))) : (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((long long int) arr_1 [i_0])) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) << (((/* implicit */int) ((max((((/* implicit */long long int) arr_1 [i_0])), (5285162965936237576LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (67108863U)))))))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) 3708632454202135878LL))))))))));
        var_21 = ((/* implicit */unsigned long long int) 4583537410814805102LL);
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((arr_1 [i_1 + 1]) >= (arr_1 [i_1]))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 882991807)) ? (arr_1 [i_1]) : (((/* implicit */int) (unsigned char)21))))) : (min((4154698686618444563ULL), (((/* implicit */unsigned long long int) arr_2 [0])))))));
        var_23 = ((unsigned char) arr_0 [i_1]);
    }
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((_Bool) (unsigned char)24)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) : (arr_5 [i_2] [6U])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2 - 3])) : (268435456)))) * (min((10398351371577291407ULL), (((/* implicit */unsigned long long int) (short)18309))))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (short)8278))))))))));
        var_25 = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_3 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11678723984877103979ULL)))) ? (arr_7 [i_3 - 1]) : (((7044955898499852553LL) << (((/* implicit */int) (signed char)0))))));
        var_27 -= ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (signed char)-100))))));
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64856)) ? (((/* implicit */int) (unsigned char)124)) : (1784453312)))) ? (((/* implicit */int) arr_4 [i_3 - 3] [i_3])) : ((~(((/* implicit */int) arr_8 [i_3]))))));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 - 2]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_4] [i_3] [i_3] &= ((unsigned char) arr_5 [i_3 + 1] [i_3 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3446510833U)) ? (arr_14 [i_3 + 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_21 [i_3 + 1] [i_3] [i_3 + 1] [i_6 + 2]))));
                        arr_23 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_6 + 1] [i_3 - 2])) : (((/* implicit */int) arr_6 [i_6 - 1] [i_3 - 1]))));
                        arr_24 [i_6] [i_5] [i_4] [i_3 - 2] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)25433)))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_7] [i_4] [i_4] [i_7 + 2] = (!((_Bool)1));
                        arr_28 [i_3] [i_3] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 37629663U)) ? (((/* implicit */int) (unsigned short)45998)) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_7]))))) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_29 ^= ((/* implicit */long long int) ((18446744073709551589ULL) + (15ULL)));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > ((-(((/* implicit */int) ((unsigned char) (unsigned short)7197))))))))));
}
