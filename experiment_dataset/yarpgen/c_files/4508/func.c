/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4508
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [8] = ((((/* implicit */int) arr_2 [i_0 - 2])) >> (((((/* implicit */int) arr_2 [i_0 - 1])) - (18706))));
        arr_5 [i_0] |= ((/* implicit */long long int) ((2937465367U) ^ (((/* implicit */unsigned int) -287463821))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((_Bool) arr_0 [i_0 - 1])))));
                    arr_12 [i_2] [i_1] [(short)4] [i_1] = arr_1 [i_0] [i_0];
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1]))));
                }
            } 
        } 
    }
    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_11 [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_13 [i_3]))))))) ? (var_4) : (max((arr_15 [i_3 + 1] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (1073741823))))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_4]))) + (((((/* implicit */_Bool) var_1)) ? (arr_16 [i_3 + 1] [i_3 + 1]) : (arr_16 [i_3 + 1] [i_3 + 1])))));
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_4] [i_4])) != (((((/* implicit */_Bool) arr_2 [i_3 - 2])) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1]))))));
            arr_18 [i_3] &= ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)508))) * (4100242660U)))));
        }
        arr_19 [i_3 - 4] [i_3 - 4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3 - 2])) % (((/* implicit */int) arr_11 [i_3] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3 - 3])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (18446744073709551601ULL)))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (+((~(arr_14 [i_3])))))))))));
    }
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
