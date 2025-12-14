/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237647
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
    var_14 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (5345019300464622010ULL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) var_11)) <= (var_13))) || (((/* implicit */_Bool) max((var_5), (var_8))))))) ^ ((((-(((/* implicit */int) var_9)))) / (max((((/* implicit */int) var_6)), (var_1)))))));
                    }
                    arr_13 [i_2] [0] [i_2] [(signed char)3] |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) min((((/* implicit */short) var_9)), (var_11))))))), (((((/* implicit */unsigned int) var_13)) & (min((var_12), (((/* implicit */unsigned int) var_7))))))));
                }
            } 
        } 
    } 
}
