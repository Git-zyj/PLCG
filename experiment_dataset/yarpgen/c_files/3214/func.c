/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3214
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
    var_18 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), ((short)32767)))) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2])) : ((-(var_4)))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24071))) - ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [(unsigned short)16] [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))), (arr_3 [i_2] [i_1 + 1] [i_0])))));
                    var_20 = ((/* implicit */int) min((arr_7 [i_1 + 1] [i_1 + 1] [i_1]), (((/* implicit */short) arr_0 [i_1 - 2]))));
                    var_21 = ((/* implicit */long long int) (~(max((939524096), ((+(((/* implicit */int) arr_1 [(short)12] [i_1]))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) (~(((arr_3 [i_4] [i_4 - 1] [i_4 - 1]) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32809)))))));
                        var_23 = ((/* implicit */int) max((var_23), ((+(((arr_12 [i_4 - 1] [i_4] [i_4 + 1] [i_4]) ? ((~(((/* implicit */int) arr_5 [i_3] [i_4 - 2] [i_5])))) : (((((((/* implicit */int) (signed char)-116)) + (2147483647))) << (((((/* implicit */int) (unsigned short)47831)) - (47831)))))))))));
                    }
                } 
            } 
        } 
    }
}
