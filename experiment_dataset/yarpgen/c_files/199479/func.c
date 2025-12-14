/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199479
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
    var_20 = var_16;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (-2147483647 - 1));
        arr_3 [(signed char)21] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)8);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294967283U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (unsigned char)28))));
                    arr_13 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((unsigned int) (signed char)-99)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967283U)) != (17578584724779229816ULL))))));
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) arr_8 [i_1]))))) / ((~(var_8)))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))));
        arr_15 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22742))))));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((max((((/* implicit */long long int) (unsigned char)255)), (var_11))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_4 [i_4] [(_Bool)0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)20552))))))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4]))))) | (((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [(unsigned char)24]))) : (4294967283U))))));
        var_23 = ((/* implicit */unsigned long long int) arr_8 [i_4]);
        arr_19 [i_4] &= ((/* implicit */int) arr_10 [i_4] [8U] [i_4]);
    }
    var_24 = ((/* implicit */unsigned short) var_7);
    var_25 = ((/* implicit */unsigned char) var_12);
}
