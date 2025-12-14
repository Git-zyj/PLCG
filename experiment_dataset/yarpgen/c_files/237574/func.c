/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237574
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)2)) : (-422255351))), (((/* implicit */int) ((((/* implicit */int) var_4)) < (422255350))))))) ? (max((((/* implicit */long long int) ((short) var_18))), (((var_16) + (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    var_22 = ((/* implicit */long long int) max(((-(arr_1 [i_0] [(unsigned char)12]))), (((/* implicit */int) var_15))));
                    var_23 = ((/* implicit */unsigned long long int) ((((long long int) arr_7 [i_0] [i_1] [i_2 + 1])) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7)))));
                    var_24 = ((/* implicit */_Bool) var_2);
                    arr_9 [i_2 - 1] [(unsigned char)22] [i_0] [i_0] = ((/* implicit */long long int) (~(max(((~(((/* implicit */int) (unsigned short)37848)))), (((int) arr_8 [4LL] [4LL]))))));
                }
                var_25 = (~(var_2));
                var_26 = (+(min((arr_7 [i_1] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_1]))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (unsigned char)246))));
            }
        } 
    } 
}
