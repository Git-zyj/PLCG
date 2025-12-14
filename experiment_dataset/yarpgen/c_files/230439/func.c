/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230439
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
    var_13 |= ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */signed char) ((unsigned int) ((long long int) arr_0 [i_1] [i_0])));
                arr_4 [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */long long int) (unsigned char)119);
                var_15 ^= ((/* implicit */_Bool) max((max((((int) arr_2 [i_0] [22ULL])), (((/* implicit */int) arr_3 [0U] [0U] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (var_3)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) ((short) (unsigned char)119));
                    var_17 ^= ((/* implicit */unsigned char) (-(arr_0 [i_2 - 1] [i_1 - 2])));
                    var_18 = (unsigned char)137;
                    var_19 = ((/* implicit */short) ((arr_6 [20LL] [i_1] [i_0] [i_1]) % (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_2 + 1]))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (signed char)47))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) arr_8 [i_3 + 1] [i_1] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) ((9063604728111122874ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))))))));
                    }
                    for (long long int i_5 = 4; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_5] [4ULL] &= ((/* implicit */long long int) (+(9383139345598428742ULL)));
                        var_23 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (413114570))));
                    }
                    for (long long int i_6 = 4; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_21 [i_7] [i_7] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_6 - 1] [(_Bool)1])) ^ (arr_10 [(unsigned char)16] [(unsigned char)16] [i_6 + 1] [i_6] [i_6 - 2])));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3 + 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)136)) + (((/* implicit */int) arr_2 [i_3] [i_6]))))) : (arr_1 [i_0 + 2])));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_25 &= ((/* implicit */unsigned char) ((long long int) (unsigned char)11));
                            var_26 &= ((/* implicit */int) -8103294529926265131LL);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_0 - 1] [i_0 - 1] [i_6])))) ? ((-(arr_1 [i_6]))) : (((/* implicit */long long int) arr_0 [i_0 + 3] [(unsigned char)0]))));
                        }
                        var_28 *= ((/* implicit */signed char) ((unsigned char) 9383139345598428741ULL));
                        arr_26 [i_0] [i_0] [i_3 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0]))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) var_6)) ? (9383139345598428741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                    }
                    arr_27 [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                }
                for (unsigned int i_9 = 1; i_9 < 24; i_9 += 2) /* same iter space */
                {
                    var_30 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_29 [12U] [16LL] [i_9 + 1])) ? (arr_29 [(_Bool)1] [i_1] [i_9 - 1]) : (arr_29 [(unsigned char)16] [i_1 - 2] [i_9 - 1])))));
                    arr_30 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)47)) ^ (((/* implicit */int) (unsigned char)127))));
                }
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_14 [i_0] [i_1 + 1] [i_0] [i_1])))) ? (((/* implicit */int) arr_7 [(signed char)0] [i_0 - 1] [(signed char)0])) : (((/* implicit */int) max((arr_19 [(signed char)2] [i_1] [i_1] [8U] [(signed char)2]), (arr_18 [i_1] [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_32 = max((4824065317093970381ULL), (((/* implicit */unsigned long long int) var_5)));
}
