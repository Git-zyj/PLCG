/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241452
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_18 -= ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-98)) : ((-2147483647 - 1))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 17650737915130960940ULL)))))));
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_3] [i_3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 1444552575))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (var_8) : (((/* implicit */int) (signed char)-98))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))))));
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)-15626))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_3 [i_0])))) : (arr_4 [i_4] [i_1] [i_0] [i_0])));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)32744))))) : (arr_14 [i_4] [i_1] [i_4]))))));
            }
            var_25 += ((/* implicit */int) var_7);
        }
        arr_15 [i_0] [i_0] &= ((/* implicit */unsigned short) max(((signed char)1), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_13))))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((unsigned char) arr_16 [i_5]));
        var_26 = ((/* implicit */unsigned char) arr_17 [i_5] [i_5]);
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) arr_16 [i_5])) : (((unsigned long long int) arr_17 [i_5] [i_5]))));
        var_28 = ((/* implicit */unsigned int) ((var_9) ^ (((/* implicit */unsigned long long int) arr_16 [i_5]))));
    }
    var_29 = ((/* implicit */int) (-(((unsigned long long int) var_4))));
}
