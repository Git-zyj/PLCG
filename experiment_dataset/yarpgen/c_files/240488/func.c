/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240488
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 6285982883690606634ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((arr_3 [i_0]) - (14342703547547959003ULL)))))) : (arr_3 [i_0]))), (min((arr_3 [i_1]), (var_8)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_3] [(_Bool)1] &= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_16))), (var_4)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((12160761190018944960ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))))))));
                                arr_13 [i_4] [i_4] [i_2] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (arr_8 [i_2] [i_1])))))) : (((((/* implicit */_Bool) 12160761190018944970ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)5] [i_3] [i_4]))))));
                            }
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((long long int) var_17)))));
}
