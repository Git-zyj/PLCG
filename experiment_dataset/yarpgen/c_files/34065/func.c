/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34065
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */unsigned long long int) arr_2 [i_0])) % (12811103284619060117ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_1 [i_2] [i_2])) == (8U))) ? (((((/* implicit */int) var_10)) >> (((arr_1 [i_0] [i_0]) + (142389822))))) : ((-(((/* implicit */int) arr_6 [(unsigned short)1] [i_2])))))))));
                    arr_7 [i_0] [14] [i_2] = ((/* implicit */short) min((((arr_3 [i_0] [i_0]) ? (max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_1]))))))), (((/* implicit */unsigned long long int) (unsigned char)114))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-5263)))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((((/* implicit */_Bool) (short)-5281)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) arr_11 [i_1]);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)238)), (var_12)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_16 ^= ((/* implicit */unsigned char) (-(var_12)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 -= ((/* implicit */unsigned char) var_11);
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_6))))));
                        arr_17 [i_0] [i_0] = ((_Bool) (~(((/* implicit */int) var_1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) arr_3 [i_1] [i_2]);
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)64494)));
                        var_20 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_5] [i_5]);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((int) var_5));
}
