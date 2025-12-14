/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20064
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
    var_12 = (~((~((~(((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 1])))))));
                                var_14 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_1] [i_0]);
                                arr_13 [i_2] [i_3] = ((/* implicit */unsigned short) (-((+(min((((/* implicit */long long int) var_10)), (var_2)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((short) arr_6 [i_0]))))));
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [6U] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [(unsigned char)0] [i_2] [i_1] [8ULL] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_1] [i_1]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) (~(arr_9 [i_0])));
    }
}
