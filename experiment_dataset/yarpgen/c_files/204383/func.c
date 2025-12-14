/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204383
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
    var_18 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_3)), (var_1)))), (max((min((var_17), (((/* implicit */unsigned int) (short)-8192)))), (((var_0) << (((var_5) + (1374958431)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])));
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((_Bool) (!(var_15))))), (min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1))))));
                }
            } 
        } 
        arr_9 [i_0] |= ((/* implicit */short) min((((unsigned int) ((unsigned long long int) arr_6 [i_0] [12U] [i_0]))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0]))));
        arr_10 [i_0] |= ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) && (arr_5 [(unsigned char)0] [i_0] [i_0])))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
    }
    var_21 -= ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) var_2);
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_4 + 1] [i_4 - 1])), (((((/* implicit */_Bool) 17501863422141549139ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-8192))))))), (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((arr_14 [(_Bool)1] [i_4]) << (((arr_14 [(_Bool)1] [i_4 - 1]) - (11934879424062478830ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1] [i_3])))))));
            }
        } 
    } 
}
