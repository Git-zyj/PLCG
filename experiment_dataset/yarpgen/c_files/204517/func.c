/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204517
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                    var_15 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_6 [i_2] [i_2] [7ULL]) : (((/* implicit */int) var_2))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((((((/* implicit */_Bool) var_12)) ? (var_5) : (9015392455285847705LL))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) > (34359738366LL)))));
                        arr_11 [(unsigned char)7] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((8228029721506360160ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) ? (max((1299289362727445965ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8228029721506360160ULL)) ? (((/* implicit */int) (unsigned short)17250)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (12U)));
}
