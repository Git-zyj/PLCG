/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42337
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
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_0 [6ULL] [i_4 + 1])) + (55))))), (((/* implicit */int) arr_10 [i_4 - 2] [i_3] [i_1] [i_2] [i_1] [i_0])))) << (((max((((/* implicit */unsigned long long int) -1952848959)), (15589232743532613515ULL))) - (18446744071756702656ULL)))));
                                var_13 ^= ((/* implicit */unsigned short) arr_2 [i_4 - 2] [i_3] [(unsigned char)11]);
                                arr_13 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_4]), (((/* implicit */short) arr_2 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_1 [i_1] [i_3]), (arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((-4028171913574150519LL) >= (((/* implicit */long long int) arr_7 [i_0] [i_2] [i_4 - 1] [i_3])))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2857511330176938120ULL)))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (signed char)-46)), (arr_9 [i_1] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1]), (arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) 1338995111U)) : (var_11)))));
                    arr_14 [(_Bool)1] = ((/* implicit */long long int) (-((~(((/* implicit */int) max((arr_1 [i_2] [i_0 - 3]), (arr_8 [i_0] [i_1] [i_0] [i_2] [i_2]))))))));
                    arr_15 [i_0 + 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((14420394722870700995ULL), (((/* implicit */unsigned long long int) (signed char)-46))))) ? (max((((/* implicit */unsigned long long int) arr_3 [12U] [12U])), (((((/* implicit */_Bool) -3LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) : (18446744073709551615ULL))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 3])), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1])) ? (2857511330176938120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (4026349350838850640ULL)));
                }
            } 
        } 
    } 
}
