/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47659
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
    var_12 &= 2365398356191881548LL;
    var_13 = ((/* implicit */unsigned int) var_11);
    var_14 = ((/* implicit */unsigned short) 226433113U);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(1700193498U)))), (max((-2365398356191881549LL), (-6885502804449666017LL)))))) ? (var_5) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [i_0]))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_16 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_1]));
        arr_7 [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_4 [i_1]))));
    }
}
