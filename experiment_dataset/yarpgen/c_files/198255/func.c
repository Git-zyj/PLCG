/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198255
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
    var_10 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (156658162U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [11U] = ((/* implicit */_Bool) var_5);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((4138309131U) - (2267252626U)));
    }
    /* LoopNest 2 */
    for (short i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_3)))))), (arr_8 [(short)10] [(short)10] [i_1 + 1])));
                var_12 |= ((/* implicit */unsigned long long int) var_8);
                arr_9 [i_2] = ((/* implicit */short) max(((~(((2267252608U) << (((((/* implicit */int) var_9)) - (27798))))))), (((/* implicit */unsigned int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) var_8)))))));
                var_13 = ((/* implicit */short) min((var_13), ((short)-6302)));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) 1952313731413585561ULL))), (2027714670U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_15 += ((/* implicit */short) ((unsigned short) arr_5 [i_3] [i_3]));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 8; i_5 += 1) 
            {
                {
                    arr_18 [(_Bool)1] [i_3] [i_5 + 3] [i_5] = ((/* implicit */short) var_1);
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */short) 2267252626U);
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_4] [(short)10])))) && (((/* implicit */_Bool) var_3)))))));
                    arr_20 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((unsigned int) (short)6299)) >> (((((((/* implicit */_Bool) arr_16 [i_4] [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) 2267252626U)))) - (17572116605467020294ULL)))));
                }
            } 
        } 
    }
}
