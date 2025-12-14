/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24963
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60130)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)5406))))) || (((/* implicit */_Bool) ((unsigned short) var_7))))) ? (((/* implicit */int) (short)6014)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) % (((((/* implicit */_Bool) 2570440083844449470ULL)) ? (5131214158667352368LL) : (((/* implicit */long long int) -647266825))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-986)) : (((/* implicit */int) arr_3 [i_0 + 3])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_18 ^= ((/* implicit */short) (~(((/* implicit */int) var_15))));
                        var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 13U))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) <= (arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 - 2])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2] [i_0 - 2] [i_0] [i_2])) >> (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_2] [i_1])) < (((/* implicit */int) arr_5 [i_4] [i_2] [i_1])))))));
                        arr_15 [i_2] [i_1] [i_2] [(unsigned char)18] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) -2147483622)) : (var_7)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2147483631))) : (((((/* implicit */_Bool) 255U)) ? (10612590496589835170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    }
                    arr_16 [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3 - 1])) | (((/* implicit */int) (unsigned short)60141))));
                }
                for (signed char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_14))));
                    var_22 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) arr_0 [i_0])))) << (((((/* implicit */int) (unsigned char)100)) - (82)))));
                    var_23 *= ((((/* implicit */_Bool) 5988319243025050876ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1925100545));
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)101)) <= (((/* implicit */int) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_17 [i_0])) : (arr_7 [i_2] [i_1] [i_2]))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                }
                for (signed char i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    var_25 &= var_15;
                    var_26 = ((/* implicit */signed char) arr_11 [i_0] [i_1]);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) (short)17513)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)405))) : (arr_2 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) >= (var_9)))))));
                    var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (unsigned char)95)) : (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)160))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_7 + 3] [i_2] [i_8] [i_2])) : (((/* implicit */int) (unsigned char)28))));
                            var_29 *= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)955)))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [10ULL])) ? (((/* implicit */int) arr_10 [i_0 - 1] [4ULL])) : (((/* implicit */int) (short)-32767)))))));
                        }
                    } 
                } 
                arr_26 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((var_5) % (8924825428452408359ULL)));
            }
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [12U] [i_1] [i_1])) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8924825428452408359ULL)) ? (((/* implicit */int) var_1)) : (arr_22 [i_0] [(signed char)18] [i_1] [i_0] [i_1] [i_0])))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)63))))));
            arr_31 [i_0] [i_9] = ((/* implicit */long long int) ((1729382256910270464ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2])))));
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
        {
            arr_35 [i_0] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) arr_10 [i_0] [(unsigned short)12])) : (((/* implicit */int) (short)32766))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_10] [i_0]))));
        }
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 683419401)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)123)))) != (((/* implicit */int) ((unsigned short) 15ULL))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_12 = 3; i_12 < 15; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_15 = 1; i_15 < 17; i_15 += 1) 
                        {
                            arr_47 [i_11] [i_11] [i_13] [i_11] [i_11] = arr_27 [i_12] [i_11];
                            var_35 -= ((/* implicit */unsigned long long int) ((signed char) arr_42 [i_11] [i_15] [i_15] [i_15 + 1] [i_12 - 2] [i_11]));
                        }
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_36 &= ((/* implicit */unsigned long long int) arr_40 [i_11] [i_12] [i_14] [i_14]);
                            var_37 |= ((/* implicit */signed char) ((short) arr_7 [i_16] [i_12] [i_13]));
                        }
                        var_38 = ((/* implicit */unsigned char) arr_34 [i_11]);
                        var_39 = var_7;
                    }
                } 
            } 
        } 
        arr_50 [i_11] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) >> (((((/* implicit */int) ((signed char) var_14))) + (114)))))));
    }
}
