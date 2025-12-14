/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194671
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2765133409U)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)-49)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))))))) ? (min((((/* implicit */int) (unsigned char)130)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_0 + 1])))) || (((var_7) && (((/* implicit */_Bool) (unsigned char)16)))))))));
        var_14 |= (~(arr_1 [i_0 - 1]));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((arr_1 [i_0]), (arr_1 [8ULL])))))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                arr_11 [i_0 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [(unsigned short)0] [(unsigned short)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))) : ((~(((((/* implicit */_Bool) (signed char)38)) ? (arr_1 [4ULL]) : (arr_1 [i_0])))))));
                arr_12 [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) max(((-(max((((/* implicit */unsigned int) arr_8 [i_2] [i_0] [i_0])), (arr_4 [i_0]))))), (((arr_10 [i_2 - 1] [i_0 + 2] [i_2] [i_2 - 1]) << ((((-(((/* implicit */int) (signed char)37)))) + (46)))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1])) ? ((+(max((arr_6 [i_0 + 1] [i_2]), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))))))));
            }
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_17 = ((/* implicit */short) (((~(min((arr_13 [i_0 - 1] [i_1] [i_3]), (var_10))))) | (((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_0 + 1] [i_3] [i_0]))))));
                var_18 = -1LL;
            }
            for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4])) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [8U] [i_1] [i_0 + 1]))))), (max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (arr_17 [i_0 - 1] [i_0 - 1])));
                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((var_7) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_4])) : (((/* implicit */int) (signed char)-37)))) ^ (((/* implicit */int) arr_14 [i_0] [i_0]))))), ((~(arr_13 [i_1] [0] [(unsigned short)5])))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_4 + 3]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) -43298456658899417LL)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_0))))) & ((~(arr_7 [i_0] [i_1] [i_4])))))));
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_23 *= ((/* implicit */signed char) var_11);
                var_24 = ((/* implicit */short) (~((+(arr_13 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_0 + 2] [i_0 + 1] [i_0]))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) (signed char)-63))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (min((2211183806U), (arr_6 [(unsigned char)5] [(unsigned char)5])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 6; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_0 [i_0])))) * ((+(((/* implicit */int) (signed char)-54))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [5ULL] [i_0 + 1]);
                        var_27 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)28145)) : (((/* implicit */int) var_3))))));
                    }
                    for (unsigned short i_8 = 4; i_8 < 8; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))))));
                        var_29 = ((arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0]) / (arr_10 [i_0 + 1] [i_0 + 2] [i_0] [i_0]));
                        arr_27 [(signed char)2] [i_0] [(signed char)2] [i_6 + 4] [i_8] [(signed char)2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_4 [i_6 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 8; i_9 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_9 - 3] [i_0 - 1] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_9 + 1] [i_0 - 1] [i_6 + 1])))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? ((~(10U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                        var_32 &= ((/* implicit */_Bool) (+(arr_17 [i_0 + 2] [i_9])));
                    }
                }
            }
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) var_2)))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) - (min((((/* implicit */unsigned int) (signed char)-49)), (arr_10 [i_1] [i_1] [i_0] [i_0])))))));
            var_34 ^= ((/* implicit */signed char) (+(min((arr_25 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_1] [i_0]), (((/* implicit */long long int) (signed char)-51))))));
        }
    }
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % ((-(((/* implicit */int) max((((/* implicit */short) var_3)), (var_0))))))));
}
