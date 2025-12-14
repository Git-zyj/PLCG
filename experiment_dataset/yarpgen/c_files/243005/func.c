/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243005
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
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-61)) || (((/* implicit */_Bool) 11563204883146481034ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) arr_2 [i_0 - 3])))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))))) : (((unsigned long long int) min((((/* implicit */long long int) (unsigned char)250)), (7662617036723456647LL)))))))));
        var_11 += ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 3])) >> (((((max((2066899439489958441ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))) - (2066899439416557693ULL)))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((unsigned int) ((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) : (arr_0 [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) << (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) min((((/* implicit */signed char) ((2147483641) > (((/* implicit */int) arr_3 [i_0] [3ULL]))))), ((signed char)-11))))));
    }
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 -= var_9;
    var_15 |= ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) ((-5644776940632921203LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50261))))))));
}
