/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32489
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
    var_10 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (var_0)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((unsigned short)32256), (((/* implicit */unsigned short) arr_3 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0] [1LL]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1438144503650503965LL)))) ? (((/* implicit */int) (short)-102)) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */short) (signed char)127);
                    arr_14 [i_3] [i_2] [(unsigned short)13] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-16915)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-2))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-978)))))));
        var_12 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */int) arr_3 [i_1])) + (arr_6 [i_1]))))));
        var_13 = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */signed char) (-(arr_0 [i_4] [i_4])));
        arr_20 [i_4] [i_4] |= ((/* implicit */unsigned short) arr_9 [i_4] [i_4]);
        var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
        arr_21 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4])) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_7))));
    }
    var_15 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (short)31518)) && (((/* implicit */_Bool) (signed char)17)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((((/* implicit */int) var_5)) * (((/* implicit */int) (short)3))))))) : ((+((-9223372036854775807LL - 1LL))))));
}
