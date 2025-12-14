/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227712
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)22176)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (46011))))), ((-(((/* implicit */int) (unsigned short)33194))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_10 += ((/* implicit */long long int) arr_4 [i_1]);
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_7))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) arr_5 [i_1] [i_1]))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((-1) < (((/* implicit */int) (unsigned short)32334)))))));
        var_12 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (-6891578006961383154LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33182))))), (((/* implicit */long long int) (+(-2079295037)))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)22))))));
        var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33202))) : (458752U)))));
    }
    var_14 *= ((/* implicit */unsigned int) (unsigned short)60893);
}
