/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227955
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_12 = var_1;
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))))) + ((-(15199815039257882362ULL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [7LL] [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1])))), ((-(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (arr_4 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])))))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((3246929034451669256ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [8ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [18LL]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [2ULL]))) + (var_0))) - (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) arr_8 [i_2])))))))));
        var_14 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1]))) : (var_7)))), (((unsigned long long int) var_6))));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((2185638745377559688ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28176))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_14 [i_3] [i_3] [16ULL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) || (min((var_11), (arr_7 [i_2]))))), (max((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-28177)))), (((var_3) >= (((/* implicit */unsigned int) -831730566))))))));
            var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)28161)) ? (13237330454346653557ULL) : (15199815039257882360ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_12 [i_2] [i_2 + 1])))));
        }
    }
    var_16 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) var_1)));
}
