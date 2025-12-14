/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28218
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
    var_10 = var_5;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) > (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_2 [(unsigned char)9] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) var_6)), (var_7)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!(arr_13 [i_2] [i_1] [i_4])))))) - (1)))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-112))))))))))));
                arr_17 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1))));
                var_14 *= ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_3);
}
