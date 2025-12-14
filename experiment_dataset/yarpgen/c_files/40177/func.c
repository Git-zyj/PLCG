/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40177
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) min(((-(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((4482900076456150291LL), (var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27773)))) : (((/* implicit */int) (short)12060)))))));
                    var_19 = ((((/* implicit */_Bool) arr_3 [(short)3] [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2940827528U))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)5868)) - (5858)))))) ? (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_2 + 4])) : ((((_Bool)1) ? (2032721633U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) >= (((/* implicit */unsigned int) ((var_8) << (((arr_3 [i_0 + 1] [i_2 - 1]) - (924295720))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [(unsigned char)2] [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_2] [(short)5] [i_2 - 1] [i_2 + 4]) ? (((/* implicit */int) max((arr_9 [i_2] [5U] [i_2 + 2] [i_2 + 3]), (arr_9 [i_2] [i_2] [i_2 + 3] [i_2 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [5U] [i_0] [i_2 + 4])), (var_3))))));
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((3757678525U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32747))))))))) >= ((+(((((/* implicit */_Bool) arr_16 [i_3] [i_1] [(unsigned char)8] [i_2] [i_3] [i_5] [i_5])) ? (arr_1 [i_0] [3U]) : (((/* implicit */long long int) -813017099))))))));
                        }
                        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [(short)2] [i_0] [i_2])), (max((((/* implicit */unsigned int) (unsigned char)4)), (arr_12 [i_3] [i_2] [(unsigned char)1])))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_2 [i_0] [i_2] [i_3])), (3180463590U)))))))))));
                    }
                    for (short i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((var_1) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) -813017099)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_16 [i_0] [i_0] [i_6 - 1] [i_6] [i_1] [i_0 + 1] [i_2])))));
                        var_24 -= ((/* implicit */_Bool) (~(((arr_1 [i_6 + 2] [i_2 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)0] [i_6 + 1])))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 3; i_7 < 8; i_7 += 4) 
                        {
                            arr_26 [i_0] [i_0] [(short)5] [i_6] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(1354139755U)))), (((((/* implicit */_Bool) var_11)) ? (var_2) : (var_2)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (-2129877463658154514LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_2 + 4])) * ((-(5ULL)))))))))));
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (unsigned char)75)))));
                            arr_27 [i_1] [i_1] [i_0 + 3] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_16)))))) - (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4721))) : (max((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (var_13))))))));
                        }
                        for (int i_8 = 1; i_8 < 8; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                            arr_32 [(unsigned short)2] &= ((((var_17) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (short)18983)))) + (19040))) - (54))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_8 + 1])) ? (801658043) : (((/* implicit */int) arr_21 [i_6] [4U] [i_1]))))) % (var_2)))))))));
                            var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((var_8) - (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (min((3208464169U), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((long long int) ((arr_13 [i_0] [(unsigned char)5] [7U] [i_6 + 2] [i_6] [i_0 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)4723))))));
                            var_31 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_2 + 3] [i_6] [i_0] [i_6]))) ^ (min((arr_1 [(unsigned char)3] [i_6]), (((/* implicit */long long int) var_8))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) ^ (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) 1317555497268249925LL))))))));
                            var_32 = ((/* implicit */short) ((unsigned int) var_8));
                        }
                        arr_35 [7ULL] [7ULL] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_18 [i_0] [i_0 + 2] [i_6] [i_6 + 1] [i_6 + 1]), (arr_18 [i_0] [i_0 + 3] [i_0 + 3] [i_6 - 1] [i_6])))), (((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 3] [2U] [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_18 [i_0] [i_0 + 3] [i_6] [i_6 - 1] [i_0]))))));
                        var_33 |= ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)71))))))));
                    }
                }
            } 
        } 
    } 
    var_34 |= ((/* implicit */unsigned int) (((((+(var_13))) ^ (((/* implicit */int) ((var_0) < (var_9)))))) >> (((((((/* implicit */_Bool) var_3)) ? (min((var_11), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4057784524U)) ? (((/* implicit */int) var_6)) : (293220246)))))) - (644372163U)))));
    var_35 = var_13;
    var_36 = ((/* implicit */unsigned char) var_1);
}
