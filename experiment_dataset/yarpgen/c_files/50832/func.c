/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50832
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
    var_15 = ((/* implicit */signed char) ((long long int) ((short) var_10)));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = (unsigned char)38;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((var_6), (var_13)))) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) ((2U) > (var_9)))))));
                        var_19 = ((unsigned long long int) ((33546240ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_2 + 1] [i_0 + 3])))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14193))) % (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_0] [i_0]))) : (546594135U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))))));
                        var_21 = ((/* implicit */long long int) ((unsigned char) 18446744073676005399ULL));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_2 + 2]) <= (arr_5 [i_2 + 2]))))) - (max((-4538390209881417984LL), (((/* implicit */long long int) var_11))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 4; i_4 < 16; i_4 += 1) 
    {
        var_23 |= ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 1])) ? (arr_10 [9ULL] [i_4 + 1]) : (arr_10 [i_4 - 2] [i_4 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32441)))));
        var_24 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 9238776445561923890ULL)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_11 [i_4])))));
    }
}
