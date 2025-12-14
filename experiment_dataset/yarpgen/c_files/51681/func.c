/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51681
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
    var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((unsigned long long int) var_12)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(5485667765035003981LL)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (short)0)) | (var_5))))))));
    var_21 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_19)), (var_1)))), (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) (unsigned char)124))), (var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((arr_4 [(unsigned char)9] [(unsigned char)5] [i_2] [(short)2]) == (((/* implicit */int) (unsigned char)29))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [10ULL] [(signed char)9] [i_1] [(short)1] = ((/* implicit */long long int) (_Bool)1);
                                arr_14 [9] [6ULL] [0] [(unsigned short)11] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3172))))), (((unsigned int) arr_10 [(_Bool)1] [(unsigned char)3] [(unsigned char)10] [(_Bool)1] [(short)6] [(short)11] [(short)10]))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_5 [10ULL]))))) * (((/* implicit */int) (short)31)))) >> (((13758595773542636895ULL) - (13758595773542636869ULL)))));
                var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((min((arr_9 [10U] [(short)10] [(_Bool)1] [i_1] [(unsigned short)6] [i_1]), (((/* implicit */unsigned int) var_12)))) << (((max((var_1), (((/* implicit */long long int) var_15)))) - (9097338126098593005LL))))))));
            }
        } 
    } 
}
