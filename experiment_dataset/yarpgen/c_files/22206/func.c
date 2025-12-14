/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22206
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */signed char) ((_Bool) (unsigned char)0));
                    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (10251231043922463347ULL) : (arr_1 [i_0]))), (max((8195513029787088276ULL), (arr_1 [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_8 [(signed char)2] [(signed char)2] [i_2] [i_2] [i_2] [i_3])), (var_8)));
                        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)121)), (max((10251231043922463347ULL), (10251231043922463347ULL)))));
                    }
                    var_16 ^= ((/* implicit */long long int) ((unsigned short) (((+(arr_1 [i_0]))) <= (max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_0] [i_0] [i_0])), (arr_1 [i_1]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_6)))));
        var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 8195513029787088269ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((unsigned long long int) var_1))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((18446744073709551602ULL) < (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
    var_20 = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (895196905150191LL))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-512))))))), (var_8));
}
