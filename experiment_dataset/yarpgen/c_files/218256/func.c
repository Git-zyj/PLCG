/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218256
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = (short)-14445;
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_17))))))), (arr_4 [i_1]));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_7 [i_1] [i_2] [i_3 + 1]))))) << ((((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_2 + 1] [i_3])))) + (122))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_5] [i_3] = ((/* implicit */unsigned char) arr_9 [i_1] [i_2]);
                            arr_19 [i_1] [i_3] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) arr_12 [i_5] [i_3] [i_3] [i_1]);
                            var_19 *= ((/* implicit */unsigned long long int) var_6);
                        }
                        arr_20 [i_4] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-14445)) == (((/* implicit */int) (short)14448))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((~(var_4)))))));
}
