/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243303
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max(((+(min((((/* implicit */int) var_1)), (var_5))))), ((((-(((/* implicit */int) var_17)))) | ((-(((/* implicit */int) var_1)))))))))));
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_21 -= ((/* implicit */unsigned short) min((max((arr_0 [i_0 - 1]), (arr_1 [i_0] [8]))), (((/* implicit */unsigned int) ((int) arr_1 [i_0 - 1] [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 *= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_4 [i_0] [14] [i_1])))))) : (((((/* implicit */_Bool) -4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35507))) : (2111679732U)))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_23 = ((/* implicit */long long int) (-(min((2589839788534283847ULL), (min((((/* implicit */unsigned long long int) -800384636)), (arr_3 [14] [(signed char)15])))))));
                var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_1]) ? (((/* implicit */int) max(((signed char)90), (((/* implicit */signed char) arr_2 [i_2] [i_2]))))) : ((+(((/* implicit */int) arr_6 [i_0] [8ULL]))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)4]))) - (-7084172149146240808LL)))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [(signed char)5]))) : (12793427184801404370ULL)))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_14))));
            }
            var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 3])))));
        }
        var_27 = ((/* implicit */unsigned char) (-(arr_4 [i_0] [i_0] [12ULL])));
        arr_10 [i_0] = min((551421881), (((/* implicit */int) (signed char)90)));
    }
    var_28 = ((/* implicit */_Bool) var_5);
}
