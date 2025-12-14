/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53111
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) max((((unsigned long long int) var_18)), ((-(18446744073709551615ULL)))));
        arr_4 [i_0] &= min((arr_3 [i_0]), (arr_2 [i_0 + 1] [i_0]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551596ULL)))) - ((+(((unsigned int) arr_2 [i_1] [i_1]))))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_2])), (arr_3 [i_0 + 1])))) % (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_9)))))) % (((((_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (short)8944))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) var_8);
        arr_13 [i_3] = ((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((unsigned int) var_2)) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15)))))));
        arr_16 [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(unsigned char)6])) ? (((/* implicit */int) (short)8922)) : (((/* implicit */int) var_11))));
    }
    var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (1414283157U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3106790358U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) max((((short) (signed char)-39)), (((/* implicit */short) var_9)))))));
    var_24 -= var_9;
    var_25 = ((/* implicit */unsigned int) var_16);
    var_26 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (~(15ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)236)) ^ (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))))))));
}
