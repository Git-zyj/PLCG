/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211802
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37807)) / (((/* implicit */int) min(((unsigned short)27729), (((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0 + 2])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((16467059169633067355ULL) - (16467059169633067355ULL)))))) / (((((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_3])) ? (-4306825577508418492LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) != (((/* implicit */long long int) max((arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17480)) + (((/* implicit */int) (unsigned short)23758)))))))))))));
                        arr_13 [(_Bool)1] [i_1] [i_2] [i_2] [(_Bool)1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3930060035U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1963)))))) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 1])) : (((var_4) & (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((1979684904076484264ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            arr_16 [23U] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1643558116)) ? (4306825577508418491LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35553)))));
                            var_18 = ((/* implicit */unsigned char) (unsigned short)37819);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_12 [i_0] [20] [i_0] [i_0] [i_0] [i_0 + 1]))));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23758)) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_2] [i_1] [i_2] [i_0])) ? (arr_6 [i_4]) : (arr_6 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (short)-16989)) > (((/* implicit */int) (unsigned short)29982)))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 3]))) : (arr_11 [(short)1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 3])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) var_4))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (signed char)107))))));
                    arr_26 [i_5] = ((/* implicit */unsigned short) -2073150006);
                }
            } 
        } 
        arr_27 [(unsigned short)13] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [3U])))) || (((/* implicit */_Bool) ((((arr_6 [i_5]) + (2147483647))) << (((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) - (2715143687U))))))));
    }
    var_23 = ((/* implicit */long long int) ((max((max((((/* implicit */int) var_5)), (var_4))), ((+(((/* implicit */int) (signed char)105)))))) > (((/* implicit */int) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15))))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13055)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (short)23189))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25537)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned short)7102))))) ? ((-(((/* implicit */int) var_12)))) : (((-470487084) + (((/* implicit */int) var_8))))))));
}
