/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231014
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
    var_19 = ((/* implicit */int) var_17);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_18))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) arr_4 [i_0]);
            arr_7 [i_0] [i_1] = max((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 1])))), ((~(((/* implicit */int) (unsigned short)65535)))));
        }
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_2] [i_3] = ((/* implicit */long long int) (~(((min((var_1), (var_1))) ? (min((((/* implicit */unsigned int) arr_4 [(signed char)11])), (var_10))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_3] [i_4])), (arr_12 [i_2] [i_3]))))))));
                    var_20 = ((/* implicit */long long int) arr_10 [(signed char)24] [i_3]);
                    arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((!(var_16))), (((arr_15 [(unsigned short)18] [i_3] [i_4]) == (var_18)))))) >> (((((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)38383)) : (((/* implicit */int) (unsigned short)65535)))) - (38356)))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2])))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_16)), (max((((/* implicit */unsigned int) arr_4 [i_2])), (1371346457U)))));
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)46932))));
        arr_20 [i_5] = ((/* implicit */unsigned short) (-(var_13)));
    }
    var_24 = min(((unsigned short)11924), ((unsigned short)0));
}
