/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213775
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = arr_2 [i_0];
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0] [(signed char)1]))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_6 [i_1]);
        arr_9 [5LL] = ((/* implicit */short) arr_1 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)111))))) : (max((((/* implicit */long long int) var_3)), (-6923911226795744950LL))))) | (max((((((/* implicit */_Bool) var_0)) ? (var_13) : (var_2))), (((/* implicit */long long int) arr_2 [(short)2])))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_2]))) : ((+(4130997367916938889LL)))))));
                        arr_21 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-18014398509481984LL), (max((var_12), (((/* implicit */long long int) arr_11 [(signed char)3] [i_2]))))))) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 7; i_6 += 3) 
        {
            arr_29 [i_5] |= max((max((((/* implicit */long long int) arr_0 [i_6 + 1])), (arr_15 [i_5] [(unsigned char)5]))), (((/* implicit */long long int) ((signed char) arr_28 [i_5] [i_6 + 1]))));
            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_5] [i_6]), (var_9)))) ? (((/* implicit */int) arr_0 [i_6 + 2])) : (((/* implicit */int) var_14))))) ? (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-89)), (arr_23 [i_5]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 8; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 8; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (arr_19 [i_8] [i_5] [i_8] [3LL]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) == (arr_13 [i_8])))))) - ((~(((long long int) (signed char)-89))))));
                    var_21 -= min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) arr_19 [i_5] [i_7 - 1] [i_7 + 1] [i_8 - 1])) ? (arr_19 [i_5] [i_7] [i_7 + 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))));
                    var_22 = ((/* implicit */signed char) 6923911226795744941LL);
                    arr_36 [i_8 + 1] [i_8] [i_5] = ((/* implicit */long long int) ((max(((-(arr_24 [i_8]))), (((/* implicit */long long int) var_3)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_8])) ? (((/* implicit */int) arr_22 [(unsigned char)6])) : (((/* implicit */int) (signed char)94)))))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) min((((short) var_4)), (((/* implicit */short) ((signed char) arr_7 [i_7 - 1] [(signed char)8])))))) : ((-(((/* implicit */int) arr_17 [i_8 - 1] [(signed char)5]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) (((~(((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        arr_40 [9LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_38 [i_9]))));
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_9])) % (((/* implicit */int) arr_39 [(signed char)1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_39 [i_9]))));
    }
}
