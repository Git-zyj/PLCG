/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211036
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_9 [i_2] [i_1 - 2]))) * (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12543), ((unsigned short)52266)))))));
                    var_21 = ((/* implicit */long long int) (-(max(((-(-884145368))), ((~(((/* implicit */int) var_6))))))));
                }
            } 
        } 
        arr_11 [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) min((var_15), (((/* implicit */long long int) arr_2 [(short)4] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 8; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((unsigned short) var_4));
        var_23 = ((/* implicit */long long int) ((arr_1 [i_3 - 1]) >> (((arr_1 [i_3 + 1]) - (327619988)))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3 - 3] [i_3])) * (((/* implicit */int) arr_0 [i_3 - 2] [i_3 - 2]))));
    }
    for (long long int i_4 = 3; i_4 < 8; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((+(((/* implicit */int) arr_7 [i_5] [i_4 - 2] [i_4])))) | ((-(var_1))))))));
            var_26 += ((/* implicit */long long int) arr_20 [(unsigned char)3] [i_4]);
        }
        var_27 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [7] [i_4 + 4])))) - (max((arr_6 [(short)18] [i_4] [i_4]), (((/* implicit */int) arr_7 [i_4] [i_4] [i_4 + 1]))))))), (((((/* implicit */_Bool) arr_15 [i_4 + 4])) ? (min((arr_9 [(signed char)20] [(signed char)20]), (((/* implicit */long long int) arr_13 [i_4])))) : (arr_9 [(unsigned short)8] [(unsigned short)8])))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)53)))))) + (2147483647))) >> ((((-(max((((/* implicit */long long int) arr_3 [i_4])), (arr_9 [(signed char)20] [(signed char)20]))))) + (3954480735909929926LL))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -5571011011240048793LL)))))), (max((((/* implicit */int) ((197797644) > (((/* implicit */int) (signed char)62))))), (-351340194)))));
        var_29 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) || (((/* implicit */_Bool) arr_22 [i_6] [i_6])))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                {
                    var_30 -= ((/* implicit */unsigned char) min((((min((((/* implicit */long long int) (_Bool)1)), (arr_21 [i_6 - 1] [i_7]))) != (((/* implicit */long long int) ((((/* implicit */int) (short)31862)) ^ (((/* implicit */int) arr_10 [i_6] [9]))))))), (((((/* implicit */_Bool) ((long long int) (signed char)114))) && (((((/* implicit */int) var_0)) != (((/* implicit */int) arr_28 [(unsigned short)5]))))))));
                    var_31 = ((/* implicit */short) ((long long int) max(((unsigned short)10928), ((unsigned short)27529))));
                    var_32 = ((/* implicit */int) (((-(((/* implicit */int) ((unsigned short) var_1))))) == (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) ((unsigned char) arr_4 [i_8] [i_6]))))))));
                }
            } 
        } 
    }
}
