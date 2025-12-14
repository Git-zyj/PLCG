/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30896
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)14538)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((((/* implicit */int) (short)8716)) / (((/* implicit */int) (unsigned short)5701)))) : (((((/* implicit */_Bool) (short)9176)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)14523))))))))))));
        var_18 = min(((unsigned short)22937), (((/* implicit */unsigned short) var_5)));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (short)-8221))));
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)14520)) << (((arr_5 [i_1]) - (5980183883167530216ULL)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_20 [i_1 + 1] [i_2] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1] [i_4 - 3] [i_1] [i_1 - 1] [i_2] [i_1]) : (((/* implicit */int) var_14))));
                            arr_21 [i_1] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-18818)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22917))) : (17466412109514131834ULL))) | (((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_2] [i_3 + 1]))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)14521)) ? (4845595403401836060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22885))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (var_8) : (((/* implicit */int) (unsigned short)21019)))))));
                            arr_24 [i_2] [i_4] [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1] = ((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) (unsigned short)65532)))) >> (((var_15) + (620959942))));
                        }
                        var_20 = ((/* implicit */unsigned short) (short)-32757);
                    }
                } 
            } 
        } 
    }
    var_21 = min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)22869)), (var_13)))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_12))))), (var_12));
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (int i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(arr_27 [i_8 + 1]))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_9] [i_10])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)45212)))) : ((-(var_9)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) (-(-2041036977)))), (((unsigned long long int) (unsigned short)22852)))), (((/* implicit */unsigned long long int) var_15)))))));
                                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 2]))))) ? (((/* implicit */int) max((arr_37 [i_8 - 2] [i_8] [i_7] [i_11]), (arr_37 [i_8 - 2] [i_8] [i_7] [i_11])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_8 - 2] [i_8] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
