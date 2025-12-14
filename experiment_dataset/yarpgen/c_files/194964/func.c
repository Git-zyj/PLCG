/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194964
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
    var_16 = ((/* implicit */unsigned short) (unsigned char)195);
    var_17 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */int) ((long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_8)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_8 [i_0] [i_1 - 3] [i_2] [i_3]))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) ((signed char) arr_10 [i_1 - 3] [i_1 + 1] [i_1 - 3]))))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_7))));
                            arr_12 [(unsigned short)0] [i_1] [i_1 - 3] [11LL] [i_1] [6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) 1966080)))), (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((((/* implicit */int) var_4)) * (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_12))))));
}
