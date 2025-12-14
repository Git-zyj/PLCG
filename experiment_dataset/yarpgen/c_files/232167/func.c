/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232167
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((3932480195654113838LL) < (-2286235886802450066LL)))), (((((/* implicit */int) var_8)) + (((/* implicit */int) var_10)))))))));
    var_16 = max((((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned long long int) 240450084U))))), (var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_0 [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) ((long long int) ((int) arr_4 [2ULL] [i_2 + 1])));
                    var_19 = ((/* implicit */long long int) var_11);
                    var_20 = ((/* implicit */long long int) max(((+(4054517211U))), (((/* implicit */unsigned int) max((max(((-2147483647 - 1)), (2147483647))), (-2147483626))))));
                }
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_7 [(short)2] [10ULL])))) << (((/* implicit */int) ((arr_6 [i_1] [i_0] [i_0] [i_0]) >= (((/* implicit */int) arr_3 [i_1])))))))) : ((~(arr_5 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), ((-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8))))))))));
        var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) arr_10 [i_3] [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))))))));
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((arr_8 [1]), (((/* implicit */int) (_Bool)1))))) ? ((~(-6724933116086219007LL))) : (((/* implicit */long long int) max((1458075443), (((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */long long int) var_5);
    }
    var_25 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(var_14)))) : (((/* implicit */int) (_Bool)1)))));
}
