/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44342
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
    var_16 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) < (((var_10) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_15))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
            var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-1) : (1)));
            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (((-(arr_1 [i_1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1])))))));
        }
        arr_7 [i_0] = ((/* implicit */int) ((((arr_2 [i_0]) / (arr_2 [i_0]))) <= (arr_2 [i_0])));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_3] [i_2])) : (((/* implicit */int) arr_3 [i_0]))))))));
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)14] [i_2 - 2])) ? (arr_2 [i_2]) : (arr_2 [15U])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))) : (((var_3) - (var_1)))))));
                    var_19 = ((/* implicit */_Bool) (((-(arr_2 [(_Bool)1]))) / (((/* implicit */int) (signed char)84))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4] [i_5])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_5])))));
            var_21 = ((/* implicit */signed char) arr_8 [12LL] [12LL]);
        }
        var_22 = (-(((int) arr_11 [i_4] [i_4] [i_4])));
        var_23 ^= ((((/* implicit */unsigned long long int) 1373673305U)) * (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) : (arr_15 [i_4] [i_4]))));
        var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_13)))));
    }
}
