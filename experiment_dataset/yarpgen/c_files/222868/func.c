/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222868
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
    var_17 = ((_Bool) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))) | (458215897)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [2ULL] [i_1] [2ULL] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((arr_8 [i_0] [i_1 + 3] [i_2]) / (458215903))) >> (((((/* implicit */int) arr_5 [i_1] [i_0 - 1])) - (15296)))))) : (((/* implicit */unsigned int) ((((arr_8 [i_0] [i_1 + 3] [i_2]) / (458215903))) >> (((((((/* implicit */int) arr_5 [i_1] [i_0 - 1])) - (15296))) + (46105))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 - 2])) == (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11243717580175615219ULL)))));
                    var_19 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [14LL] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [17ULL] [2ULL] [i_2]))))))) < (((/* implicit */int) (signed char)119))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56242))) ^ (0ULL))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_1 + 2] [i_3 + 1]))))) & (max((((/* implicit */unsigned int) arr_0 [i_3])), (arr_7 [i_1 + 1] [i_2] [i_2])))))));
                            arr_16 [i_0] [i_1] [i_3] [19ULL] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */int) (_Bool)1)) - (var_14))))));
                            arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)218)) >> (((((/* implicit */int) (unsigned short)56242)) - (56236)))));
                            var_21 -= ((/* implicit */unsigned long long int) 1786804893);
                        }
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)8)) == (((/* implicit */int) (unsigned char)38))))) > (((/* implicit */int) arr_6 [i_1 - 3] [i_3 + 1] [(short)1]))));
                        arr_18 [i_0] [(signed char)6] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)190)) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)108))))))) ? (((unsigned long long int) max(((unsigned char)23), (arr_12 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -310846315)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (1U))))));
                    }
                    for (short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_23 |= ((/* implicit */unsigned long long int) max(((_Bool)0), ((_Bool)1)));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) + (((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_1 - 3] [i_2] [i_2] [i_5] [i_5])) ? (arr_14 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 + 1] [8U] [i_2] [i_5]) : (arr_14 [i_0 - 1] [i_0 - 2] [i_1 + 3] [(_Bool)1] [i_1 + 3] [19] [(unsigned char)17])))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((669969676676402624LL) < (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [6LL] [6LL])) || (((/* implicit */_Bool) 211310838)))))))))))));
                        arr_23 [i_5 + 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_1]);
                        arr_24 [i_0] [i_1] [i_0] [i_5] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1ULL)))) : (arr_13 [i_0 - 1] [i_0 - 2] [i_1] [5ULL] [i_2] [i_1]))) & (max((18446744073709551598ULL), (7ULL))));
                    }
                    for (short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_32 [(short)3] [i_1] [i_2] = ((/* implicit */unsigned char) (~(arr_8 [i_0 + 1] [i_2] [(_Bool)1])));
                            var_26 = ((/* implicit */short) ((((arr_7 [i_7] [i_6 + 1] [i_2]) != (arr_7 [i_0] [i_1 - 1] [i_2]))) ? (((long long int) arr_7 [i_0 - 1] [i_1 + 3] [i_1 - 1])) : (((/* implicit */long long int) arr_7 [i_0 - 1] [(signed char)16] [(unsigned char)16]))));
                            arr_33 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_6] [i_7]);
                        }
                        arr_34 [i_1] [i_1] [15] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((1857358323U) + (((/* implicit */unsigned int) arr_25 [i_6 + 3] [i_0 - 1] [i_1 - 1] [i_6 + 3])))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned char)245))))) ? (((/* implicit */int) arr_26 [i_0 + 1] [i_1] [(short)13] [i_0 + 1])) : (((int) arr_27 [i_1] [i_2] [i_1 + 2] [i_1])))))));
                    }
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967272U))));
}
