/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199801
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
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) var_4)) : (var_10)))))), ((!(((/* implicit */_Bool) (unsigned char)0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6U])) ? (var_10) : (((/* implicit */long long int) arr_0 [6U]))))) ? (((/* implicit */int) min(((unsigned char)0), ((unsigned char)255)))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1] [12ULL])))))) ? (((/* implicit */int) var_2)) : (((arr_4 [i_0 + 2] [i_1 - 3]) + (((((/* implicit */_Bool) arr_1 [i_0] [6])) ? (arr_4 [i_0 - 3] [i_1]) : (((/* implicit */int) (unsigned char)255)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) min((arr_5 [i_0] [i_1] [2U]), ((unsigned char)98)))) | ((~(((/* implicit */int) (short)-29502))))))) ^ (((min((((/* implicit */long long int) arr_0 [i_0])), (-5980084264508304556LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                var_16 = ((/* implicit */int) ((((/* implicit */long long int) (-(arr_4 [i_0 - 2] [(signed char)8])))) < (((max((var_10), (((/* implicit */long long int) arr_4 [i_0 - 3] [i_1 + 3])))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1)))) - (117)))))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])), (((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [(unsigned short)3])), (arr_2 [(signed char)7] [i_1 + 3]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1])), (arr_3 [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_0);
}
