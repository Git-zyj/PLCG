/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226842
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = (-(((((/* implicit */_Bool) (unsigned char)36)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
        var_11 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)239)))), (min((((/* implicit */unsigned int) max((var_0), (((/* implicit */short) (unsigned char)133))))), (min((arr_1 [10U]), (((/* implicit */unsigned int) (unsigned char)226))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            for (short i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_10 [i_3 - 2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) min((((arr_6 [i_2]) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_1] [i_2]))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_2 [i_1] [i_3])))) : ((~(((/* implicit */int) (_Bool)1))))))));
                    var_12 = ((/* implicit */signed char) min((((/* implicit */short) (((+(((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))) == (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2]))))))), (min(((short)-17744), (((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)255)))))))));
                    arr_11 [i_2] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)249)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32745))))))))));
                    arr_12 [i_1] [i_2 - 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)12754))))) % (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_8 [i_2] [i_2] [i_3]))))))) ? ((+(((/* implicit */int) min((var_8), (((/* implicit */short) arr_9 [i_1] [i_2]))))))) : (((/* implicit */int) max((((/* implicit */short) var_4)), ((short)30682))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)128)), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) arr_5 [(_Bool)1])) : (-1367992135744356106LL))))), (((/* implicit */long long int) min((((/* implicit */int) arr_6 [(unsigned char)12])), ((-(((/* implicit */int) (short)32752))))))))))));
                }
            } 
        } 
        arr_13 [(short)19] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) / (max((((4294967295U) * (261632U))), (((/* implicit */unsigned int) ((arr_5 [(unsigned char)8]) == (7U))))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (9U)));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_23 [i_5] [(short)11] [(short)7] [i_1] [i_4] [i_5] = (-(max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_21 [i_5] [i_5] [i_5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (min((var_5), (((/* implicit */unsigned int) (short)32767)))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0)))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_4] [i_5])))))))) == (var_7)));
                        arr_24 [(short)5] [i_5] [i_5] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_20 [i_1] [i_4 - 1] [0U])) ? (((/* implicit */int) arr_8 [i_5] [i_4 - 1] [1U])) : (((/* implicit */int) (unsigned char)129))))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_16 += ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), (max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_1))))));
            arr_28 [(unsigned char)14] [11U] [13U] = ((arr_21 [i_1] [i_1] [i_7] [i_7]) > ((((!(((/* implicit */_Bool) var_7)))) ? (min((arr_26 [i_7] [i_1]), (((/* implicit */unsigned int) (unsigned char)127)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))))));
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_32 [i_1] &= ((/* implicit */unsigned int) arr_22 [i_8] [i_8]);
            /* LoopSeq 4 */
            for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) /* same iter space */
            {
                arr_35 [i_1] [i_9] [i_9] = ((/* implicit */signed char) (((-(4294967287U))) ^ (((unsigned int) var_5))));
                arr_36 [i_1] [i_8] [i_9] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 7U)) ? (arr_31 [i_1] [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))))));
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */long long int) 14U)) : (min((2394615055904647846LL), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((4194303U), (var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (365362147U))) : (min((955534132U), (((/* implicit */unsigned int) var_4)))))))));
                var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_1])) ? (4028216570U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 1) 
                    {
                        {
                            arr_42 [i_1] [i_9] [3U] [i_10] [(_Bool)1] = ((((_Bool) 10U)) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15593))) : (201326592U))) << (((((/* implicit */int) var_4)) - (40))))) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 3071482224U)) ? (1791112120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24))))))));
                            arr_43 [10U] [i_8] [i_11] [(_Bool)1] [(_Bool)1] [i_8] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (min((0U), (1791112120U))) : (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (min((4194291U), (((/* implicit */unsigned int) var_9)))) : (15U)));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 3; i_12 < 16; i_12 += 3) /* same iter space */
            {
                arr_47 [i_1] [7LL] [(short)17] [(short)17] = ((/* implicit */short) max(((~(var_7))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7))))))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 4; i_13 < 18; i_13 += 1) 
                {
                    arr_50 [i_1] [i_13] [i_1] = ((/* implicit */short) min(((~(((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_27 [i_13] [i_13 - 4]))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (short)-15593))));
                }
                for (unsigned char i_14 = 4; i_14 < 19; i_14 += 3) 
                {
                    arr_53 [i_14] = ((/* implicit */short) 4294967287U);
                    arr_54 [i_1] [(_Bool)1] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (short)-32100)) : (((/* implicit */int) var_9))))));
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-22837)))) >> (((/* implicit */int) arr_46 [12U] [i_14 + 1] [(unsigned char)2] [i_8]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_52 [i_12 - 3] [i_12 - 2] [(short)0] [14U] [i_8])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))) : (min((((arr_39 [i_1] [i_8] [i_8] [i_14 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned int) var_3))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_15 = 3; i_15 < 16; i_15 += 3) /* same iter space */
            {
                arr_57 [i_8] = var_1;
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_15 - 1] [6U] [(_Bool)1])) >> (((107955595U) - (107955589U)))));
                arr_58 [9U] [9U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (unsigned char)237)))) : ((+(((/* implicit */int) arr_30 [7U] [i_15] [i_15 + 2]))))));
                var_22 = ((arr_40 [i_15 + 2] [i_15 + 2] [i_15] [i_15] [i_15 + 2] [i_15]) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13666))));
            }
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                var_23 -= (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15592))) : (arr_51 [(_Bool)1] [i_16]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5))))))));
                arr_61 [(_Bool)0] [i_8] [i_8] [i_16] = ((unsigned int) ((((/* implicit */int) arr_44 [i_16] [i_8] [i_1])) << (((((/* implicit */int) var_3)) - (128)))));
            }
            arr_62 [(short)7] [i_1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-16384))))) ? (((/* implicit */int) (short)15608)) : (((/* implicit */int) ((unsigned char) var_4))))) > (((/* implicit */int) arr_30 [i_1] [i_1] [i_8]))));
            arr_63 [i_1] [i_1] [(short)7] = ((/* implicit */short) max(((~(4294967295U))), (((((/* implicit */_Bool) arr_56 [i_8] [i_1] [(unsigned char)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_56 [i_1] [i_8] [i_8])))));
        }
    }
    for (long long int i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
    {
        arr_66 [i_17] = ((/* implicit */unsigned int) min((max((((/* implicit */short) var_9)), (min((((/* implicit */short) (signed char)120)), ((short)-5))))), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25778)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_17] [i_17] [i_17]))) : (var_7)))) || (((/* implicit */_Bool) arr_41 [8U] [i_17] [i_17] [i_17] [i_17] [(unsigned char)3] [i_17])))))));
        arr_67 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) min((((/* implicit */short) var_3)), (var_0))))));
        var_24 = min((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294959104U))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (min((var_7), (2967490161U))))));
    }
    for (long long int i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */short) (+(min((arr_17 [i_18] [i_18]), (arr_17 [i_18] [14U])))));
        arr_70 [(short)6] [i_18] &= ((/* implicit */unsigned int) (+(((-8781084881905492524LL) | (((/* implicit */long long int) ((/* implicit */int) (short)9680)))))));
    }
    var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) min((4294967281U), (var_5))))))));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)3))));
}
