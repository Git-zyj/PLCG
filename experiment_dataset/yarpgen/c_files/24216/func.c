/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24216
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) 2194137442U))))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((13035704050527248240ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))))));
        var_14 &= ((/* implicit */unsigned short) (~((~(((5411040023182303374ULL) - (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned short) min((((arr_0 [i_0]) << (((arr_2 [i_0 - 2]) - (2841575036U))))), (((arr_2 [i_0 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 566162947U)) ? (5411040023182303354ULL) : (((/* implicit */unsigned long long int) 131068U))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (3720419360U)))) : (min((arr_6 [i_1]), (arr_11 [8U] [i_2])))))) ? (min((((unsigned long long int) (signed char)-60)), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_2))), (((/* implicit */unsigned int) ((int) (_Bool)0))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) ((_Bool) ((int) var_3)))) : (((/* implicit */int) arr_5 [i_1]))));
                                var_17 = ((/* implicit */_Bool) arr_10 [i_1] [(short)19]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned short) ((1319563) == (((/* implicit */int) (unsigned short)37749))));
        var_19 ^= ((/* implicit */long long int) (_Bool)1);
    }
    for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [20ULL])) ? (((int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_3)))));
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) (-(min((((/* implicit */unsigned long long int) arr_11 [i_6] [2ULL])), (var_1))))));
        arr_22 [(unsigned short)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1]))));
    }
    var_22 = ((/* implicit */unsigned char) max((((min((var_11), (var_7))) * (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_0)) % (var_4))) : (((/* implicit */int) min((var_3), (var_9)))))))));
    var_23 = ((/* implicit */long long int) (((-(var_2))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
