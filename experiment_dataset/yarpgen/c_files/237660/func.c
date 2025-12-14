/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237660
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
    var_10 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) (unsigned char)192))) : ((-(((/* implicit */int) (short)-8492)))))));
    var_11 = (~(((/* implicit */int) (short)2044)));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_12 |= ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned int) ((_Bool) arr_0 [i_0]))), (var_9))));
        arr_2 [i_0 - 3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (_Bool)1)) : (168126802))))))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (max((7868563259519690687ULL), (((/* implicit */unsigned long long int) (short)20004))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) 2932211258103461847ULL));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_5 [i_1 + 1]);
        var_13 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 10578180814189860935ULL))) ? (((/* implicit */int) (short)-8471)) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (971477981) : (((/* implicit */int) arr_1 [i_2 - 1]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)14336)))))))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_2 + 1]);
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(unsigned char)11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2045))))) : (((/* implicit */int) max((arr_8 [i_2] [i_2]), (arr_8 [i_2 - 2] [i_2 - 2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned short) ((short) -1495385019)))));
        arr_12 [i_3] = ((/* implicit */unsigned int) arr_11 [i_3]);
    }
    var_18 = ((/* implicit */int) var_3);
}
