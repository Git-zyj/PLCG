/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237767
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_11 = 10252534106051358648ULL;
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((signed char) 10252534106051358633ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((((/* implicit */int) arr_3 [i_0 + 1])) - (((/* implicit */int) var_5))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((10252534106051358648ULL) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [16LL])) ? (10252534106051358667ULL) : (((/* implicit */unsigned long long int) 5237626999286792679LL))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_6 [i_1])), (32640U))) < (((((/* implicit */_Bool) 32640U)) ? (4294934656U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60780)))))))) : (((/* implicit */int) ((((/* implicit */int) max((arr_3 [i_1]), (arr_5 [i_1])))) > (((/* implicit */int) ((signed char) (signed char)-69))))))));
        var_14 = ((/* implicit */short) var_3);
        var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_2)) : (2147483647)))) ? (((/* implicit */int) ((((8097139828404974646ULL) % (((/* implicit */unsigned long long int) 1239987982)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [3ULL])) ? (((/* implicit */int) arr_6 [i_1])) : (-1752479338))))))) : (((((/* implicit */int) arr_6 [i_1])) << (((/* implicit */int) arr_0 [(_Bool)0]))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)1)) - (1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) arr_5 [i_1]))))) : (1162916134)));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1162916134)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (32639U)));
        var_18 -= ((/* implicit */short) (~(4305693821066662572ULL)));
        arr_10 [i_2] &= ((/* implicit */_Bool) (-(32640U)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((472166117) << (((18U) - (16U)))));
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_15 [i_3] = max((((/* implicit */int) ((32647U) == (32646U)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((signed char)88), (((/* implicit */signed char) var_5))))) : (((/* implicit */int) arr_2 [i_3])))));
        var_19 &= ((/* implicit */int) arr_0 [i_3]);
        var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [10])) ? (((/* implicit */int) arr_2 [(short)14])) : (((/* implicit */int) arr_2 [i_3])))));
        var_21 = ((/* implicit */unsigned char) (_Bool)1);
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))) ? (((((((/* implicit */int) (short)-11417)) + (2147483647))) << (((var_9) - (10143891612132646634ULL))))) : (((arr_14 [i_3] [i_3]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_14 [i_3] [i_3]))))));
    }
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_0))));
}
