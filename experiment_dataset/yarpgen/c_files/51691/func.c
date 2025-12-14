/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51691
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))))) * (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_10);
                    arr_9 [i_1] [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1033392629)) ? (-1033392618) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */int) var_9)) - (1033392629))) : (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2] [i_2])))) < (((arr_2 [i_1] [i_0]) / (arr_2 [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (arr_11 [i_2 + 2] [(short)10] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
                        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) < (10244069835973813896ULL)));
                        var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 11984890417240253005ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))) : (arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] [(short)5])))));
                    }
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)199)) >> (((((/* implicit */int) var_3)) - (18264)))))))))));
}
