/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229535
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) 16564382764142742058ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_10)) ? (11877354016865487647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) (unsigned char)61))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2853834122937369608ULL)) ? (371093898U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 1653703962)) * (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_2 + 1])) ? (min((((/* implicit */unsigned int) (_Bool)0)), (arr_3 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))))));
                var_17 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_7 [i_0 - 1] [i_0] [i_1]))) >> ((((~(var_11))) - (633132877U)))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_9 [i_0])) < (((/* implicit */int) (unsigned short)31881)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (509325841U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))), (2115423041U)));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0])))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned char) 1882361309566809561ULL);
    }
}
