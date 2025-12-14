/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32622
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((max((15249856005375984390ULL), (((/* implicit */unsigned long long int) (unsigned char)66)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (arr_0 [i_0 + 3] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0 - 1])), (var_2))))) + (((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) && (var_0)));
        var_16 = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26368)))))) ? (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))))) : (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_1 + 3])), (var_7))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)60)) ? (-1287086137) : (((/* implicit */int) (_Bool)1))));
        var_20 += ((/* implicit */_Bool) arr_3 [i_1 - 2]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_9))))) && (((((/* implicit */int) ((unsigned char) (unsigned char)19))) != (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) arr_6 [2ULL]))))))))))));
        var_22 = ((/* implicit */signed char) var_13);
        var_23 = ((/* implicit */unsigned char) arr_5 [i_2]);
        var_24 -= ((/* implicit */unsigned char) ((((_Bool) 1287086137)) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((arr_5 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))))) : (arr_5 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-26369)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_3])) ? (var_13) : (((/* implicit */long long int) arr_6 [i_3])))) != (((/* implicit */long long int) arr_8 [i_3] [i_4]))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max(((~(max((((/* implicit */long long int) (_Bool)1)), (var_1))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_6 [i_3])))))));
                                var_27 += ((/* implicit */unsigned char) arr_13 [i_3] [i_4] [i_5] [i_7]);
                                var_28 ^= arr_15 [i_6 + 2] [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
