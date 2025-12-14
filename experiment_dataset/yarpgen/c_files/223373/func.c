/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223373
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
    var_15 = ((/* implicit */signed char) ((((unsigned int) var_9)) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 8176008480159526769ULL))))));
    var_16 = ((/* implicit */long long int) (signed char)0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_17 -= ((/* implicit */signed char) arr_4 [i_0] [i_3] [i_2] [2ULL]);
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) arr_1 [(short)11])) < (((/* implicit */int) ((short) arr_3 [i_0])))))), ((signed char)7)));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [2ULL] [i_3] = ((/* implicit */unsigned short) arr_7 [i_3] [i_1] [i_0]);
                    }
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 17848590225872025983ULL);
                    arr_11 [i_0] [i_0] = ((/* implicit */int) var_14);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_3))) | (((/* implicit */int) min((max((((/* implicit */signed char) var_11)), ((signed char)-1))), ((signed char)1))))));
}
