/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231903
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) min((-4751593265881008067LL), (4751593265881008067LL)))) ? (var_5) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0 - 2])) ^ (((/* implicit */int) arr_3 [i_0 - 1]))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0])))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [(unsigned short)7]))))))));
        var_13 -= ((/* implicit */long long int) ((unsigned char) -4751593265881008067LL));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_14 += ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_1 - 1])) / (((/* implicit */int) arr_3 [i_1 - 2])))), (((/* implicit */int) min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1]))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 + 1] [i_1 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1]))) : (arr_2 [i_1 + 2] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))) : ((-(min((4751593265881008066LL), (-4751593265881008057LL))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((signed char) 8042080861548052596ULL)), (((/* implicit */signed char) ((_Bool) -4751593265881008067LL)))))), (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1])) ? (arr_9 [i_1] [i_1 + 2] [i_3] [i_3]) : (arr_9 [i_1] [i_1 - 2] [(signed char)3] [i_1 - 2])))));
                    var_16 = ((/* implicit */long long int) min((var_16), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_3]))))), (min((((/* implicit */long long int) arr_0 [i_1 - 2] [i_2])), (arr_2 [i_1] [i_2])))))));
                    var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1 + 2] [i_1] [i_1]))) : (min((((/* implicit */unsigned int) var_1)), (arr_1 [i_1])))))) : (min((arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]), (((/* implicit */unsigned long long int) var_1))))));
                    var_18 = ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1 + 2]), (arr_6 [i_1 - 1]))))) : (((unsigned long long int) var_4)));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((arr_13 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_5))))))) ? (min((((/* implicit */long long int) arr_3 [i_1])), (min((arr_13 [i_1] [0] [(signed char)15] [0]), (((/* implicit */long long int) arr_5 [(signed char)3])))))) : (((/* implicit */long long int) ((arr_5 [i_3]) ? (min((var_5), (arr_14 [i_1 + 2]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61745)) < (((/* implicit */int) arr_5 [i_4]))))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) (~(-27LL)));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)31))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_6 - 1])) / (((/* implicit */int) arr_6 [i_6 - 1]))));
                            arr_19 [i_1] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_1 + 2] [i_2] [(_Bool)1] [i_3] [i_4] [i_6] [(_Bool)1]))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) arr_5 [i_1]);
                            arr_23 [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) min(((signed char)31), ((signed char)-32)));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (arr_25 [i_1] [i_1 + 2] [i_1 - 1] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_1] [i_2] [i_1])))))))));
                            arr_27 [i_2] = ((/* implicit */unsigned short) ((arr_22 [i_1 + 2] [i_2] [i_2] [i_8 - 1] [i_2] [i_8 - 1] [i_8 - 1]) | (arr_22 [i_1 - 2] [i_4] [i_4] [i_8 - 1] [i_2] [i_8] [i_8 - 1])));
                            var_25 -= ((/* implicit */unsigned long long int) ((int) var_4));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_1] [i_4]))))) ? ((~(arr_14 [i_2]))) : (((((/* implicit */_Bool) (unsigned short)37726)) ? (((/* implicit */int) (unsigned short)49310)) : (((/* implicit */int) (signed char)-61))))))) ? (((/* implicit */long long int) min((((arr_5 [i_2]) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_3] [4]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1])) ? (var_2) : (((/* implicit */int) var_9)))))))) : ((~(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [i_1] [i_4])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_27 |= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_9] [i_3]))))));
                        var_28 |= (~(((long long int) var_1)));
                        arr_31 [i_9] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) max((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_17 [i_9] [i_2] [i_3] [i_3] [i_2] [1ULL] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 2] [i_1] [i_1] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_3] [i_9]))))))))));
                    }
                }
            } 
        } 
    }
}
