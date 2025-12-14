/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208174
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [3U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_1 - 3] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1] [i_1])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_5 [(unsigned short)14] [10] [(unsigned short)3]))) < (arr_1 [i_0]))))));
                    arr_9 [i_2] [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */signed char) max((-1671569404), (((/* implicit */int) (signed char)-69))));
    var_16 = ((/* implicit */short) ((((var_2) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (1671569404) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6948)) || (((/* implicit */_Bool) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 8; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6938)) < (-1671569404))))));
                    arr_18 [i_3] [i_4 - 1] [i_3] = ((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_5 - 1] [i_5 - 1]);
                }
            } 
        } 
    } 
}
