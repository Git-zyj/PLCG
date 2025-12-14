/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49613
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] [(signed char)0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32753))) / (31LL)))) ? (-19LL) : (((/* implicit */long long int) -1))));
                            var_13 = ((/* implicit */int) var_4);
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_6)));
                        }
                        var_15 = ((/* implicit */short) ((long long int) arr_14 [i_0] [(unsigned char)12] [i_3 + 1] [i_3] [i_0]));
                        var_16 = ((/* implicit */unsigned int) ((int) var_10));
                    }
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [15U] [i_0] [i_0] [i_0])) ? ((+(var_9))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_7))))))));
                    arr_16 [i_0] [i_1] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_10)))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))) : (16777215U))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(-19LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (arr_18 [i_0] [i_0] [i_7])))) ? (min((var_5), (((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) max(((short)32747), (((/* implicit */short) (_Bool)1))))))))));
                                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (short)-32762)), (((((/* implicit */_Bool) 1393507117)) ? (max((4278190081U), (((/* implicit */unsigned int) (unsigned short)25878)))) : (((/* implicit */unsigned int) 1393507114))))));
                                arr_24 [i_0] [i_1] [i_1] [i_5] [i_0] [i_1] [i_7] = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) var_7)) ? (4012083119U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))))), (var_9)));
                                arr_25 [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -32LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) 2914258920U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_2))))) ? (((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) : (arr_20 [i_7] [i_6] [(unsigned char)1] [i_5] [i_0] [i_0]))) : (((/* implicit */int) var_4))));
                            }
                            var_21 = ((/* implicit */long long int) min((var_21), ((+(min((((/* implicit */long long int) 4278190073U)), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))))));
                            /* LoopSeq 1 */
                            for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) (short)32733))) <= (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (signed char)-67))))) : (16777218U)))));
                                var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) ((unsigned char) ((unsigned short) (short)-13432))))));
                                arr_30 [i_0] [i_0] [i_5] [i_6] [(short)16] = ((((/* implicit */_Bool) (unsigned char)181)) ? (((unsigned int) 16777218U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                            }
                        }
                    } 
                } 
                var_24 = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) / (((((/* implicit */_Bool) 4278190068U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((4278190086U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-13432))))))));
                var_25 -= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_1)), ((unsigned short)48238)))))) : ((~((-(var_6))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))))))));
                        /* LoopSeq 4 */
                        for (short i_11 = 2; i_11 < 16; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((16777214U), (4278190084U)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)17)) >> (((((/* implicit */int) var_2)) - (13850))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10))) > (var_8))))))) : (max((max((((/* implicit */unsigned int) (signed char)-55)), (16777231U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-76)) && (((/* implicit */_Bool) (short)-11296))))))))))));
                            arr_39 [i_9] [i_10] [i_9] [8LL] &= ((/* implicit */int) ((((/* implicit */long long int) ((var_12) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11])))))) & ((-(max((var_6), (var_6)))))));
                        }
                        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((_Bool) (unsigned char)240))), (((unsigned char) min((var_10), (((/* implicit */int) arr_28 [i_9] [i_9] [6LL] [(unsigned short)8])))))));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(-407174409))))));
                        }
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            arr_45 [i_0] [16LL] [i_10] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) 281474976702464LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (511U)));
                            arr_46 [i_0] [i_0] = ((/* implicit */long long int) ((((((long long int) arr_10 [i_0])) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_34 [i_0] [i_9] [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)76)) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [8] [i_0]))))) : (((/* implicit */int) var_3))));
                            var_30 = ((/* implicit */long long int) var_3);
                        }
                        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            var_31 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((arr_41 [i_10] [2U] [i_9] [i_10] [i_14] [i_14]), (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 550454855U)) ? (min((1962467734U), (((/* implicit */unsigned int) (unsigned short)17297)))) : (((((/* implicit */_Bool) (short)13038)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                            var_32 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (var_6)));
                            var_33 = ((/* implicit */short) ((unsigned short) var_1));
                        }
                        arr_49 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6614)) && ((!(var_12)))));
                    }
                    for (int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_9] [i_15])) ? (arr_4 [i_0]) : (arr_20 [i_0] [i_0] [i_1] [i_1] [i_9] [i_0])))));
                        arr_52 [i_0] = ((/* implicit */unsigned char) var_7);
                    }
                    arr_53 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-20538))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            {
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_0))));
                var_36 -= ((/* implicit */int) ((unsigned short) (unsigned short)35716));
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_2)))))) >= (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))), (((short) var_7)))))));
}
