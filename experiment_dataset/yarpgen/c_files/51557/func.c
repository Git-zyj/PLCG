/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51557
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
    var_15 = ((/* implicit */signed char) 2147483632);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */int) (short)1362)) ^ (-458955621))) : (((-458955615) + (((/* implicit */int) (signed char)-35))))));
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) << (((((/* implicit */int) var_4)) - (28)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned long long int) min((max((458955598), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14))))))), (((/* implicit */int) (signed char)-74))));
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_2 - 2] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) max((arr_1 [i_2 + 1] [i_2 - 2]), (((/* implicit */unsigned short) (short)-21943)))))));
        }
        var_17 &= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_0 [i_0] [4ULL])))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((signed char) arr_4 [i_0] [i_0] [i_0])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)11]))))))))));
    }
    var_18 = ((/* implicit */signed char) ((min((((/* implicit */int) var_0)), ((~(((/* implicit */int) (signed char)-74)))))) + (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) ((short) 458955621)))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (var_7))) : (min((((/* implicit */int) var_0)), (((458955608) - (((/* implicit */int) var_6)))))))))));
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-266))));
}
