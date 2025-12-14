/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189724
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2] [i_1])) % (((((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_4 [i_0])))) ^ (((/* implicit */int) min((var_14), (var_12))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_1])) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min((((/* implicit */unsigned short) var_11)), ((unsigned short)19461)))))) - (65463)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3 - 1] = ((/* implicit */signed char) var_6);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (arr_2 [i_1] [i_1])));
                            var_19 = ((/* implicit */signed char) min((var_19), (((signed char) var_12))));
                            var_20 = ((/* implicit */_Bool) ((short) arr_6 [i_0 + 1] [i_2] [i_4]));
                        }
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
                            arr_18 [i_5 + 2] [i_3] [i_5 + 2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                            var_21 = arr_15 [i_3] [i_3] [i_2] [i_3] [12LL] [i_3] [i_5];
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) var_10))));
                            var_23 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)71)) << (((var_7) - (155829311U))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_9))) <= (((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3]))));
                            var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_8 [i_0 - 1] [i_3 + 2] [16ULL] [i_3 + 2]))));
                        var_27 = ((/* implicit */signed char) min((var_27), ((signed char)-106)));
                        var_28 ^= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_3 + 1]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) max(((unsigned char)252), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */short) var_10))))))))));
                            arr_28 [i_7] [i_1] [i_2] = ((unsigned long long int) min(((unsigned short)65520), (((/* implicit */unsigned short) (signed char)-115))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_32 [i_7] [i_1] [i_1] [19] = ((/* implicit */int) var_13);
                            var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((min((33554400U), (((/* implicit */unsigned int) -931233822)))) - (33554389U)))));
                            arr_33 [i_0] [i_7] [i_2] [i_7] [i_0] = min((((/* implicit */long long int) arr_25 [23ULL] [i_1] [i_1])), ((~(max((3883649236853066942LL), (((/* implicit */long long int) var_13)))))));
                            var_31 = ((/* implicit */int) ((((((/* implicit */int) min(((short)4688), (((/* implicit */short) (signed char)-116))))) ^ (((((/* implicit */int) (unsigned short)41452)) >> (((((/* implicit */int) (signed char)107)) - (96))))))) != (((/* implicit */int) (short)-2263))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) var_12))), (min((((/* implicit */long long int) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26809)))))), (3883649236853066949LL)))));
                        var_33 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_10] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))))) << (((/* implicit */int) max((arr_30 [i_0] [i_1] [i_1] [i_10]), (arr_30 [i_0] [i_1] [i_2] [i_10]))))))), (max((6ULL), (((/* implicit */unsigned long long int) (unsigned short)3100))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        for (unsigned int i_12 = 3; i_12 < 16; i_12 += 1) 
        {
            {
                arr_42 [i_12] = (i_12 % 2 == 0) ? (min((((/* implicit */long long int) (((((~(((/* implicit */int) arr_26 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))) - (1)))))), (min((8450355318455504831LL), (((/* implicit */long long int) ((short) var_14))))))) : (min((((/* implicit */long long int) (((((((~(((/* implicit */int) arr_26 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11])))) - (2147483647))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))) - (1)))))), (min((8450355318455504831LL), (((/* implicit */long long int) ((short) var_14)))))));
                var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_22 [i_11] [i_12] [i_11] [i_11] [(unsigned char)10])))) && (((/* implicit */_Bool) ((long long int) var_13)))))), (max((((unsigned long long int) (unsigned short)41452)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3406))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-32756)), ((unsigned short)62437)));
    var_36 = ((/* implicit */unsigned short) var_7);
}
