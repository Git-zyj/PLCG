/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242949
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1120887759)) == (var_12)))), (min((((/* implicit */unsigned int) var_9)), (16711680U)))))) ? (min((min((var_12), (((/* implicit */unsigned int) var_10)))), (((((/* implicit */_Bool) (short)-25199)) ? (var_7) : (var_0))))) : (((/* implicit */unsigned int) -475670551))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)65531))))) - (var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) var_5);
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52285)) >> (((var_7) - (1674845986U))))))))), (((unsigned long long int) ((unsigned int) var_14)))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((var_4) << (((var_3) - (16067817215143950817ULL))))))))) && (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_1)))))));
                    arr_7 [i_2] [i_1] [i_0] |= ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */short) var_9)), (var_8)))) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_11) ^ (((/* implicit */int) var_9))));
                    arr_13 [i_0] [i_1] [i_3] = (-(var_0));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62272)) == (((/* implicit */int) ((var_12) != (var_7))))));
                    arr_16 [i_0] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (var_3) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                    var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))));
                    var_22 = ((/* implicit */short) (~((~(((/* implicit */int) var_8))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_5] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 475670550)) + (var_13)));
                            var_23 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_13)))));
                            var_25 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_11))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((var_12) << (((var_13) - (10297627894169391083ULL))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) var_11)) != (var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)89)) || (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_14)))));
                            arr_31 [i_8] [i_6] [i_5] [i_1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_8)))) / (((/* implicit */int) (signed char)-75)))))));
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 475670547))))) >> (((var_4) - (6573563359218386383LL)))));
                        }
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((-(var_11))) == (((/* implicit */int) var_6)))))));
                            var_33 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_8))))));
                            arr_35 [i_9] [i_9] [i_5] [i_9] [i_0] = ((/* implicit */unsigned int) var_4);
                        }
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((-8LL) > (10LL)))) >> ((+(18LL)))));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            arr_43 [i_0] [i_10] [i_5] [i_10] [i_11] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_11)) : (var_0)))));
                            var_36 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (3LL))))) | (((((/* implicit */_Bool) -8620504968955579284LL)) ? (((/* implicit */long long int) 2751312951U)) : (var_4)))));
                        }
                        var_37 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_6))))));
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
                        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) | (((/* implicit */int) var_10))));
                    }
                    for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_14] = ((/* implicit */short) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_5)) - (54009))))) ^ ((-(var_11)))));
                            var_39 = ((/* implicit */unsigned int) var_2);
                        }
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_11)))))));
                            arr_57 [i_15] = ((/* implicit */unsigned int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_58 [i_0] [i_0] [i_5] [i_13] [i_15] |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 475670527)) : (var_4)))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (-475670525)));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_3))))) < (var_14)));
                        }
                        arr_62 [i_13] [i_5] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((int) var_4))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) ((short) var_11));
                            var_44 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) <= (var_4)));
                            arr_67 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_13));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((var_0) <= (var_0))))));
                                var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_12)));
                                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_10)) : (var_11)))) || (((/* implicit */_Bool) var_13))));
                            }
                        } 
                    } 
                    arr_73 [i_5] [i_5] [i_1] [i_0] = (+(var_12));
                }
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (var_14)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)65508)) : (((/* implicit */int) var_2))))) ^ (var_3))) : (((/* implicit */unsigned long long int) 2LL))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned char) (~(((((var_4) & (((/* implicit */long long int) var_7)))) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_9))))))))));
    var_50 = ((/* implicit */int) (((~(min((-11LL), (((/* implicit */long long int) var_2)))))) * (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4)))))));
}
