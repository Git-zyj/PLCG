/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51846
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_4))))) / (((((/* implicit */_Bool) (unsigned short)21463)) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 2] [7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [10LL])))), (min((((/* implicit */int) ((1777268677U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [(unsigned short)20] [i_2] [6LL] [i_4] [i_2] [i_2])))))), (((arr_9 [i_1] [i_1] [i_2] [i_2] [i_2]) & (((/* implicit */int) arr_7 [i_0])))))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1777268679U)) : (var_9)))) * (min((var_14), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        var_19 ^= ((((/* implicit */int) arr_0 [i_5 - 1] [16])) / (var_0));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_5]))) && (((2517698627U) != (2517698611U)))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_6 [i_5] [(unsigned short)10] [(short)0] [i_5 - 1]))))));
        var_22 ^= ((((/* implicit */_Bool) (unsigned short)10532)) ? (var_8) : (((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1])));
    }
    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 2) 
    {
        arr_16 [i_6] [i_6 + 1] = ((/* implicit */_Bool) min((max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((_Bool) arr_14 [i_6 - 1] [i_6 + 1])))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 3; i_7 < 23; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) -2540583915268222796LL);
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned long long int) (unsigned char)132)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((4503599627354112LL), (((/* implicit */long long int) 1777268668U))));
        arr_22 [i_6 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) (signed char)116))))) ? (min((max((var_14), (((/* implicit */unsigned long long int) arr_17 [i_6])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [(_Bool)1] [i_6])))));
        arr_23 [i_6] = ((/* implicit */_Bool) var_1);
    }
}
