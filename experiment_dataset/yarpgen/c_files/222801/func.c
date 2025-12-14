/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222801
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_4))));
        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -7614654838282456831LL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (max((18446744073709551610ULL), (1054010605555140037ULL))) : (((((/* implicit */_Bool) var_8)) ? (var_12) : (var_9))))) - (((unsigned long long int) (unsigned char)25))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) (!(((((9757320449886990622ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((9757320449886990622ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 17LL))))), (((((/* implicit */_Bool) 1054010605555140037ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) : (-5102114209896609961LL)))));
        var_21 = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_1]))))));
    }
    var_22 = 5827804882578083510ULL;
}
