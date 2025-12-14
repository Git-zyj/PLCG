/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226959
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_2) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)61208)))))))));
    var_11 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((((/* implicit */int) var_0)) == (1459814550))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)4328))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) var_7);
        arr_5 [i_0] = ((((arr_2 [i_0]) == (((/* implicit */unsigned long long int) 4294967270U)))) ? (((((/* implicit */unsigned long long int) 4223804164U)) % (arr_2 [i_0]))) : (((((/* implicit */_Bool) 2644235133U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) | ((~(var_6)))));
    }
    var_13 = ((/* implicit */unsigned long long int) (-((+(var_9)))));
}
