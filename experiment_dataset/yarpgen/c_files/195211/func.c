/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195211
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37176))) % (14ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) & (((((/* implicit */_Bool) arr_4 [i_1])) ? (9225538253644375226ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_1 [i_1])))))));
                var_11 *= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_1])))) ^ (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [5ULL] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 2821750806U));
                    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_2 - 1] [i_2 - 1]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 13009820495203232660ULL))))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1]))))));
                var_14 ^= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)7] [(unsigned short)7] [i_0]))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) >= (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_5))))));
}
