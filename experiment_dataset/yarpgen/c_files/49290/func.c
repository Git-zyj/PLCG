/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49290
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */int) 3974675495U);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 134152192ULL)) ? (1749588796425124142LL) : (((/* implicit */long long int) 1691127137U)))), (((/* implicit */long long int) (_Bool)1))));
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(320291801U))))))), ((-(3974675505U)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_7 [i_1])))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(134152192ULL)))) ? (((((/* implicit */_Bool) (~(var_13)))) ? (((((/* implicit */_Bool) 958365042)) ? (((/* implicit */int) (unsigned short)7840)) : (((/* implicit */int) arr_6 [i_1])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_1] [5U])) : (((/* implicit */int) arr_7 [i_1])))))) : (((/* implicit */int) (unsigned short)31697))));
        var_23 = ((/* implicit */unsigned char) var_9);
        var_24 = ((((/* implicit */_Bool) var_7)) ? (max(((+(2017612633061982208ULL))), (((/* implicit */unsigned long long int) 1691127137U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -641662652435243297LL))))) : (((/* implicit */int) min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [4]))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)57696))))), (arr_2 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)31697))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 24; i_5 += 2) 
            {
                {
                    var_28 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)123)))) | (((/* implicit */int) ((unsigned char) 2017612633061982208ULL))))) % (((/* implicit */int) var_9))));
                    arr_19 [i_3 - 1] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (18446744073709551609ULL)))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_9))))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) arr_18 [i_3 - 2] [i_3 + 1] [8ULL] [11U]);
    }
}
