/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35878
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)157)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)155)) * (((/* implicit */int) (unsigned short)1024))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_11 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) (_Bool)1))));
                            arr_15 [(_Bool)1] [i_4 + 1] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [(_Bool)1]))) ? (arr_13 [(unsigned char)12] [i_4 - 2] [i_4] [0U] [i_4] [i_4]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [(signed char)5] [i_1] [i_1]))))) ? (arr_10 [i_0 - 2] [i_1] [i_0 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_8 [(unsigned char)11] [i_1] [i_0] [i_1]))))))));
            var_13 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1455465469U))));
        }
    }
    var_14 = ((/* implicit */long long int) max((var_14), ((~((~(((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
    var_15 = ((/* implicit */_Bool) var_4);
}
