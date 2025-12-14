/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242463
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3867537552016338265LL)))))) * ((~(10354031834218138420ULL)))));
    var_21 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) max((arr_0 [i_0] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) arr_12 [i_0] [i_2 - 1] [i_2 - 1] [i_0])))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_15))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */_Bool) 6779248260795060673LL)) && (((/* implicit */_Bool) (unsigned char)169)))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? ((~(var_6))) : (((/* implicit */unsigned int) arr_0 [i_2 - 1] [i_1])))))));
                            arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_15 [i_0] [i_1] [i_2 - 1] [i_3])));
                            var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) || (((/* implicit */_Bool) var_7))));
                        }
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6] [i_3] = ((/* implicit */unsigned char) 8092712239491413196ULL);
                            var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                        }
                        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            arr_28 [i_0] [i_1] [i_2] = ((unsigned short) arr_17 [i_0] [i_1] [i_2 - 1] [i_3] [i_7 - 3]);
                            arr_29 [i_0] [i_0] [i_2 - 1] [i_3] [i_7] = ((/* implicit */signed char) var_19);
                            var_28 = ((/* implicit */int) ((long long int) (+(0LL))));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) ((_Bool) 63ULL));
                }
            } 
        } 
    } 
}
