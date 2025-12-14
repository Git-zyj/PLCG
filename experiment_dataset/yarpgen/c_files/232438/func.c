/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232438
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (-((+((+(arr_1 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_1] = ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_0 [(unsigned char)1] [i_2 + 1]) : (arr_2 [i_0] [i_1] [i_2]));
                    var_18 = ((/* implicit */int) var_1);
                }
                var_19 = (+(min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_1] [i_0] [i_0]))));
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1])), (max((((unsigned long long int) arr_0 [i_0] [i_1])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [14ULL])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_8 [(unsigned char)8])) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (arr_10 [i_3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [4ULL]))))))) - (100ULL)))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3 - 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))) : (min((((/* implicit */unsigned long long int) max((arr_11 [i_3]), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_10 [4]) : (arr_10 [i_3])))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [(unsigned char)18])) : (((/* implicit */int) arr_9 [i_3])))) > (((/* implicit */int) min((arr_8 [(_Bool)1]), (arr_8 [(signed char)20]))))))), ((+((~(((/* implicit */int) arr_11 [(unsigned char)22])))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [18ULL])) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [18U])) ? (((/* implicit */int) arr_13 [i_4] [(_Bool)1])) : (((/* implicit */int) arr_8 [(_Bool)1]))))) : (arr_10 [i_4])))));
        var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [14]))))) ? (((/* implicit */int) ((signed char) arr_9 [20LL]))) : (((/* implicit */int) arr_11 [(unsigned short)18])))), (((int) arr_14 [i_4]))));
    }
    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_5]))));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) arr_14 [i_5]);
    }
}
