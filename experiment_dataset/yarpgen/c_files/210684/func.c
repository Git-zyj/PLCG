/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210684
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) != (((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) | (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))), (((((unsigned int) arr_1 [i_0 + 1] [i_0])) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))) - (arr_0 [i_0] [i_0 + 1])))))));
        var_15 -= ((/* implicit */unsigned char) (+(1534805031U)));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_2 [i_1] [i_1]))));
        var_17 = ((/* implicit */signed char) max((((max((arr_2 [0] [i_1]), (((/* implicit */long long int) arr_3 [i_1])))) - (((/* implicit */long long int) arr_4 [i_1] [i_1])))), (((/* implicit */long long int) var_2))));
    }
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), ((short)-27611)));
}
