/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204789
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 -= ((/* implicit */int) ((((((1711571066U) % (1711571038U))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [10LL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((unsigned int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [7ULL] = ((/* implicit */long long int) (short)(-32767 - 1));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_8)))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1533414322U)))))))) : (arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) var_9))))))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_1 - 2] [i_2]) / (arr_6 [i_2] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1] [i_1 - 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (arr_6 [i_1] [i_2])))));
            var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_8 [i_1 - 1] [i_1 + 1]))), ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_2] [i_2])))))));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1711571066U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : ((~(var_10))))) ^ (((arr_7 [i_1 - 1] [i_1 + 1]) - (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1]) <= (((/* implicit */unsigned long long int) var_2))))))))));
            arr_10 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? ((+(arr_7 [i_1 + 1] [i_1]))) : (((((/* implicit */long long int) 1711571090U)) + (arr_7 [i_1] [21])))))) ? (((/* implicit */long long int) ((int) max((((/* implicit */long long int) arr_8 [i_1] [i_2])), (5749205324564832596LL))))) : ((~(((arr_7 [i_1 + 1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_0))));
        }
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6924241209250236537LL)) ? ((+(((/* implicit */int) arr_8 [i_1] [i_1 + 1])))) : ((+((-(((/* implicit */int) var_1))))))));
    }
    var_18 = ((((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) | (((/* implicit */long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_1)))) - (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3])) / (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) 134217727ULL)) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((arr_7 [i_3] [21U]) + (9223372036854775807LL))) << (((2583396230U) - (2583396230U)))))))))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) >= (arr_5 [i_3]))))))));
    }
}
