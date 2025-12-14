/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203949
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
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [9] = ((/* implicit */int) min(((+(var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) max(((~(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10)))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((var_11), (var_11))), (((/* implicit */long long int) min((var_6), (min((var_7), (var_7))))))));
            arr_8 [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551606ULL), (((/* implicit */unsigned long long int) 5686925254044485860LL))))) && (((((/* implicit */long long int) var_6)) <= (var_11))))))) / (((((/* implicit */long long int) ((/* implicit */int) (short)4525))) + (((long long int) var_10))))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-4503)) >= (((/* implicit */int) (signed char)19)))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_5))))))));
            var_15 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_1)) - (60))))));
            var_16 -= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))));
            arr_13 [i_0] [i_2] &= ((/* implicit */signed char) ((unsigned long long int) var_0));
        }
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
        {
            var_17 *= ((signed char) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (short)4517)))));
            arr_16 [i_0 - 4] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */int) (short)-4526)) >= (((/* implicit */int) var_12))))), ((signed char)-13)));
            var_18 *= ((/* implicit */short) min(((((-(var_13))) >> (((((/* implicit */int) ((unsigned short) var_9))) - (26))))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (unsigned short)5805)))))));
        }
        for (int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            var_19 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)48)), ((unsigned short)0)))), (min((((/* implicit */unsigned int) var_10)), (var_2)))));
            var_20 -= ((/* implicit */short) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_8)))))));
            var_21 = ((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_25 [i_0] [i_4] [i_4] = var_7;
                    arr_26 [i_4] [i_4 - 2] [(unsigned char)9] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) max((var_0), (((/* implicit */short) var_1))))) - (((/* implicit */int) ((signed char) var_3)))))) != (max((var_2), (((/* implicit */unsigned int) var_0))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((max((((/* implicit */unsigned int) var_1)), (var_5))) >> (((max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))) - (4294949901U))))))));
                }
                for (int i_7 = 1; i_7 < 8; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)4501)) & (((/* implicit */int) var_0))))))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 8; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) var_2);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_12)), (var_2))), (var_13))))));
                    }
                    for (int i_9 = 2; i_9 < 8; i_9 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) ((max((10100316687848899084ULL), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_9))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
                        arr_35 [i_0] [i_4] [i_0] [i_0] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((var_5) == (((/* implicit */unsigned int) var_7))))), (((-4785061267274344068LL) - (((/* implicit */long long int) var_2))))));
                    }
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (short)4501))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)4541)) && (((/* implicit */_Bool) var_12))))) > (((/* implicit */int) (unsigned char)245))));
                }
                arr_39 [i_4] [i_4] [(_Bool)1] = ((/* implicit */int) ((max((((/* implicit */long long int) var_1)), (var_11))) == (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
                var_29 = ((/* implicit */short) min((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) ((var_5) == (var_5)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)181)))))))));
                arr_40 [i_0] [i_4] [i_5] = (-(((unsigned long long int) (+(((/* implicit */int) var_3))))));
                arr_41 [i_5] [i_4] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)182))))), (max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-88)) % (((/* implicit */int) (short)4514)))))))));
            }
            for (long long int i_11 = 2; i_11 < 10; i_11 += 2) 
            {
                var_30 = ((/* implicit */long long int) min((((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)43792))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                    var_32 ^= ((/* implicit */int) ((8346427385860652510ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                }
                arr_48 [i_0] [i_4] [i_11] = ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (var_11)));
                arr_49 [10] [i_4] [i_4] = ((/* implicit */int) 6182342418550210315ULL);
            }
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_54 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */unsigned int) var_6)))), (min((4194303U), (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)40780)) - (40775))))))));
                var_33 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) == (((3981325518379729267LL) + (((/* implicit */long long int) var_7))))));
                var_34 *= ((/* implicit */short) ((((/* implicit */int) max((var_9), (var_12)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_1), ((signed char)-102))))) ^ (max((((/* implicit */unsigned int) var_1)), (var_4)))));
                var_36 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U)))));
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (short i_16 = 0; i_16 < 21; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_19 = 0; i_19 < 21; i_19 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_1))) >= ((-(max((var_2), (var_5)))))));
                            arr_74 [i_16] [20ULL] [i_17] [i_16] [i_16] = ((/* implicit */unsigned int) var_3);
                        }
                        /* vectorizable */
                        for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            arr_77 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11)));
                            var_38 = ((/* implicit */int) var_1);
                            arr_78 [i_18] [i_16] [i_17] [i_16] [(unsigned char)1] [i_16] [i_15] = ((/* implicit */unsigned long long int) (+(var_7)));
                            var_39 = ((((/* implicit */int) (signed char)-35)) - (((/* implicit */int) var_10)));
                        }
                        for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (short)23707)) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)50994)))))));
                            var_41 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-35)), ((unsigned short)65535)))) | (min((-1176287006), (((/* implicit */int) (short)-19589))))));
                        }
                        for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
                        {
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17261)) | (-1398633571)))), (((8871228875354320246LL) << (((var_13) - (1168357219U))))))))));
                            var_43 ^= ((/* implicit */int) (_Bool)1);
                        }
                        var_44 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_10)))) != (((/* implicit */int) var_8)))) && (((((/* implicit */int) var_0)) == (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2)))))))));
                        var_45 = max((min((1385741876), (1398633570))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_11)))));
                    }
                    var_46 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) -1LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))))));
                    var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) min((min((var_4), (var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_10))))))))));
                    var_48 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4)))));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) var_7))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (var_4)))))))));
                }
            } 
        } 
    } 
}
