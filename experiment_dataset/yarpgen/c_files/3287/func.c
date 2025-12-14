/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3287
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [(unsigned short)8] = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) min(((unsigned char)72), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) var_13)) < (var_10))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned short)7])) != (((/* implicit */int) arr_2 [(signed char)11]))))), (max((((/* implicit */long long int) 875834394)), (min((((/* implicit */long long int) (signed char)-1)), (2411505811509824192LL)))))))));
    }
    var_17 = ((/* implicit */short) var_15);
    var_18 = ((/* implicit */long long int) var_0);
}
