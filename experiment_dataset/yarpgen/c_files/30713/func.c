/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30713
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
    var_20 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_16)))) | (((/* implicit */int) min(((unsigned short)10928), (((/* implicit */unsigned short) (short)-81))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))))) ? (((/* implicit */int) ((var_1) > (((/* implicit */int) var_13))))) : (var_1)))));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)-17343))))) + (9223372036854775807LL))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)17))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)70)) ? (arr_3 [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-17332)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) % (arr_5 [i_0] [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_1 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_4] [i_5 + 2])) ? (((/* implicit */int) arr_8 [i_5])) : (-55616185)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_5] [i_4] [(unsigned char)18] [i_0])) : (((/* implicit */int) (_Bool)0))))) : (((arr_5 [i_0] [i_4] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))));
                        arr_17 [i_0] [i_5 - 1] [i_5 - 2] [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_0 [i_3]) : (((/* implicit */int) (short)-16006)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)253)) ? (-6516903211933880881LL) : (((/* implicit */long long int) ((/* implicit */int) (short)100))))) + (6516903211933880889LL)))));
                    }
                } 
            } 
        } 
    }
}
