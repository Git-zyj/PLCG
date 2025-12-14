/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229250
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) ((_Bool) var_5)))), (((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) var_8))))) ? (-8328966923790734744LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) var_13))) ? (((long long int) 258107354)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) >> (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551603ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)31)), (var_4))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 16ULL))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [i_0]))))))))) ? (11862237163336505751ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [14U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) + (((4294967285U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (max((arr_2 [i_0]), (((/* implicit */unsigned int) ((signed char) var_6)))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_10))))) > (((unsigned long long int) var_6))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_3 [i_0]))) >= (((((/* implicit */int) var_7)) >> (((arr_5 [i_0]) - (7715966658453944594LL))))))))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) / (arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_4)))))) : (min((((/* implicit */unsigned int) (signed char)127)), (9U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-36)))))))));
        }
    }
    for (signed char i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_17 += arr_10 [i_2];
        arr_11 [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((arr_10 [i_2]) * (((/* implicit */unsigned long long int) 1683121880)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_10 [i_2])))))) : (((((18446744073709551589ULL) * (((/* implicit */unsigned long long int) (-2147483647 - 1))))) / (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_13)))))))));
    }
    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((arr_12 [i_3 + 1]) == (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_12 [i_3])))))), (((signed char) ((signed char) arr_9 [i_3])))));
        arr_14 [(signed char)16] = ((/* implicit */int) ((unsigned short) arr_13 [i_3]));
    }
}
