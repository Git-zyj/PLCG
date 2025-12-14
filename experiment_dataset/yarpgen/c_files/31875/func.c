/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31875
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
    var_11 = ((/* implicit */signed char) (!(((((/* implicit */int) var_9)) >= (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (min((8482099289382657050ULL), (((/* implicit */unsigned long long int) var_1))))))) || (((/* implicit */_Bool) (signed char)-29))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min(((((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) & (min((((/* implicit */long long int) var_9)), (1478106372212414055LL))))), ((~(((var_3) | (((/* implicit */long long int) 1214421265))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-45))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (7669303188809794818ULL)))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) - (10777440884899756797ULL))) + (((((/* implicit */_Bool) (-(10777440884899756780ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (10777440884899756765ULL))))))));
        arr_8 [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_1])))))));
    }
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))), (min((((((/* implicit */_Bool) (signed char)-25)) ? (7669303188809794818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (unsigned short)58224)))))))));
    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-25)) ? (10880202698815734368ULL) : (((/* implicit */unsigned long long int) 3289439320U))))));
}
