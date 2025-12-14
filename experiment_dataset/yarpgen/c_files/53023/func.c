/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53023
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) 1930424957));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_1))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [(short)4] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!((_Bool)1)))))), ((-(((1944399548) - (((/* implicit */int) var_2))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((1944399556) < (((/* implicit */int) arr_1 [i_2] [i_2])))))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (arr_0 [i_0]))))));
                        var_16 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) 1544558564)));
                    }
                }
            } 
        } 
    } 
}
