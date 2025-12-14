/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220487
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 17467404071308374148ULL))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) max((((((/* implicit */_Bool) 1465918473U)) || (((/* implicit */_Bool) 2047LL)))), (((((/* implicit */unsigned int) -1181424915)) != (3400093321U)))))) + ((-2147483647 - 1))));
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) != (1264633382))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) - (((/* implicit */int) arr_2 [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            var_16 = ((/* implicit */int) ((long long int) arr_6 [i_1]));
            var_17 = ((4053312044U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((((/* implicit */int) var_10)) | (((/* implicit */int) var_5))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) arr_6 [(unsigned short)11]);
        var_20 = ((((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [9U]))) : (682688914U))) >> (((((/* implicit */int) var_1)) - (122))))) ^ (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)47211))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+((-(min((((/* implicit */unsigned long long int) arr_9 [8U] [i_3])), (13975235440952242958ULL))))))))));
    }
}
