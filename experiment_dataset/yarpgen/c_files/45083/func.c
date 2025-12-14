/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45083
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_3 [10] [10] |= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        var_16 ^= ((/* implicit */short) var_3);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))) : (max((min((var_12), (((/* implicit */unsigned int) arr_5 [(unsigned short)13] [i_1])))), (((/* implicit */unsigned int) ((unsigned short) arr_4 [(_Bool)1] [i_1])))))));
        var_18 = ((/* implicit */signed char) min((var_18), (arr_5 [(unsigned char)2] [6])));
        arr_6 [i_1] &= 4294967292U;
    }
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */_Bool) arr_9 [(unsigned short)5] [(_Bool)1])) ? (((/* implicit */int) var_13)) : (-1507672357)))))) || (arr_7 [(short)15] [(signed char)21])));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */signed char) arr_7 [i_2] [14U])), (arr_10 [(unsigned char)0] [(_Bool)1]))));
        var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_2] [i_2])) < (((/* implicit */int) arr_7 [(_Bool)1] [i_2])))) && (((/* implicit */_Bool) ((((_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) arr_7 [(unsigned short)3] [i_2])))))) : (min((-9223372036854775789LL), (((/* implicit */long long int) arr_9 [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) -7839611162744417549LL))))));
        arr_16 [i_3] = ((/* implicit */short) (signed char)-92);
        var_21 += ((/* implicit */long long int) var_13);
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) (_Bool)1)))))));
}
