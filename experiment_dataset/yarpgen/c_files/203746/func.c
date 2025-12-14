/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203746
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [10]) >> (((((((((/* implicit */_Bool) 6132383107255566415LL)) ? (arr_0 [(unsigned char)9]) : (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (arr_0 [i_0]))))))) - (1473537461031100999ULL)))));
        var_10 = ((/* implicit */unsigned short) max(((-(104070207324290463LL))), (((/* implicit */long long int) (unsigned short)7780))));
    }
    for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_11 |= ((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_1] [i_2])) * (min((104070207324290457LL), (((/* implicit */long long int) arr_12 [i_4 + 1] [i_4] [i_4 + 3] [i_4] [i_4 - 2]))))));
                            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_4] [i_4 + 3] [i_1 + 2] [i_1] [i_1]))) ? (1783990008054681575ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)58426)), (var_2)))) ? (arr_15 [i_1 - 3] [i_2] [0ULL] [i_5] [i_4 - 2]) : (((/* implicit */int) var_7)))))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -104070207324290463LL)) ? (((/* implicit */int) (unsigned short)39673)) : (((/* implicit */int) (unsigned short)24220)))))));
                            var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_2] [i_6 + 4]))), (((/* implicit */unsigned long long int) min((615135910), (((/* implicit */int) arr_7 [i_1 - 1] [i_4 + 3] [i_6 + 3])))))));
                        }
                        arr_18 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_1 [i_1]))))))), (var_6)));
                        var_15 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (max((((/* implicit */int) arr_17 [i_1] [i_2] [11] [i_3] [i_2] [i_4])), (var_0))) : (((/* implicit */int) (unsigned char)153)))) >> (((var_6) - (9666837149920440209ULL)))));
                        var_16 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) var_5)), (11184224123401453887ULL))), (((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_3] [(_Bool)1] [i_1]), (((/* implicit */unsigned short) arr_9 [i_1] [i_2]))))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) (short)-22219)), ((unsigned short)24821))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_13 [7LL] [6] [6] [i_1] [i_1 - 2])), (var_5)))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((unsigned long long int) 576460752303423487LL)))))));
    }
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))), (((/* implicit */long long int) var_1)))))));
}
