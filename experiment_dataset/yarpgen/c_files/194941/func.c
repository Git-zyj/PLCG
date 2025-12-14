/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194941
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 &= ((/* implicit */long long int) min((1205212375), (1205212390)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) arr_0 [(unsigned short)2]);
        var_14 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) ((signed char) var_7)))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((int) var_10));
        arr_8 [i_1] |= ((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)15035)), (-984253856)));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)48635)) / (((/* implicit */int) arr_10 [i_2])))), (((int) (_Bool)1))))), (((min((9606288652782382459ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_2 - 2])) : (var_1))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_19 [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_16 [i_4])))), (((/* implicit */int) ((signed char) (signed char)54))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_16 = ((/* implicit */int) var_6);
                    arr_22 [17] = ((((/* implicit */_Bool) 541299532)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)119)));
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), ((_Bool)0)));
                    var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16900))));
                }
                for (int i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    arr_27 [i_2 + 2] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)107))))), (6238522397195370426ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        arr_32 [i_2 + 1] [i_3] [i_4] [i_4] [i_8] = ((/* implicit */int) (unsigned short)6);
                        var_19 = ((/* implicit */unsigned int) var_7);
                        arr_33 [i_2] [i_3] [i_2] [i_7] [i_8 - 1] &= ((/* implicit */unsigned long long int) ((unsigned short) (~(0))));
                    }
                }
                var_20 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                var_21 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_31 [i_2 + 1] [i_3 + 3] [i_2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) ((signed char) (_Bool)0))))) % (((/* implicit */int) ((_Bool) (unsigned short)28516)))));
            }
            for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 4) 
            {
                arr_38 [i_9 + 1] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_31 [i_2] [i_3] [22] [22] [i_11 + 1]))));
                            var_23 &= ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_2] [i_3] [i_9] [i_10] [(signed char)1])))))));
                            var_24 += ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                arr_44 [i_9] [i_9] [i_3] [i_2 + 1] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_16 [i_9])))));
            }
            for (short i_12 = 2; i_12 < 21; i_12 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 2]);
                var_26 = ((/* implicit */unsigned long long int) ((((unsigned int) ((short) arr_39 [i_3] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_26 [i_12] [i_2] [i_3] [i_3] [i_2] [i_2])))))))));
                arr_48 [i_2] = ((/* implicit */short) -2147483644);
            }
            var_27 += ((((/* implicit */_Bool) max((min((-1139681822949309986LL), (((/* implicit */long long int) 237224303U)))), (((/* implicit */long long int) min((2147483647U), (((/* implicit */unsigned int) arr_20 [14LL] [14LL] [i_2 + 1] [i_3 + 2])))))))) && (((/* implicit */_Bool) arr_24 [i_3 + 1] [i_3] [i_3] [i_3] [i_2])));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((signed char) max(((unsigned short)0), (((/* implicit */unsigned short) (short)26)))));
            arr_53 [i_13] [i_13] [4] = ((/* implicit */_Bool) (+(((long long int) max(((unsigned char)238), ((unsigned char)140))))));
            arr_54 [i_13] [i_13] [i_2 - 2] = ((/* implicit */unsigned short) (unsigned char)120);
        }
        var_28 -= (+(((/* implicit */int) ((signed char) var_7))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_4))), (max((var_2), (((/* implicit */int) (_Bool)1))))))) ? ((+(((/* implicit */int) (unsigned short)47642)))) : ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_2] [i_2] [i_2]))) <= (arr_13 [i_2 + 1] [i_2 + 1] [i_2]))))))));
        arr_55 [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_2 - 2] [i_2] [i_2] [i_2])) == (((/* implicit */int) (_Bool)0))));
    }
}
