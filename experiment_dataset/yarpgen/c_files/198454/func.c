/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198454
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) << (((((/* implicit */int) var_3)) + (127)))))))) ? (((((((/* implicit */_Bool) 8870421258167952239LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) | (((/* implicit */int) (!(var_4)))))) : (max((((/* implicit */int) ((((/* implicit */int) var_3)) > (-2115711106)))), (min((var_6), (var_6)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        var_13 = ((/* implicit */int) 6015492322377122909ULL);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1]))));
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1 - 2]))) < (12431251751332428707ULL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_7))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_7))) & (((((/* implicit */_Bool) -6LL)) ? (12431251751332428706ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2]))))));
                arr_14 [i_3] [6U] [i_4] [i_4] &= ((/* implicit */short) arr_10 [i_4]);
                var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) 5588768777221643954LL)) && (((/* implicit */_Bool) arr_10 [i_2]))));
            }
            for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_12 [i_2])))), (((var_6) > (((/* implicit */int) arr_7 [16LL] [i_3])))))))));
                var_17 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)24]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((arr_2 [i_2] [i_5 - 1]) ? (((/* implicit */int) arr_2 [i_2] [i_5 - 1])) : (((/* implicit */int) arr_2 [i_2] [i_5 + 1])))) : (((/* implicit */int) ((-775565665) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_3])), ((unsigned short)65535))))))));
            }
            var_18 += ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [(_Bool)1] [i_2]))))))));
        }
    }
    var_19 = ((/* implicit */long long int) var_4);
}
