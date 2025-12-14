/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22986
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_0 [i_0]))));
        var_17 = ((/* implicit */long long int) arr_0 [(unsigned char)0]);
        var_18 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((arr_2 [i_1]) ^ (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0)))));
        var_19 = ((/* implicit */short) ((var_13) && (((/* implicit */_Bool) ((unsigned char) var_0)))));
    }
    var_20 += ((/* implicit */unsigned char) (-(max(((~(var_5))), (max((var_14), (((/* implicit */long long int) 0U))))))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4080093146U)) ? (9729561012179205480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))))) << (((((/* implicit */int) min(((short)14593), (((/* implicit */short) (signed char)126))))) - (100)))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_3 [(unsigned char)19]))))));
        var_22 = ((/* implicit */unsigned int) ((short) var_13));
        arr_9 [2LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((arr_2 [i_2]) << (((var_6) - (8071476110360927237LL)))))) ? (((/* implicit */unsigned long long int) (~(4U)))) : (arr_2 [i_2])))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-((~(4294967295U)))))) == (var_5)));
    }
    for (short i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        arr_13 [(unsigned char)0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_11 [12ULL])))) ? (((/* implicit */int) ((var_14) > (((/* implicit */long long int) arr_11 [i_3]))))) : (((/* implicit */int) arr_12 [i_3 - 1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_2))))), (((unsigned char) arr_10 [12U]))))));
        arr_14 [(signed char)17] = ((/* implicit */long long int) (~(arr_10 [i_3 - 4])));
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) var_2);
        var_24 = ((/* implicit */_Bool) var_8);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_4]))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_4])))))));
        var_26 = ((/* implicit */unsigned char) 524287LL);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (_Bool)0)))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)))) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    }
}
