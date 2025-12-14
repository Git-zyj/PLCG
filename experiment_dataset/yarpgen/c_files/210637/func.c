/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210637
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
    var_10 &= ((/* implicit */short) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_11 *= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned long long int) ((492007199) * (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_9))))));
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_3)))));
                arr_5 [i_0] [i_0] [(unsigned char)8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (var_9))) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [0ULL] [0ULL])), (1978357354)))) : (11412697283825390618ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0])), (var_2)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1 - 1] [10])))))));
                var_13 = ((/* implicit */int) ((min((arr_2 [i_1 + 2] [i_0]), (arr_2 [i_1 + 2] [i_0]))) ? (((arr_2 [i_1 + 2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1 + 2] [i_0]))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)36147)))))))));
                                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1] [i_2])) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2)))) || (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_0)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (short)4507);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)1536))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) | (var_0)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)28946))))) & (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_0] [10ULL] [i_1] [i_5] [(short)4]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_1] [i_5 - 2] [(unsigned char)0])))))) || (((((/* implicit */int) arr_11 [(_Bool)1])) >= (((/* implicit */int) arr_14 [(unsigned short)6] [i_0] [(unsigned short)6])))))))));
                        var_19 = max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) ((2147483647) != (((/* implicit */int) (signed char)96))))) : (min((((/* implicit */int) (unsigned short)44249)), (var_0)))))));
                        var_20 *= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned char)16])) != (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))), (((((arr_9 [i_0] [i_1] [i_5] [i_6 - 1] [(_Bool)1] [i_5]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_6 - 1] [(_Bool)1] [(unsigned short)20] [(unsigned short)20] [i_1] [i_0])))) & (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [(unsigned char)14])) <= (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-4500)), ((-2147483647 - 1))))) : (var_3))));
                            var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) arr_8 [i_0] [i_1] [i_0] [i_5 - 2] [i_6] [i_7])), ((short)-4500)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */_Bool) ((((arr_7 [i_0]) + (2147483647))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)45394)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_0]))))))));
                            arr_22 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), (((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_0]))))))))));
                            var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_0])))), (((((-290733293) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-4507)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) : (var_9))), (((/* implicit */unsigned long long int) arr_10 [i_5 - 2] [i_8 - 2] [i_8] [i_8])))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((var_0) & (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)31))));
                            arr_26 [9] [i_0] [i_5 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)154)), (var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (signed char)31)))))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_15 [i_1] [(unsigned short)20] [i_6] [i_8 - 2]);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            arr_29 [i_0] = ((/* implicit */unsigned short) 3349735714442086079ULL);
                            var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 15097008359267465541ULL)) ? (((/* implicit */int) (unsigned short)50967)) : (((/* implicit */int) var_1))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_32 [i_0] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_5 - 2] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_14 [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_5 + 1] [i_6 - 1] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((+(var_9))) : (((/* implicit */unsigned long long int) (-(-290733305))))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */int) arr_25 [i_1] [i_5] [i_6 - 1] [i_10]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1 + 2] [i_1 + 2] [i_5] [i_5 - 1] [i_6 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)3))))))))));
                            var_29 -= (unsigned short)24990;
                            arr_33 [i_0] [i_1] [i_5 + 1] [i_6 - 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) (unsigned short)8))));
                            arr_34 [i_10] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_6);
                        }
                    }
                    arr_35 [i_0] [(_Bool)1] [i_5] [i_5] &= ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1))))) : (var_3)));
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 19; i_11 += 4) 
                {
                    var_30 = ((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_0]);
                    var_31 = ((/* implicit */_Bool) (+(arr_38 [i_0] [i_11 - 4] [i_11 + 1])));
                    arr_39 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) var_2))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-4515)) : (var_2)))));
                    var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_36 [i_0] [i_1 + 2] [i_11])) : (((/* implicit */int) arr_17 [i_1 - 3]))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_1)));
}
