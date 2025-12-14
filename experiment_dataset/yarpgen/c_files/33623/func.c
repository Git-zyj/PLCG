/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33623
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
    var_15 = ((unsigned long long int) var_8);
    var_16 *= ((/* implicit */unsigned int) min((((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) (unsigned short)4095))))) : (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((var_7) % (((/* implicit */int) (unsigned short)4095))))) : (((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)85)), ((~(((/* implicit */int) (_Bool)1))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2181831187021235573LL)) && (((/* implicit */_Bool) (unsigned short)4095))))))) : (var_12)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((4397912293376ULL), (((/* implicit */unsigned long long int) var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)100)) % (((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)33155))))))) : (1594498782U)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_19 = arr_0 [(unsigned char)21] [(unsigned char)21];
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((var_2) + (((/* implicit */long long int) ((int) var_9))))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)61441)))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (signed char)-64);
                        }
                        var_21 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2]))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) max((var_12), (((/* implicit */long long int) 3740909244U))))))));
                            var_23 += min((((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) 0U))))) ? (((((/* implicit */unsigned int) arr_8 [13] [(_Bool)1] [i_1] [6ULL])) % (554058051U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_5] [i_1])) + (((/* implicit */int) (unsigned short)33155))))))), (((/* implicit */unsigned int) arr_13 [i_5] [(signed char)7] [i_2] [i_1] [i_0 - 2])));
                            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_9 [12U] [i_3] [i_2] [i_3]) : (230387454U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))))) : (max((((unsigned long long int) arr_13 [i_5] [19LL] [19LL] [11] [i_5])), (((arr_2 [i_0] [i_1 - 2] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)242)), (var_8)))) ? (((8218638544776425046LL) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) min((arr_1 [i_0 + 2]), (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [(unsigned short)2] [i_2]))))))))));
                            var_26 = ((/* implicit */unsigned short) min(((~(((long long int) (unsigned short)9)))), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_2]))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_8 [i_0] [i_3] [i_3] [i_3]))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [(signed char)7] [i_1] [i_1] [i_2] [i_1] [i_1 - 2])), (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (553921094))) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [15] [i_2] [16ULL] [7LL])))))) ? (((/* implicit */int) ((_Bool) ((int) arr_17 [i_0] [i_1] [i_2] [10ULL])))) : (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2181831187021235598LL)))))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 3; i_8 < 23; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */int) (~(max((((long long int) var_8)), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
                            arr_23 [i_2] [9ULL] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)61441)) & ((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))))));
                            arr_24 [i_2] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) (unsigned char)242);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            arr_29 [i_0] [18LL] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_22 [i_0] [12ULL] [i_2] [i_7] [i_9] [i_7]))))))));
                            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_27 [i_1] [i_2] [i_9] [i_9 + 1] [(_Bool)1])) : (((/* implicit */int) arr_6 [8ULL] [i_9 + 2] [i_9] [i_2] [i_9] [i_9]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_6 [i_9 - 2] [i_9] [i_9] [i_2] [i_9] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_7] [i_9] [i_2] [4U] [(signed char)6])) ? (((/* implicit */int) arr_6 [i_9] [i_9] [i_9] [i_2] [i_9] [i_9])) : (var_8))));
                        }
                        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */int) (+(((arr_21 [i_0 + 2] [i_1 - 1] [i_1]) % (((/* implicit */unsigned int) var_8))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (unsigned short)9)))) % ((+(arr_17 [i_0] [i_0 - 2] [i_2] [i_0])))));
                            arr_32 [i_0 - 1] [i_1] [i_2] [i_2] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1])) ? (arr_15 [i_1 + 1] [5LL] [i_1 + 1] [(unsigned short)11] [i_1] [i_1] [i_1]) : (var_2)))) ? (arr_14 [i_0] [i_0] [i_2] [i_7] [i_10] [i_10] [i_2]) : (((/* implicit */int) ((((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1))))) <= ((~(((/* implicit */int) arr_6 [13U] [i_0] [i_2] [i_2] [i_0] [i_0])))))))));
                        }
                        for (int i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            var_33 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) <= (arr_19 [i_0] [i_11 + 2] [i_2] [i_7] [i_0] [i_2]))))) % (((4566115951587950193ULL) % (((/* implicit */unsigned long long int) 1095836001)))));
                            var_34 ^= ((/* implicit */int) max((arr_21 [i_7] [i_7] [i_7]), (((arr_21 [i_1 + 1] [i_11 + 1] [i_7]) & (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                            arr_35 [i_0] [i_1] [4ULL] [9ULL] [i_11] [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_1] [i_1]);
                            var_35 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_7 [i_0] [i_2] [i_1 - 2] [i_11] [i_7] [i_11])))));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                    {
                        var_36 = ((((/* implicit */int) var_3)) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (3941301269U)))) <= (2147483647)))));
                        /* LoopSeq 4 */
                        for (signed char i_13 = 1; i_13 < 24; i_13 += 2) 
                        {
                            arr_41 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
                            var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((arr_9 [i_1 + 1] [i_12] [i_12] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((~(((long long int) arr_0 [i_12] [i_13]))))));
                        }
                        for (long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                        {
                            arr_46 [i_0 + 2] [i_2] [i_14] = 9619652601400977879ULL;
                            var_38 = ((/* implicit */long long int) (+((~(((arr_33 [i_0] [9] [i_2] [i_2] [i_12] [i_14]) * (0ULL)))))));
                            var_39 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_2] [i_2] [i_14])) ? (var_12) : (arr_39 [i_14] [i_12] [i_2] [i_1] [i_0])))) && (((_Bool) var_8))))), (var_12));
                            var_40 = (!(((/* implicit */_Bool) min((4566115951587950193ULL), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_14]))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_41 &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((arr_6 [i_0] [16ULL] [i_12] [i_12] [i_15] [i_15]), (((/* implicit */unsigned char) (signed char)-62))))) ? (min((((/* implicit */long long int) (unsigned char)211)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [(unsigned short)15] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))))));
                            arr_49 [i_2] [i_1] [i_2] [i_12] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned short)51517)), (4566115951587950198ULL)))))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (arr_44 [i_0] [i_15] [i_1] [17] [(signed char)5] [i_2] [i_1 - 1])));
                            var_43 = ((/* implicit */unsigned long long int) (+(max((-8965233577282359311LL), (((/* implicit */long long int) max(((signed char)-62), (((/* implicit */signed char) (_Bool)1)))))))));
                        }
                        for (unsigned long long int i_16 = 2; i_16 < 23; i_16 += 2) 
                        {
                            var_44 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)3859)))));
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_0))))))));
                        }
                    }
                    var_46 = (-(arr_5 [i_0] [(signed char)8] [i_2]));
                    arr_52 [20] [i_0] [i_2] |= ((/* implicit */unsigned int) ((min((arr_30 [i_0 + 2] [i_0 - 1] [i_1] [i_1] [i_1] [i_0] [i_1]), (((/* implicit */long long int) arr_44 [i_0] [i_0] [21U] [i_0] [i_0] [i_0] [i_0 + 2])))) % (arr_30 [i_0 + 2] [i_0 - 1] [(unsigned char)2] [i_1] [i_1] [i_1] [i_2])));
                    arr_53 [i_2] [i_2] [9ULL] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_45 [i_0] [i_0] [i_2] [i_2] [i_1])), (230387454U)))) && (((/* implicit */_Bool) min(((unsigned short)65535), (var_1)))))))) % (max((((((/* implicit */_Bool) var_12)) ? (1292230723U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((signed char) var_6)))))));
                }
                arr_54 [i_1] = ((/* implicit */long long int) min(((+(arr_19 [i_1] [i_1] [i_1 - 1] [i_0] [(signed char)3] [i_1 - 2]))), (((/* implicit */unsigned long long int) ((_Bool) (+(arr_4 [i_1] [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
}
