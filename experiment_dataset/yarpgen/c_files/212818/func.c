/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212818
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
    var_18 += ((/* implicit */int) ((long long int) var_12));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (-6500653571951512637LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) : (-6500653571951512654LL)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 703437553174638850LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [(_Bool)1] [i_1])))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (6500653571951512605LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (-3144684025360202466LL)))) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_1])) : (((/* implicit */int) ((unsigned char) var_4)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (847992083U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)3])) ? (505343979U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2])))))) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (short)18052)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [4U] [i_2] [i_2] |= ((/* implicit */long long int) var_17);
                                var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_5 [i_4] [i_0] [i_0] [0LL])), (((unsigned int) arr_5 [i_0] [i_0] [i_1] [i_3 + 1])))), ((+(((((/* implicit */_Bool) -6500653571951512620LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_0] [i_2] [i_1 - 3] [i_0]))) : (arr_6 [i_0] [i_3] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((arr_6 [i_5] [i_5] [i_5]) & (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_13 [i_5] [i_5 + 2]))))), (var_14)))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 1513899897U)) ? (arr_6 [i_5] [i_5 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5])) % (((/* implicit */int) (short)(-32767 - 1)))))) ? (max((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [(short)10] [i_5])), (var_9))) : (((/* implicit */int) (!(arr_8 [i_5] [i_5] [i_5 - 2] [14] [i_5 + 2] [i_5])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((arr_8 [11LL] [i_5 + 2] [11LL] [i_5] [i_5 + 1] [i_5 + 1]) ? (((/* implicit */int) arr_5 [11LL] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_13))))) >= (max((arr_6 [i_5] [i_5 + 2] [i_5 + 2]), (((/* implicit */unsigned int) arr_8 [(short)1] [(short)1] [i_5] [i_5] [i_5] [i_5 - 1])))))))));
        var_24 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_5 + 2])))))))), (var_2)));
    }
}
