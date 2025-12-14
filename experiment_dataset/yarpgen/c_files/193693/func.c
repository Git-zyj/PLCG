/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193693
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(var_2)));
        var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        var_12 = ((/* implicit */short) var_3);
    }
    var_13 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_14 |= ((/* implicit */unsigned short) (signed char)62);
        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) arr_3 [i_1]))));
        var_16 = ((/* implicit */signed char) 1143691790U);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 2377386149U))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64)) || (((/* implicit */_Bool) arr_7 [i_2]))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_20 [(unsigned char)7] [i_3] [i_3] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1917581172U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40))) : (11950602065416525345ULL)))));
                        arr_21 [i_2 + 1] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) arr_10 [(short)0]);
                    }
                } 
            } 
        } 
        var_17 = ((unsigned long long int) 0ULL);
    }
    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */short) arr_23 [(signed char)6] [i_6]);
        arr_25 [i_6 + 1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) ^ (min((2377386149U), (((/* implicit */unsigned int) var_7))))))));
    }
}
