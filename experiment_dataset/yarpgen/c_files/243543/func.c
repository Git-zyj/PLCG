/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243543
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_12 &= ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_1 [i_0])))) >> (((((/* implicit */int) (unsigned short)15513)) - (15509))))) * ((+(((/* implicit */int) arr_1 [i_1 - 1]))))));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 134217727LL)) && (((/* implicit */_Bool) (signed char)-16))))) / (arr_8 [i_0] [i_1 - 1] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] = ((/* implicit */int) (signed char)99);
                            var_14 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_4]);
                        }
                        var_15 += ((/* implicit */unsigned char) max((((4183584780336117297LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))), (((/* implicit */long long int) min((arr_10 [i_0] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_16 [i_0] [4LL] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (arr_13 [i_1 + 1] [i_5] [i_2] [i_5]) : (arr_5 [i_1 - 1] [i_1 + 1])))));
                        arr_17 [i_0] [(unsigned char)15] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1 + 1])) + (min((((/* implicit */long long int) ((arr_2 [i_0] [i_0]) % (((/* implicit */int) var_5))))), (((-4183584780336117299LL) % (((/* implicit */long long int) var_4))))))));
                        var_16 += ((/* implicit */unsigned short) var_11);
                        var_17 = ((/* implicit */unsigned short) max((var_17), (var_3)));
                    }
                    var_18 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [11LL] [i_1] [i_2]), (((/* implicit */int) (signed char)38)))))))) >> (((arr_15 [i_0] [i_0] [i_0] [i_1] [i_2]) + (7872392609139072422LL)))));
                }
                for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_6] [i_6] [(signed char)8] [i_0]))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_4)))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */long long int) min((max((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_6])), (arr_9 [i_0] [(signed char)6] [(signed char)6] [(signed char)6] [i_0] [(unsigned char)11] [i_1]))), (((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)1))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_1 + 1]) : (arr_23 [i_8] [(unsigned short)13] [i_6] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
                var_24 ^= ((((/* implicit */_Bool) max((arr_13 [i_1] [i_1] [i_1] [i_0]), (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_1] [i_0] [i_1]) : (-4183584780336117299LL)))))) ? (((((/* implicit */_Bool) min(((unsigned short)62052), (((/* implicit */unsigned short) (signed char)0))))) ? ((+(((/* implicit */int) arr_20 [i_1] [1] [i_1] [i_0] [i_0] [i_0])))) : (((((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_0] [(signed char)8] [i_0] [i_1] [i_0] [i_1 - 1])) - (49331))))))) : (var_10));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            arr_30 [i_10] [i_9] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                            arr_31 [i_0] [i_0] [i_1] [i_9] [i_9] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-47)) / (arr_18 [i_0])))) || (((/* implicit */_Bool) (+(var_10)))))) ? ((~(arr_24 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))) : (max((arr_24 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_9] [i_1])), (arr_26 [i_0] [i_0] [i_9] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_11);
    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((((/* implicit */int) var_9)) <= (var_8))))))));
}
