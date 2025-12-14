/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234649
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= arr_2 [i_0] [i_0];
        var_19 += ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned char)118)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)138)) - (138)))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [20ULL] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)112)) << (((((/* implicit */int) var_0)) - (20373)))));
        var_20 &= ((/* implicit */_Bool) 5459130436392030091ULL);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned short)17])) >= ((-(((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_4 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_0 [i_1]))));
    }
    var_22 = ((/* implicit */_Bool) (unsigned char)213);
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)137))));
        var_23 = ((/* implicit */unsigned short) (unsigned char)138);
        var_24 += ((/* implicit */short) arr_5 [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) (unsigned char)244))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3])))))) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) >= (((/* implicit */int) arr_15 [i_3]))))))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) min((arr_4 [i_3]), ((unsigned char)108))))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_12 [7U])) : (((/* implicit */int) arr_12 [i_3])))) % (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)52553))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)36)) << (((/* implicit */int) var_18))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (short)5534))))) >> (((max((((unsigned long long int) 18446744073709551615ULL)), (min((var_9), (((/* implicit */unsigned long long int) arr_15 [i_4])))))) - (18446744073709551590ULL)))));
        var_30 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_13 [i_4] [(unsigned short)14])))) >= (((/* implicit */int) var_8)))));
    }
}
