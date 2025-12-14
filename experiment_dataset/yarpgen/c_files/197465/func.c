/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197465
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 18446744073709551605ULL))))), (arr_3 [i_0])))) ? (((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) || ((_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_2 [i_1])))) || (((/* implicit */_Bool) ((unsigned short) var_5)))))))));
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-104))))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))))))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_6)))))))));
        }
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [3ULL])) : (var_8))), (((/* implicit */unsigned long long int) arr_1 [8ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3197112097U)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_3))))))));
    }
    var_16 = var_10;
}
