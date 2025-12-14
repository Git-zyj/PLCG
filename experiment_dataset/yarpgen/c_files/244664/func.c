/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244664
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
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 = var_1;
    var_15 = ((/* implicit */signed char) max((((((unsigned long long int) var_1)) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))), (((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 0U)) : (var_2)))))));
    var_16 = ((/* implicit */unsigned short) min((4294967293U), (4294967295U)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_7 [i_1] [1ULL] [i_2]) : (((/* implicit */unsigned long long int) arr_8 [i_0 - 2]))))));
                    arr_10 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), ((+(((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                }
                for (signed char i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_16 [i_1] [1] [1] [i_4] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 1] [i_3 + 2])) == (min((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8)))), (((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)28672)) - (28646)))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_3 [i_4] [i_4]))));
                        var_18 = ((/* implicit */_Bool) max((4294967292U), (((/* implicit */unsigned int) 989635843))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(min((((/* implicit */int) min((var_8), (var_8)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_0] [i_0] [i_0])))))))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((_Bool) (_Bool)1));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)63)))), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))))));
                            arr_23 [i_0] [i_1] [i_1] [10U] [4ULL] [i_5 - 1] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_15 [i_0] [1LL] [i_0 - 2] [11LL]), (arr_15 [i_3 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2])))) << (((/* implicit */int) (((+(var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) var_3)))))))))));
                            arr_24 [0LL] [0LL] [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((arr_22 [i_1]), (((/* implicit */unsigned int) var_0)))) : (min((arr_22 [i_1]), (((/* implicit */unsigned int) var_0))))))), ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_8 [12LL]))) + (((/* implicit */long long int) min((4294967275U), (4294967293U))))))));
                        }
                        var_22 = arr_8 [i_3 + 3];
                        var_23 *= ((/* implicit */short) var_0);
                    }
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) 315165373U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118))))) : (((/* implicit */int) (signed char)-94))))))));
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_1])) && (var_3)))), (min((arr_3 [i_1] [i_1]), (((/* implicit */int) (_Bool)0)))))))));
                }
                for (signed char i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 4; i_8 < 12; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) * (((/* implicit */int) (signed char)117))))) - (((min((9007199254740992LL), (((/* implicit */long long int) var_10)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_8 - 4] [i_7 + 1] [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) (unsigned short)5216)))))))));
                        var_27 = ((/* implicit */long long int) ((unsigned char) arr_6 [i_1]));
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((~(arr_8 [i_0 + 1]))))))));
                            var_29 ^= ((/* implicit */unsigned long long int) (+(min(((-(((/* implicit */int) (unsigned short)24576)))), (var_10)))));
                            var_30 = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1])) && (arr_15 [i_8 + 1] [i_1] [i_1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [(_Bool)1] [i_1] [i_7] [(_Bool)1] [(_Bool)1] [i_1])) : (((/* implicit */int) (short)23691))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_27 [i_8]) : (((/* implicit */int) (unsigned short)1536)))) : (((/* implicit */int) var_11)))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 2] [i_9] [i_8 - 2] [(unsigned char)9])) > (((/* implicit */int) arr_33 [i_8 - 1] [i_8 - 1] [(signed char)12] [i_8 - 2] [i_8])))) ? (((/* implicit */int) min((arr_29 [i_8 - 4] [6] [i_9 + 2] [i_9] [0LL]), (arr_29 [i_8 - 3] [i_8] [i_8] [i_9] [i_9])))) : (((((/* implicit */int) arr_29 [i_8 - 4] [i_8 - 3] [i_9] [(signed char)11] [10U])) & (((/* implicit */int) arr_33 [i_8 - 3] [i_8 - 3] [i_9] [i_9] [i_9])))))))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) arr_29 [i_0] [(unsigned char)11] [(unsigned char)11] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)42))))))));
                    arr_34 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)237)), (-1641933023)))) ? ((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_7 + 2])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [i_0 - 2] [i_1] [i_1] [i_7 - 1])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_7 + 2] [i_7 + 1]))))));
                    var_33 &= ((/* implicit */int) ((var_12) & (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)88)))) ? (((((/* implicit */_Bool) -6058996769353410720LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (12U))) : (((((/* implicit */_Bool) 4294967277U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))))));
                }
                var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_15 [i_0 - 1] [i_1] [(signed char)11] [i_1])))) : (2U)));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_0] [i_1] [i_0]))));
            }
        } 
    } 
}
