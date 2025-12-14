/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53198
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
    var_20 = max((((unsigned int) ((unsigned short) (unsigned char)131))), (((/* implicit */unsigned int) var_13)));
    var_21 &= ((/* implicit */signed char) ((var_7) ? (((/* implicit */unsigned long long int) max((((((((/* implicit */int) var_15)) + (2147483647))) << (((var_3) - (2324245213U))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))))) : (var_14)));
    var_22 = ((/* implicit */_Bool) (-(var_18)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)43153))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))) : (((/* implicit */int) (unsigned short)22383))))));
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22385)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23986))) : (arr_1 [i_0])))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) var_18))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (1522646249U) : (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) var_2))))));
        var_25 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_26 = (+(((((1587570453006710939ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_27 |= ((/* implicit */short) ((unsigned int) 4309127863904375701ULL));
                        var_28 &= arr_8 [8U] [i_3] [i_3];
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_2]))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5] [i_5] [i_4] [i_3] [i_2] [i_2] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) (unsigned char)37))))), (((((/* implicit */_Bool) (-(arr_11 [12ULL] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_1)) : (var_14)))))));
                        }
                    }
                } 
            } 
            var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13436))) : (var_9)));
        }
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            arr_22 [i_6] [i_1] = arr_5 [i_6] [i_1];
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)43153)) * (((/* implicit */int) (unsigned char)131)))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)19)))), (((/* implicit */int) arr_8 [i_6 + 1] [i_6 - 1] [i_6 + 1]))))));
            var_32 = ((/* implicit */unsigned long long int) arr_6 [i_6 - 1]);
            var_33 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43167))) : (var_6)))) == (((((/* implicit */_Bool) var_19)) ? (arr_11 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))))))) ? (max((var_1), (((/* implicit */unsigned int) arr_6 [i_1])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) arr_6 [i_1])))))))));
        }
        var_34 = ((/* implicit */unsigned char) (unsigned short)22382);
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (max((3447291673U), (((/* implicit */unsigned int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) min((((/* implicit */unsigned short) (short)19686)), ((unsigned short)22369)))))))));
    }
    for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        var_36 |= ((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_7] [i_7 - 2] [(_Bool)0] [(short)20] [i_7 - 2]);
        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_7]))));
        var_38 = ((/* implicit */_Bool) ((signed char) 1985131617));
    }
}
