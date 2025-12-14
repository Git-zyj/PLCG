/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213384
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) (unsigned char)121)))));
    var_18 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) arr_2 [i_0]);
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) (unsigned char)171)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-30)), ((short)32745))))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0]))) : (((/* implicit */int) ((signed char) 1380282429)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) ((unsigned short) (signed char)-20))) : (((/* implicit */int) ((unsigned char) 17)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-22))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((signed char) var_14)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)15555)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-106)), ((unsigned char)83))))));
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned short) var_13));
    var_24 = ((/* implicit */int) (_Bool)1);
}
