/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243655
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), ((unsigned short)0)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_7))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) >= ((+((-2147483647 - 1))))));
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) 2147483637));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_2)))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_16 = arr_0 [i_1];
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) ^ ((((+((-2147483647 - 1)))) % (max((-2147483641), (((/* implicit */int) (unsigned char)129))))))));
    }
    for (short i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_9 [i_2 + 2] [i_2]))));
        var_18 *= ((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_2])), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) var_7)))))))));
    }
    for (short i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) var_0);
        arr_16 [9U] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)120)) == (min((((/* implicit */int) ((arr_9 [i_3] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 2])))))), (((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned char)136))))))));
    }
}
