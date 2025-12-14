/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34672
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (var_11)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (((6799678309864556856LL) | (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
    var_16 = ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_5)) % (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)32762)))))))))));
        var_17 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) != (max((((((/* implicit */unsigned long long int) arr_4 [i_1])) + (9609681549749263918ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) min(((signed char)-120), (((/* implicit */signed char) var_10))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((arr_0 [6U]) - (arr_0 [(unsigned short)22])));
    }
    var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)255)))))));
}
