/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224473
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)3))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [3LL] = (((+(arr_0 [(unsigned short)10] [i_0 - 1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)52318)) >= (((/* implicit */int) (short)-27668)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)48996)) << (((((/* implicit */int) (short)16368)) - (16356))))))));
        var_19 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)27)))), (((((/* implicit */int) (short)27678)) << (((((/* implicit */int) (unsigned char)24)) - (11)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = (-(max((((/* implicit */unsigned long long int) var_12)), (var_3))));
        arr_6 [i_1] = ((/* implicit */long long int) max((min(((unsigned short)49013), (((/* implicit */unsigned short) arr_3 [i_1 - 1])))), (((/* implicit */unsigned short) min((min((var_2), (var_2))), (((/* implicit */short) min(((unsigned char)108), (arr_1 [i_1] [i_1])))))))));
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_5)))) && (((/* implicit */_Bool) ((3550578419U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2]))))))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] &= ((/* implicit */unsigned long long int) (((-(2147483647))) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2])), (var_12))))));
        var_21 -= ((/* implicit */signed char) (~(((((/* implicit */int) ((((/* implicit */int) (signed char)-6)) > (((/* implicit */int) (short)16381))))) >> (((/* implicit */int) ((18U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -2147483641)) || (((/* implicit */_Bool) var_6))))) | ((+(((/* implicit */int) arr_8 [i_2]))))));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (-980303073)));
}
