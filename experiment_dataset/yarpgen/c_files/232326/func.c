/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232326
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_8);
        arr_4 [i_0 + 2] [(short)16] = ((/* implicit */long long int) ((var_8) && ((((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((var_2) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)172))))) ? (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-3789942822410461135LL) / (((/* implicit */long long int) var_11))))) && (((((/* implicit */int) (unsigned char)182)) <= (((/* implicit */int) var_2)))))) ? (((((/* implicit */int) ((short) var_4))) % (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)0))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) ((min((((long long int) var_4)), (max((((/* implicit */long long int) var_5)), (9223372036854775802LL))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59808)))));
        arr_10 [i_1] [i_1] = ((/* implicit */short) (signed char)-1);
        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)182)) & (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10)))))));
        arr_12 [i_1] = ((/* implicit */short) var_5);
    }
    var_13 = ((/* implicit */long long int) var_10);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) != (var_6)));
    var_15 &= ((var_2) ? (((min(((_Bool)1), (var_8))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) min((var_8), (var_2)))))) : (((/* implicit */int) var_4)));
}
