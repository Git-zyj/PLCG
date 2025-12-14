/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190207
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)12555)))))) + (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 |= ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_6);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) var_0));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (unsigned char)3);
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_9 [i_1] [i_2 + 1])))) ? ((~(((/* implicit */int) var_14)))) : ((~(((/* implicit */int) arr_7 [i_1] [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])) >= ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_1] = ((/* implicit */long long int) ((signed char) arr_1 [(signed char)4]));
            arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1]))) == (var_1)))) : (((/* implicit */int) arr_1 [(unsigned char)0]))));
            var_20 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (short)12557)) >= (((/* implicit */int) (unsigned short)46922)))));
        }
        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (short)12555)))));
    }
}
