/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32143
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_3))) >> ((((~(min((var_15), (((/* implicit */int) var_3)))))) - (14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (arr_1 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((unsigned int) 4160749568U))) : (((17592186044400ULL) >> (((((/* implicit */int) (unsigned char)189)) - (149))))))))));
                            arr_10 [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-10431)), (8388096)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min(((~(arr_0 [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_0] [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
}
