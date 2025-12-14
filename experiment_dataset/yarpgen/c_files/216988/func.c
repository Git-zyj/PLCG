/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216988
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
    var_20 |= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(_Bool)1])) << (((((/* implicit */int) var_19)) - (48467)))))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0]))))))) ? ((((((-(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> ((((-(var_15))) - (2811983344U))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
    }
    var_23 = ((/* implicit */unsigned char) (unsigned short)28303);
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)12333)) == (((/* implicit */int) ((_Bool) 4546337680511732775LL)))))))));
                    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (2147483644LL)))) ? (max((((/* implicit */unsigned int) var_13)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), ((+(min((-2147483644LL), (2147483631LL)))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_12 [i_4] [i_3] [i_3] [(signed char)7] = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_2)))))), (min(((~(-2147483640LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                        var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_11 [i_4] [i_3] [(signed char)7] [i_1])) == (((/* implicit */int) arr_11 [i_4] [i_3] [i_2 - 3] [i_1])))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_7 [i_1] [i_3] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_2 + 2])))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_15 [i_3] [i_4] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_3] [i_2 - 3] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_5 [i_2] [i_2 + 1] [i_2])) : (min((((/* implicit */long long int) (short)-9205)), (692478804097944713LL))))) : (((/* implicit */long long int) (-((~(((/* implicit */int) var_10)))))))));
                            arr_16 [i_3] [i_4] [i_3] [i_3] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (unsigned char)124);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned int) arr_1 [i_2 + 1])), (var_8)))))));
                            arr_17 [i_3] [i_2 - 4] [i_3] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) -870263843)), (var_0))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_4] [i_3] [i_2 - 4] [i_1]))))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) min((((/* implicit */short) arr_4 [(signed char)3] [(short)16] [i_1])), (var_2)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [(signed char)3] [i_3] [i_2] [i_1]))))), ((-(var_9))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            arr_22 [i_4] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), ((unsigned char)131)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_6] [i_3] [i_2]))))) ? (((unsigned int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)145)), (var_6))))) == (arr_5 [i_2] [i_2 + 2] [i_2 + 2]))))));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) var_7);
                            arr_26 [i_3] [i_4] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((int) ((((/* implicit */int) arr_25 [i_7] [i_7] [i_4] [(signed char)18] [i_2] [i_2] [i_1])) != (((/* implicit */int) arr_13 [(short)6] [i_4] [(short)6] [i_1] [i_1]))))), ((~(((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_3)))))))));
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) >= (arr_14 [i_7] [i_7] [16U] [i_7] [i_7] [i_2 + 1]))) ? (min((((/* implicit */unsigned int) arr_21 [i_3] [i_3])), (arr_14 [i_7] [i_7] [i_7] [i_4] [i_4] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_2 - 1] [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 - 4])), (arr_19 [i_3])))))));
                        }
                        arr_28 [i_3] [i_3] = ((/* implicit */short) ((unsigned char) max((((/* implicit */signed char) var_13)), (arr_25 [i_3] [i_2 - 3] [(unsigned char)5] [i_2] [i_2 - 1] [i_2 - 2] [i_2]))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        var_30 *= ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))))), (var_0))));
                        arr_31 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max(((-(arr_24 [i_8] [i_3] [i_3] [i_2 + 1] [i_2 - 4] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_2 - 3] [(unsigned char)8])) ? (((/* implicit */int) arr_30 [i_8 - 1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_8])))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1)), (var_8)))) ? (((/* implicit */unsigned int) ((int) var_4))) : (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_7))))));
                            var_33 = ((/* implicit */short) max((var_19), (((unsigned short) ((((((/* implicit */int) (signed char)-50)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (14))))))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) arr_4 [i_10] [i_10 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_10] [i_10 - 2] [i_2 + 1])) : (((/* implicit */int) var_4)))) : (((((((/* implicit */int) arr_4 [i_10] [i_10 + 2] [i_2 + 1])) + (2147483647))) >> (((2147483644LL) - (2147483616LL)))))));
                            var_35 = ((((/* implicit */_Bool) (~(var_8)))) && (((/* implicit */_Bool) ((unsigned int) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_8 [i_9]))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_36 &= ((/* implicit */short) (unsigned char)132);
                            var_37 = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) ((-2147483644LL) == (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3] [i_3] [i_2] [i_1])))))), (((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
                            arr_40 [i_11] [i_9] [i_9] [(_Bool)1] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) arr_13 [i_11] [i_2 - 1] [i_2 - 1] [i_2 - 4] [i_2 - 4]))), (((((/* implicit */_Bool) (-(arr_14 [i_11] [i_9] [i_9] [i_3] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_32 [i_2 + 2] [i_2] [(unsigned char)6] [i_2 + 1])))));
                            arr_41 [i_11] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) arr_39 [i_3] [i_9] [i_3] [i_2 - 4] [i_3]);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)123)))))))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_45 [i_3] [i_2] [(unsigned char)4] [i_2] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_17))))))))));
                            var_39 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_34 [i_3] [i_9] [i_9] [i_1] [i_2 + 1] [i_1] [i_3]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_8)))))))));
                        }
                        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((min((((/* implicit */short) var_18)), ((short)7653))), (var_7))))));
                        arr_46 [i_2] [i_2] [(signed char)4] [i_2] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (arr_20 [i_3] [i_3] [i_2] [i_1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_19)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_32 [i_2 - 2] [i_3] [i_2 - 2] [i_1])))));
                        arr_47 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) -1LL)));
                    }
                }
            } 
        } 
        var_41 -= ((/* implicit */unsigned long long int) max((max((arr_24 [i_1] [(short)0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)19))))))), (((/* implicit */long long int) var_12))));
    }
    for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_42 = ((/* implicit */short) min((max((((/* implicit */long long int) (short)14769)), (arr_34 [i_14] [i_14] [15ULL] [i_14] [i_13] [i_13] [i_14]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)159)))))));
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ ((+(arr_21 [i_14] [i_14])))));
            arr_54 [i_14] [i_14] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_14 - 1] [i_14] [i_14] [i_14] [i_13] [i_13])) != (((/* implicit */int) var_18))))), (arr_23 [(short)11] [(short)11] [i_14 - 1] [(short)11] [21LL]))), (((/* implicit */unsigned long long int) (signed char)76))));
            var_44 += ((/* implicit */_Bool) ((short) max((min((((/* implicit */unsigned long long int) (short)-1)), (8455596279255527475ULL))), (((/* implicit */unsigned long long int) (short)14105)))));
        }
        for (short i_15 = 3; i_15 < 8; i_15 += 4) 
        {
            arr_59 [i_15] = ((/* implicit */unsigned int) (+((-(arr_21 [i_15] [i_15])))));
            arr_60 [i_15] [i_15] = ((/* implicit */long long int) ((_Bool) ((unsigned char) arr_33 [i_15 + 1] [i_15 + 3])));
            var_45 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_10 [(unsigned short)17] [(short)14] [i_13] [i_13] [i_13])) >> (((((/* implicit */int) (unsigned char)132)) - (108)))))))));
            arr_61 [i_15] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-7653))));
            arr_62 [(short)0] [(short)0] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_51 [i_15 + 1] [i_15 + 1] [i_15 + 3])))));
        }
        for (short i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            arr_66 [i_16] [i_13] [i_13] = var_16;
            var_46 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_4))))) <= (var_9))));
        }
        var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_3 [i_13] [i_13]))))) ? (((/* implicit */int) max((arr_3 [i_13] [i_13]), (arr_3 [i_13] [i_13])))) : ((~(((/* implicit */int) (signed char)-19))))));
    }
    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
    {
        arr_69 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_2)), (var_15))), (((/* implicit */unsigned int) max((-1863056424), (((/* implicit */int) var_5)))))))) ? (max((max((((/* implicit */unsigned long long int) var_17)), (var_14))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [i_17] [i_17]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) * (min((var_9), (((/* implicit */unsigned int) (unsigned char)123)))))))));
        arr_70 [(signed char)3] = min((((/* implicit */short) (unsigned char)153)), (max((arr_6 [i_17]), (((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1))))))));
    }
    var_48 = ((/* implicit */signed char) var_13);
}
