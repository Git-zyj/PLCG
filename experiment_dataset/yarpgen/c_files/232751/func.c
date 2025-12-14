/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232751
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
    var_14 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [(signed char)15] [i_0] = ((/* implicit */int) ((unsigned short) var_6));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) 931009802U);
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0]))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)92)) <= (((/* implicit */int) (unsigned char)252))));
        }
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 1] [17])) << (((((/* implicit */int) arr_1 [i_0 + 2])) - (54206)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_4 [i_0 + 1] [(unsigned char)5] [i_0 + 1]))))) - ((-(((/* implicit */int) (_Bool)1))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)235)) ^ (((/* implicit */int) (!(var_4))))))) / (var_13)));
    var_20 = var_3;
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) 3363957495U);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-35)) <= (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)244))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [18] [i_2]))))) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)127))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (2525575731U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(signed char)2]))))) : ((~(arr_8 [(unsigned short)6]))))))))));
        arr_11 [i_2] = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (5053933144803697980LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1586999269U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) >= (4294967294U)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_14 [(unsigned char)12] [(unsigned char)12] [i_3]))));
            var_24 ^= ((/* implicit */unsigned char) (-(-5662024550243601982LL)));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (signed char)100))));
            var_26 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_11)))) >= (((/* implicit */int) arr_9 [i_3] [i_4]))));
            var_27 *= ((/* implicit */unsigned char) (~(arr_8 [i_3])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            arr_19 [i_5] [i_5 + 2] = ((/* implicit */unsigned char) (-(((2043649483U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5])))))));
            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_17 [i_5 - 1]))));
            var_29 += ((/* implicit */long long int) arr_12 [i_5] [i_5]);
        }
        arr_20 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */int) min((var_7), (arr_13 [i_3])))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))))));
    }
}
