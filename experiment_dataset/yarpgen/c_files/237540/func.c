/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237540
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [8ULL] [8ULL] [8ULL] |= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_6 [i_1 - 4] [i_0] [i_0] [1LL]))))));
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) min((((arr_0 [(unsigned char)12]) / (4294967295U))), (((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 1]))))) : (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [6ULL] [i_1]))))) : (max((var_8), (511ULL))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((arr_13 [i_4]) * (((/* implicit */int) (!((_Bool)1)))))))));
                                arr_17 [i_0] [i_3] [4U] [4U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_1 + 1] [i_3]))))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 4] [i_3])))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_1 + 1] [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 4] [i_3])) : (((/* implicit */int) arr_12 [i_2] [i_0] [i_1 - 1] [i_3]))))));
                                var_12 = ((/* implicit */_Bool) ((unsigned long long int) 1116522145U));
                                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */long long int) var_1)), (18014398509481983LL)))))) ? (((/* implicit */int) arr_12 [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) 1694315873))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (min((var_7), (((/* implicit */unsigned long long int) var_0)))))))));
    var_15 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (-1694315887)))), (var_5))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) var_9)), (var_1))))))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) << (((var_8) - (6632006672372886774ULL))))))));
}
