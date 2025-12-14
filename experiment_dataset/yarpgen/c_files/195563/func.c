/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195563
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)249))));
                arr_7 [i_1] [i_1] [i_0] = 6638874615891770685LL;
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-9135970205725676691LL))) ^ (((/* implicit */long long int) max((((((((/* implicit */int) var_2)) + (2147483647))) << (((515608231) - (515608231))))), (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(-515608232)))) ? (-515608225) : (((/* implicit */int) arr_9 [i_3] [i_3 - 1] [i_3 - 1] [i_3]))))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_14 [i_3] [i_1] [i_2] [i_3])) : (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (2147483647)))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47099)) && (((/* implicit */_Bool) (unsigned short)572))))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != ((+(((/* implicit */int) var_3)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 3; i_5 < 6; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) min((((((/* implicit */int) (unsigned short)18450)) / (((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) (unsigned short)64973)))));
                            var_17 = ((/* implicit */_Bool) max((((short) ((((/* implicit */_Bool) 6638874615891770685LL)) ? (3855290407U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_2 [i_0] [i_2])));
                            arr_25 [i_0] [i_1] [i_1] [i_0] [i_6] |= ((/* implicit */unsigned short) (-(2147483647)));
                            arr_26 [i_0] [i_0] &= ((/* implicit */long long int) 373687497);
                        }
                        var_18 = ((/* implicit */long long int) (~(((((/* implicit */int) var_9)) & (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_0]))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 3; i_7 < 6; i_7 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1LL)))) ? (((/* implicit */int) ((515608231) != (((/* implicit */int) (signed char)26))))) : (-515608233)));
                        var_20 ^= ((/* implicit */signed char) 0ULL);
                        var_21 = ((/* implicit */unsigned char) (unsigned short)578);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-515608232)))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-115))))));
                    }
                    for (long long int i_8 = 3; i_8 < 6; i_8 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_1)))));
                        var_24 -= (~(((long long int) var_7)));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 3; i_9 < 6; i_9 += 2) /* same iter space */
                    {
                        arr_35 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (8145076652324316432ULL)));
                        arr_36 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) 1326612596U));
                        var_25 &= ((/* implicit */long long int) ((signed char) arr_19 [i_9 + 4] [i_9 + 3] [i_9 + 3] [i_9 + 4]));
                    }
                }
                for (unsigned short i_10 = 1; i_10 < 7; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_10 - 1])) | (((/* implicit */int) (_Bool)0))));
                        var_27 = (+(((/* implicit */int) (unsigned short)5772)));
                        var_28 = ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_1] [i_10] [i_11]);
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1231965953)) ? (746684106583578529LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))))) ? (((((/* implicit */_Bool) -6186002010268864421LL)) ? (arr_21 [i_0] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64963))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10 + 1] [i_10 + 1] [i_10]))));
                        arr_41 [i_0] [i_1] [i_1] [(unsigned short)6] [i_1] &= ((/* implicit */_Bool) var_5);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_44 [3LL] [i_10] [3LL] [(signed char)0] = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_4 [i_12 - 1] [i_12 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_4 [i_12 - 1] [i_12 - 1] [i_10 + 2])) : (((/* implicit */int) arr_42 [i_12 - 1] [i_1] [i_10 - 1] [i_12] [i_1]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2691)) << (((((/* implicit */_Bool) (unsigned short)44157)) ? (0LL) : (0LL)))));
                            arr_48 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_10 + 1] [i_12] [i_12 - 1] [i_0]) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) arr_9 [i_10 + 3] [i_10 + 3] [i_12 - 1] [i_12]))))) ? (((((/* implicit */_Bool) (-(-6186002010268864418LL)))) ? (((((/* implicit */int) var_10)) / (-515608210))) : (((((/* implicit */_Bool) 1533372746)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_10] [i_0] [i_13] [i_12 - 1])))))) : (((/* implicit */int) ((((/* implicit */int) ((short) var_6))) != (((/* implicit */int) (_Bool)0)))))));
                            var_31 = ((/* implicit */unsigned short) (+((-(arr_29 [i_0])))));
                            var_32 &= ((/* implicit */short) ((long long int) ((var_7) | (((/* implicit */unsigned int) min((((/* implicit */int) (short)16384)), (-515608206)))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            arr_51 [i_0] [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((-515608233) != (((/* implicit */int) arr_20 [i_14] [i_12 - 1] [i_1] [i_0])))))))));
                            var_33 += min((((/* implicit */long long int) ((unsigned short) (unsigned char)255))), ((~(6165989750845980810LL))));
                            var_34 = ((/* implicit */short) min((((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))))));
                        }
                        for (int i_15 = 4; i_15 < 8; i_15 += 4) 
                        {
                            var_35 &= ((/* implicit */unsigned int) var_3);
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_43 [i_10] [i_1] [i_1])) != (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) : (arr_40 [i_0] [i_1] [i_10 + 3] [i_15]))))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10] [i_12] [i_10 - 1] [i_10]))))) ^ ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_49 [i_0] [i_10] [i_0]))))))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ ((-(var_0)))));
                    var_38 = ((/* implicit */_Bool) var_8);
                    var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [(unsigned short)3] [i_1] [i_0]))) : (arr_50 [i_10] [i_1] [i_1] [i_0] [i_10])))) ? (((-515608230) / (((/* implicit */int) var_4)))) : (((/* implicit */int) (signed char)-21)))))));
                }
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1002589997)))) ? (-1159809124070251235LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_8)))) ? (((((/* implicit */int) var_12)) - (((/* implicit */int) var_4)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)64)), ((unsigned short)43672))))))))))));
}
