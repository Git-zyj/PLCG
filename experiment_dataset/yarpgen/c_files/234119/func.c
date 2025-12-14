/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234119
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
    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((-5142574887379841216LL) | (((/* implicit */long long int) 224552349U)))) : ((~(5142574887379841216LL)))))) ? (min(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_11)))))) : ((((((+(((/* implicit */int) var_17)))) + (2147483647))) >> (((((/* implicit */int) var_16)) + (2206)))))));
    var_19 &= ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */int) ((signed char) var_15))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40558))))))))));
        var_21 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40585)) + (((/* implicit */int) var_14))))))));
        var_22 = ((/* implicit */int) max((var_22), (((int) (signed char)-38))));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (arr_5 [(signed char)9])));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) var_11)) : (arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2]))))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4 + 1]))))) ? (((/* implicit */int) ((arr_9 [(signed char)2]) <= (((/* implicit */long long int) arr_4 [i_1] [i_3]))))) : (2013265920)));
                        var_26 = ((/* implicit */signed char) arr_5 [3ULL]);
                        var_27 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        var_28 = max((((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 3] [i_3])) : (var_9))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_4 + 4])) && (((/* implicit */_Bool) arr_6 [(unsigned short)2] [i_2] [i_2]))))));
                    }
                } 
            } 
        } 
        var_29 = ((int) min((((/* implicit */short) arr_8 [11ULL])), (arr_1 [i_1 + 2])));
    }
}
