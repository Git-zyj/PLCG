/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242385
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_3))))) & (((/* implicit */int) ((unsigned char) arr_1 [i_1])))))) : (((arr_6 [i_1] [9ULL] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((long long int) arr_2 [8U] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_10 [(_Bool)1] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) + (((arr_0 [11U] [i_1]) ? (arr_8 [i_0] [i_1]) : (2158501975U))));
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)42197))));
                }
                arr_11 [i_0] [i_1] = ((/* implicit */_Bool) (((-((+(arr_3 [(short)9]))))) * (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-19144))))) / (((unsigned long long int) (short)-1))))));
                var_15 = (~(14534913935957525473ULL));
                arr_12 [7U] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_2 [i_1] [i_0])) | (((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_16 ^= (-(-1095384525));
}
