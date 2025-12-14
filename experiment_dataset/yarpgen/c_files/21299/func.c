/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21299
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
    var_20 += ((/* implicit */_Bool) (~(var_2)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)106)), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_10))))) % (min((arr_2 [i_0]), (((/* implicit */unsigned int) var_1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_4 [18LL] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */short) (signed char)31)), (arr_0 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
        arr_5 [i_0 + 1] = ((/* implicit */signed char) ((short) (-(arr_2 [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */int) (+(arr_1 [i_1 - 1])));
        var_22 = var_8;
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1 - 1])) >> (((-8968630191857771776LL) + (8968630191857771786LL)))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_6))));
                arr_18 [6LL] [i_2] [i_3] [i_3] = ((/* implicit */short) ((arr_6 [i_1 - 1]) - (arr_6 [i_1 - 1])));
                var_25 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
            }
            for (short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_11)));
                var_27 = ((/* implicit */short) var_8);
                arr_22 [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((int) var_18))) : (arr_1 [i_1])));
            }
            for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (_Bool)1);
                    arr_28 [i_6] [i_1 - 1] [i_2 - 1] [i_1 - 1] = ((/* implicit */int) var_6);
                }
                var_29 += ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */signed char) var_11);
            }
        }
    }
    var_31 = ((/* implicit */int) ((-6867924714385455263LL) / (((/* implicit */long long int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 2398549867521408035ULL))))))))));
}
