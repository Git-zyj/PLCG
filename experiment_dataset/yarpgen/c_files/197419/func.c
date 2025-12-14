/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197419
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) -970176289)))), (max((((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) var_15))))), (max((14302901545632748537ULL), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) arr_0 [(unsigned char)15]))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) min(((~(arr_6 [i_0] [13U] [i_2]))), (min((arr_6 [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((int) var_8)))))))));
                                arr_15 [15LL] [15LL] [15LL] [i_2] = ((/* implicit */short) (-((-((~(var_6)))))));
                                arr_16 [i_4] [i_4] [i_2] = ((/* implicit */int) (~(min((max((((/* implicit */long long int) var_15)), (arr_7 [i_0 - 1] [i_1]))), (((/* implicit */long long int) ((_Bool) arr_12 [0])))))));
                                arr_17 [(short)4] [i_0] [i_1] [i_2] [i_2] [(unsigned short)12] = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))), (((/* implicit */unsigned long long int) min((arr_7 [i_1] [(unsigned char)6]), (-28LL)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (-1LL)))), (((unsigned long long int) arr_14 [i_4] [i_2] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) (+(((int) ((signed char) var_5)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (min((((/* implicit */unsigned long long int) min((((short) arr_4 [i_0 - 2])), (((short) var_9))))), (min((max((((/* implicit */unsigned long long int) var_9)), (var_6))), (((/* implicit */unsigned long long int) ((short) arr_7 [i_0] [i_0])))))))));
    }
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_11))))))));
}
