/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32535
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
    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_2)))) & (((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) min((arr_1 [(short)3]), ((unsigned short)56226)))))), (((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(unsigned char)0]);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18084916200568779776ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_9 [(signed char)12] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(short)3] [(short)3]))))) / (((/* implicit */int) arr_7 [i_1]))));
        arr_10 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_1] [i_1])) | (((/* implicit */int) arr_0 [i_1])))) <= (((((/* implicit */_Bool) arr_8 [i_1] [(short)12])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned short)46646))))));
    }
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 += ((/* implicit */_Bool) (+(((((/* implicit */int) ((unsigned char) 1ULL))) / (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) (unsigned short)47030);
        arr_14 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)58))));
        var_16 -= ((/* implicit */unsigned short) arr_12 [5LL]);
        var_17 = ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2])));
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_0 [i_2]))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) (unsigned char)193);
        arr_18 [i_3 - 2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_16 [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_17 [(unsigned short)13])))))));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18084916200568779785ULL))))) + (((/* implicit */int) arr_17 [i_4 + 1]))));
        var_19 &= ((/* implicit */unsigned char) ((arr_20 [i_4 + 1]) ? (((/* implicit */int) arr_20 [i_4 - 2])) : (((/* implicit */int) (short)21451))));
        arr_22 [i_4] = ((((((/* implicit */_Bool) (short)24781)) ? (((/* implicit */int) arr_2 [i_4 - 2] [i_4])) : (((/* implicit */int) arr_17 [i_4])))) != (((((/* implicit */_Bool) arr_0 [(signed char)1])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_1 [i_4])))));
    }
}
