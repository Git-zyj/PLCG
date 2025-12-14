/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211392
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
    var_16 |= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) - (8LL)))) || (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((short) 805516212U)))))))))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) < (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), (var_13)))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 2] [i_0])))) : (((/* implicit */int) max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2]))))));
        arr_3 [i_0] = ((/* implicit */int) (-(20LL)));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((arr_0 [i_0] [i_0]) ? (var_3) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) var_3)) ? (14356245230142794658ULL) : (((/* implicit */unsigned long long int) var_9)))) : (min((arr_1 [i_0] [3]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)5))) < (-8LL)));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4090498843566756958ULL)) ? (arr_12 [i_3] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39725)))))) ? (((long long int) arr_10 [i_2] [i_2])) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11289)))))))))) : (min((min((var_2), (((/* implicit */unsigned long long int) arr_11 [i_1] [(short)3] [i_3])))), (arr_12 [i_1] [i_2] [i_2] [i_3])))));
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (4090498843566756958ULL) : (((/* implicit */unsigned long long int) 4U))))) ? (((((/* implicit */_Bool) (unsigned short)39725)) ? (2610366928655515232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [11U] [11U] [11U]))))) : (max((((/* implicit */unsigned long long int) (unsigned short)25802)), (4090498843566756958ULL)))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_1])), (((((/* implicit */_Bool) 14356245230142794658ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11289))) : (4090498843566756962ULL))))) : (var_7)));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) 867776515U)), (var_4))), (((14102772682667296466ULL) >> (((11459649495143517807ULL) - (11459649495143517763ULL))))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1510632147) : (((/* implicit */int) (signed char)39))))), (((unsigned long long int) arr_7 [i_1]))))));
    }
}
