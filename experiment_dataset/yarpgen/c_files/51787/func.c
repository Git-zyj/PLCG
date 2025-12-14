/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51787
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_16 += ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned int) var_13)), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5)))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) (~(var_3)));
        }
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            arr_9 [(short)15] [i_2] = ((/* implicit */unsigned short) (-(max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_8)))))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_17 &= ((/* implicit */short) min((11045694665454247719ULL), (11045694665454247719ULL)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_18 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) var_10)))))))));
            arr_19 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
        }
    }
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_8)))), ((+(((/* implicit */int) var_14)))))))));
    var_20 = ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_8))))))), (max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
}
