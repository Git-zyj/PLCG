/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53908
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = 15069160203713791300ULL;
        var_10 |= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_11 = ((/* implicit */unsigned short) var_5);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 7428839383429047533LL)), (3377583869995760316ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) : (15069160203713791297ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (var_3)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            arr_8 [i_2] = ((unsigned long long int) arr_5 [i_2 + 2]);
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)42))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (3377583869995760316ULL) : (((/* implicit */unsigned long long int) (((-(arr_3 [i_3]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11524)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (arr_4 [i_1] [i_1])))))))));
            var_14 ^= ((/* implicit */long long int) arr_6 [(unsigned short)0]);
        }
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 0U))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (2988054664975674452ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)228)), (248966596U)))))))) < (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_6)), (4229734774590207184ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_17 = ((/* implicit */unsigned long long int) var_3);
}
