/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214064
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 ^= (-(((long long int) max((65536U), (((/* implicit */unsigned int) var_8))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 2147483645))));
        var_22 = ((/* implicit */unsigned short) (-(var_5)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */long long int) var_1)) & (-2940921075909099656LL))))));
        arr_7 [4] = ((/* implicit */int) (+(arr_4 [i_1])));
        var_23 ^= ((/* implicit */signed char) 10254766128242170545ULL);
        var_24 ^= ((/* implicit */signed char) var_3);
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) && (((var_19) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
    var_26 = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (3092912442082497376LL)));
    var_27 = min((((((((/* implicit */_Bool) var_15)) ? (var_10) : (var_1))) >> (((var_14) - (7650624211231990057ULL))))), (-1190999878));
}
