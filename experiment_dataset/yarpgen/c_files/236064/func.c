/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236064
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
    var_14 = (-(((/* implicit */int) (unsigned char)235)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) max((2147483647), ((~(((/* implicit */int) (unsigned short)47380))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) ((arr_5 [i_2 + 1] [i_1 - 1]) != (((unsigned int) arr_1 [i_0] [i_0]))));
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) << (((/* implicit */int) (_Bool)0))));
                }
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) arr_11 [i_0] [i_0] [i_3] [i_1 - 1]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (((unsigned int) (unsigned char)0))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (arr_5 [i_0] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */int) var_2)), (arr_11 [i_0 - 2] [i_1] [i_1] [i_3]))))))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 2]))))));
                    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) 9653828833579442416ULL)) ? ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_1] [(signed char)19]))));
                    arr_16 [i_1] [i_1] [(unsigned short)23] = ((/* implicit */unsigned int) arr_1 [i_1] [i_0 + 3]);
                }
            }
        } 
    } 
}
