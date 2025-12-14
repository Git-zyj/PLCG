/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241779
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
    var_11 = ((/* implicit */_Bool) var_5);
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_7)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = var_7;
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_9));
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (min((min((18014397972611072LL), (-18014397972611082LL))), (-1LL)))));
        arr_6 [6LL] = ((/* implicit */signed char) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (unsigned char)59)) ? (-8092266277007256536LL) : (((/* implicit */long long int) 0))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) min((((/* implicit */short) (signed char)0)), (arr_0 [i_1]))))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) : (((((/* implicit */int) arr_0 [i_1])) * ((-(((/* implicit */int) var_10))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) var_10);
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) var_8);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_12 [i_2])))), ((-((+(((/* implicit */int) var_8)))))))))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), ((~((~(-1056186371)))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned char) var_8))))))))));
}
