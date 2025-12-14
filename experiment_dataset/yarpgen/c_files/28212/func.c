/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28212
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_14 |= ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_11))), (((((/* implicit */int) arr_2 [i_0 - 1])) | (var_11)))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)192)), (arr_2 [(short)0]))))));
        }
        var_15 *= ((/* implicit */int) min((((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_4 [(unsigned short)6] [i_0] [i_0 + 1])), (var_12))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13))))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [(_Bool)1] [i_0]))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_16 = ((/* implicit */_Bool) -499834896);
        var_17 = ((/* implicit */short) (_Bool)1);
        arr_12 [(unsigned short)0] = max(((~((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2]))))));
    }
    var_18 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */signed char) (_Bool)0);
    var_20 = min((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_13)));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + ((~(var_12)))));
}
