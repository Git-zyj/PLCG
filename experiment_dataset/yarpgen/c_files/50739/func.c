/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50739
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (((unsigned int) (!(arr_0 [3U] [i_1]))))));
                var_12 = ((/* implicit */unsigned long long int) (unsigned char)98);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) -4616748291895771436LL))) ? (3322624037U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3] [12U]))))))));
                        var_14 = ((/* implicit */long long int) ((((3322624044U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_0] = 4294967295U;
                    arr_12 [i_1] [i_1] = arr_1 [i_0] [(short)5];
                }
                var_15 += ((/* implicit */unsigned int) arr_10 [i_1] [i_1 + 3] [10ULL] [i_1] [i_1 + 4]);
                var_16 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3949350215792490139ULL)) ? (((/* implicit */int) arr_2 [(unsigned char)10] [i_1 + 1] [(unsigned char)10])) : (((/* implicit */int) arr_2 [(signed char)14] [i_1 - 1] [(signed char)14])))) >> (min((((3322624044U) | (4294967289U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [4])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((-(var_0))), (((/* implicit */unsigned int) var_9))))), (14497393857917061459ULL)));
}
