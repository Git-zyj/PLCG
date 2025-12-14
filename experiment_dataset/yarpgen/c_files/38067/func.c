/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38067
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
    var_14 = ((/* implicit */int) ((((_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1637847587U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_3 [i_1] [(unsigned short)3]);
                var_16 = ((/* implicit */unsigned short) arr_0 [i_0] [9U]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_13));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (arr_0 [i_1] [(unsigned char)13]) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((signed char) arr_7 [i_3] [i_3] [i_3] [(unsigned short)1]))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_3 [i_3] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
