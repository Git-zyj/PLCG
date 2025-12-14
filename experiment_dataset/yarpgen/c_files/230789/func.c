/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230789
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
    var_15 = (unsigned char)226;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) 17361191199347004684ULL);
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (((unsigned long long int) arr_1 [i_1])) : ((~(arr_1 [i_1]))))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((6580466914953133742ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))))))), (min((((/* implicit */unsigned long long int) (unsigned char)129)), (arr_1 [i_1])))));
        var_18 = ((/* implicit */unsigned int) var_14);
    }
    for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        arr_8 [i_2] = max((((unsigned long long int) 1085552874362546935ULL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)182)))))))));
        arr_9 [i_2] = (~(var_3));
        var_19 ^= min((((/* implicit */unsigned long long int) ((3745015681U) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))), (((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_2]))) - (max((((/* implicit */unsigned long long int) arr_6 [i_2 + 1])), (144115188075855871ULL))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2]))))), ((unsigned char)155)))))))));
    }
}
