/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212531
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)41)))), (((/* implicit */int) (!((_Bool)1))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (min((((/* implicit */unsigned long long int) (unsigned char)177)), (var_11)))))));
        var_12 = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)11251)));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)112)), (1099511627520LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) > (arr_2 [i_0]))))) : (arr_1 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)41)), (13198237910937925075ULL)));
    }
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) max((((unsigned char) var_10)), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (4633787124051922516LL)))))))));
    var_15 ^= ((/* implicit */_Bool) var_3);
}
