/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3424
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(4150746504U))), (((/* implicit */unsigned int) (unsigned char)213)))))));
                        arr_11 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_3 - 1]), (((/* implicit */unsigned long long int) arr_10 [3] [i_3 + 1] [i_0 - 2] [i_0]))))) ? (max((arr_8 [i_3 - 1] [i_2] [i_0 + 3] [i_0 + 2]), (((/* implicit */unsigned int) arr_10 [i_3] [i_3 - 1] [i_0 + 1] [3ULL])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_0] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) (unsigned char)233)) : (arr_10 [i_3] [i_3 + 1] [i_0 - 2] [i_0])))));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_18 = ((((((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))))) < (((/* implicit */int) (short)-29147)))) ? (arr_8 [i_0 + 3] [i_1] [(_Bool)1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))));
                        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_0] [i_4]) != (((/* implicit */int) (unsigned char)213))));
                        arr_17 [i_0] [(_Bool)1] [i_2] = ((((/* implicit */unsigned long long int) max((-5561677906944006565LL), (((/* implicit */long long int) ((unsigned char) (short)-29147)))))) * (max((max((arr_1 [i_0]), (var_13))), (((/* implicit */unsigned long long int) -6359049164518420908LL)))));
                        var_19 ^= ((/* implicit */_Bool) (~(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_4])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (arr_6 [i_0] [i_0] [(unsigned short)0])))))))) & (min((((((/* implicit */_Bool) -212877676)) ? (1721613043478542610LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2]))))), (((/* implicit */long long int) arr_5 [i_1])))))))));
                                arr_22 [i_6] [i_6] &= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) (~(arr_0 [i_5])))) == (((((/* implicit */_Bool) (unsigned char)25)) ? (-8586153525050225078LL) : (((/* implicit */long long int) arr_8 [2] [i_5] [i_2] [i_0]))))))), (var_2)));
                                arr_23 [i_0] [i_0 - 1] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_0 - 2] = (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-29147))) % (1674102549U))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_11);
        var_23 += ((((/* implicit */_Bool) (unsigned short)34937)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12856661982734203174ULL));
    }
}
