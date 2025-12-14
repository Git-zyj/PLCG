/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53160
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((min(((short)-7522), (((/* implicit */short) (unsigned char)127)))), (((/* implicit */short) var_11)))))));
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_16)))) & ((((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_1 - 4] [i_1 - 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 2])) ? (((/* implicit */unsigned int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1])) : (var_3)))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (var_1)))));
                    var_21 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 1])))))));
                }
                var_22 = ((/* implicit */int) min((var_22), (min((((arr_6 [(_Bool)1] [(_Bool)1] [i_1]) ? (arr_3 [i_1 - 1] [i_1 - 3]) : (((/* implicit */int) (!(arr_6 [i_0] [(signed char)11] [i_0])))))), (arr_3 [i_1] [i_1])))));
                var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_6 [11] [(unsigned short)4] [i_0])) >= (-655896291))) ? (var_3) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 4] [i_1 - 4] [i_1 + 2])))) & (((/* implicit */unsigned int) arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1]))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)89)), (min(((unsigned char)3), (((/* implicit */unsigned char) (signed char)55))))));
            }
        } 
    } 
}
