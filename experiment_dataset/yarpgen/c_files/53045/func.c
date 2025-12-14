/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53045
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_5 [i_0] [i_1])))) >= (((/* implicit */int) arr_4 [i_0 + 1] [i_0]))));
                var_21 += ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_3))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_19))))))))));
    var_23 *= ((/* implicit */short) var_10);
    var_24 = ((/* implicit */short) min((((long long int) (signed char)34)), (((/* implicit */long long int) var_19))));
    /* LoopSeq 1 */
    for (long long int i_2 = 4; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-16727)) || (((/* implicit */_Bool) (short)2048)))) && (((/* implicit */_Bool) (signed char)107))))) / (((/* implicit */int) arr_7 [(signed char)0] [i_2]))));
        arr_9 [i_2 - 3] = ((/* implicit */_Bool) (short)-10414);
    }
}
