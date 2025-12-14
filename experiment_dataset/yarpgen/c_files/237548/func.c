/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237548
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
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-48))))));
        var_15 = arr_1 [i_0] [i_0 + 2];
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 - 1]))));
            var_16 -= (unsigned short)5709;
            arr_7 [i_1] = ((/* implicit */signed char) (unsigned char)204);
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)58))))) * (var_6)));
    }
    for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)74))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!((_Bool)1)))), (var_11)));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (max((432345564227567616ULL), (((/* implicit */unsigned long long int) arr_0 [i_4])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))))) ? (((/* implicit */int) arr_0 [i_3])) : ((-(((/* implicit */int) (unsigned short)6705)))))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_2])))))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) < (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_2])))))));
                                var_23 = arr_12 [i_5];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) var_10);
                                var_25 ^= ((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_9 [i_3 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) arr_17 [i_2] [i_2] [i_4] [i_2] [i_4]);
                                arr_31 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */signed char) var_10);
                                var_28 = ((/* implicit */int) min((((/* implicit */long long int) min(((-(((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) var_5))))), (min((((/* implicit */long long int) arr_26 [i_2] [i_2] [i_4] [i_2])), (min((arr_8 [i_2]), (((/* implicit */long long int) var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_11 = 4; i_11 < 18; i_11 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (unsigned int i_13 = 3; i_13 < 19; i_13 += 4) 
            {
                for (int i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    {
                        arr_42 [i_11] [i_11] [i_11] [i_11] = max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)151))))) ? (((((/* implicit */_Bool) (unsigned short)59826)) ? (((/* implicit */int) arr_5 [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)205)))) : (((((/* implicit */int) arr_13 [i_11] [i_11] [i_11])) / (((/* implicit */int) var_12)))))), (((/* implicit */int) arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
                        var_29 ^= ((/* implicit */unsigned long long int) arr_12 [i_11]);
                        var_30 -= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4))), (((/* implicit */long long int) arr_30 [i_11] [i_11] [i_11 + 1] [i_14 - 2] [i_11])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_11] [i_11] [i_11])))))));
                        var_31 = max((12307623209732075636ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)78)))) : (((/* implicit */int) max(((short)-14578), (((/* implicit */short) (signed char)-1)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 3) 
        {
            var_32 = ((/* implicit */unsigned short) min((min(((~(((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */int) arr_23 [i_11] [i_11] [i_11] [i_11])))), (1915052895)));
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 18; i_16 += 3) 
            {
                /* LoopSeq 4 */
                for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    var_33 = ((/* implicit */signed char) arr_13 [i_16] [i_16] [i_16]);
                    arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] &= ((/* implicit */long long int) var_6);
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    var_34 *= ((/* implicit */_Bool) var_12);
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59817))) : ((-(((((/* implicit */_Bool) var_12)) ? (arr_35 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11]))))))))))));
                }
                for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    var_36 = ((/* implicit */long long int) ((unsigned int) max((arr_36 [i_16] [i_16] [i_16]), (((/* implicit */signed char) arr_28 [i_11] [i_11] [i_11] [i_11] [i_11])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 3; i_20 < 16; i_20 += 1) 
                    {
                        arr_59 [i_11] [i_16] [i_16] = ((/* implicit */unsigned char) var_6);
                        var_37 = ((/* implicit */long long int) arr_35 [i_16] [i_16]);
                    }
                    var_38 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) ((unsigned char) 2816215746396744886ULL)))));
                }
                for (signed char i_21 = 2; i_21 < 19; i_21 += 2) 
                {
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((unsigned int) min((arr_44 [i_11 - 1]), (arr_44 [i_11 - 1])))))));
                    arr_62 [i_16] [i_16] [i_11] [i_16] [i_11] = ((/* implicit */long long int) (~(max((10052073302001151205ULL), (2816215746396744892ULL)))));
                    var_40 = ((/* implicit */long long int) 2816215746396744886ULL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        arr_66 [i_16] [i_16] = ((/* implicit */signed char) var_10);
                        var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
                    }
                }
                var_42 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_15 [i_11] [i_16] [i_11] [i_11])))), (((/* implicit */int) var_13))));
            }
            arr_67 [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)13418), (((/* implicit */short) arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))) | (max((arr_40 [i_11]), (((/* implicit */long long int) arr_56 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_61 [i_11] [i_11] [i_11] [i_15 - 1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (arr_61 [i_11] [i_11] [i_11] [i_15 - 1])));
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) var_3))));
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_24 = 3; i_24 < 17; i_24 += 3) 
            {
                for (unsigned short i_25 = 1; i_25 < 18; i_25 += 3) 
                {
                    {
                        var_45 = ((/* implicit */long long int) ((((long long int) (unsigned char)246)) == (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_11 + 2] [i_23])))));
                        var_46 = ((/* implicit */long long int) (~(((/* implicit */int) arr_68 [i_24 + 2] [i_23]))));
                        /* LoopSeq 1 */
                        for (signed char i_26 = 0; i_26 < 20; i_26 += 3) 
                        {
                            arr_79 [i_11] [i_11] [i_11] [i_11] [i_23] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                            var_47 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_11 + 2] [i_24 - 3] [i_24 - 3] [i_24 - 3] [i_24 - 3])) : (((/* implicit */int) (unsigned short)5700))));
                            var_48 = ((/* implicit */long long int) ((var_10) ? (((unsigned long long int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                            arr_80 [i_23] = ((/* implicit */unsigned char) arr_2 [i_24]);
                            var_49 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_77 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_26] [i_26] [i_11] [i_26])))))));
                        }
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_49 [i_11] [i_11] [i_11 + 1] [i_11 + 1])) << (((((/* implicit */int) (signed char)100)) - (76)))));
            arr_81 [i_23] = ((/* implicit */unsigned short) (short)-1620);
        }
        arr_82 [i_11] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11 - 4]))) / (15630528327312806719ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11 - 3])))));
    }
}
