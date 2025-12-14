/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19039
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
    var_17 = ((/* implicit */int) max((var_17), ((+(1562965613)))));
    var_18 = ((/* implicit */signed char) var_13);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((min((((/* implicit */int) ((((/* implicit */long long int) var_7)) >= (var_15)))), ((~(((/* implicit */int) arr_3 [i_0])))))), (arr_1 [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)11280)), (arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((+(((/* implicit */int) (short)-32760))))));
            var_21 = ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))))))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)5)), (((((/* implicit */_Bool) var_14)) ? (9214364837600034816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))))))));
            }
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_7))));
    }
}
