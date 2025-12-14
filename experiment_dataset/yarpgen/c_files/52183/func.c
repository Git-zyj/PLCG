/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52183
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)12494), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)24655)) : (((/* implicit */int) (unsigned short)53042))))))) ? (((/* implicit */int) ((unsigned short) ((signed char) (short)31032)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)12494)) : (((/* implicit */int) (unsigned short)40856)))) > (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_10))))))))));
    var_21 = ((/* implicit */signed char) (((!((_Bool)1))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned short)57534)) | (((/* implicit */int) (short)-32757))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_17) != (((((/* implicit */int) var_14)) + (((/* implicit */int) var_11)))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_23 &= ((((/* implicit */_Bool) max((arr_2 [i_1 + 1] [i_1 - 2]), ((unsigned short)29895)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1])) : (((/* implicit */int) var_11)))) : (((((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)0)))) ^ (((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) var_9)))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)60499)) > (((/* implicit */int) (unsigned short)34324))))) > ((-(((/* implicit */int) (unsigned short)9))))))) ^ (max((((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) var_4)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_2 [i_2] [i_0]))))))));
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)40973)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_26 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)12493)) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_2] [i_1 + 1] [i_1] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [(unsigned short)6])));
                                var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [(signed char)17] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]), (arr_10 [10] [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4])))) ? (((((/* implicit */int) arr_5 [i_1 - 1])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_28 = ((/* implicit */int) (unsigned short)34324);
            var_29 ^= var_2;
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [i_0])) | (((/* implicit */int) var_16)))), (var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)52942)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_0] [i_5] [i_5] [18])) ? (((/* implicit */int) (unsigned short)53058)) : (((/* implicit */int) (signed char)66)))) : ((~(((/* implicit */int) arr_3 [i_5])))))) : (((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_4 [i_5])))))))));
        }
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_31 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (arr_2 [i_6] [(unsigned short)13])))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_10 [(unsigned short)5] [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */short) (_Bool)1))))) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) max((var_6), (arr_9 [i_6] [i_6] [i_6])))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_6] [i_7] [i_8])) ^ (((/* implicit */int) arr_2 [i_8] [i_8])))) | (((((/* implicit */int) (short)24007)) << (((((((/* implicit */_Bool) -1029364870)) ? (((/* implicit */int) arr_6 [i_7])) : (arr_15 [i_8]))) - (54665))))))))));
                /* LoopSeq 2 */
                for (short i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    arr_26 [i_9] [(_Bool)1] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) max((((short) (_Bool)1)), (((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)5424)))))))) * (((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)3598))))));
                    var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_9 - 2] [i_9] [i_9])) & (((/* implicit */int) ((short) (unsigned short)29895)))))) ? (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)65408)))) : (max((((/* implicit */int) ((98054621) < (((/* implicit */int) (short)-29250))))), (((((/* implicit */int) var_10)) * (2147483647)))))));
                }
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    var_34 = ((/* implicit */short) (unsigned short)65535);
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_23 [i_10] [i_10] [i_8] [i_7] [i_6]))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) (unsigned short)3607)) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_7] [i_8] [i_10])) : (((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6] [(short)9]))))));
                    var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_8])) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) (short)19833)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-14585))))))) ? (max((((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12834)) && (((/* implicit */_Bool) (unsigned short)53041))))))) : (((((/* implicit */_Bool) arr_8 [i_10] [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_8] [i_8] [i_7])) : (((/* implicit */int) arr_8 [i_6] [i_7] [i_8] [i_10]))))));
                }
                var_37 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_8] [i_7] [i_6] [(unsigned short)8])) >= (((/* implicit */int) arr_28 [i_6] [i_7] [i_7] [i_7] [i_8]))))) | (((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */int) arr_4 [i_8])) : (arr_15 [i_7])))));
            }
            arr_29 [i_6] [i_6] = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59702)))) < (((/* implicit */int) (short)-1))));
        }
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
        {
            arr_32 [i_6] [i_6] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_11] [i_11] [i_6]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((-1029364874) ^ (((/* implicit */int) (short)511)))) : (((((/* implicit */_Bool) arr_13 [i_11] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_6] [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) (short)32763)) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_7)) : (-1029364869))) : (((/* implicit */int) var_7))))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [i_11] [i_6]) ? (max((((/* implicit */int) var_16)), (1029364868))) : (((((/* implicit */_Bool) 1029364870)) ? (var_19) : (((/* implicit */int) var_13))))))) ? ((~(((/* implicit */int) (short)12306)))) : (((((arr_15 [i_6]) + (2147483647))) << (((((arr_15 [i_6]) + (1672271203))) - (9)))))));
            var_39 -= ((/* implicit */int) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_15 [i_6])))))), (((arr_16 [(short)0]) < (-235593964)))));
        }
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_35 [(unsigned short)9] [7] [(unsigned short)9] = ((/* implicit */short) ((((((/* implicit */int) (short)12330)) | (((/* implicit */int) (unsigned short)65535)))) / (((((/* implicit */_Bool) (short)7635)) ? (((/* implicit */int) max(((short)29718), (arr_0 [i_6])))) : (((arr_1 [i_6]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [0] [i_6]))))))));
            var_40 = max(((((_Bool)1) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (short)-2416)))), (((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) arr_5 [i_12])) : (((/* implicit */int) arr_5 [i_6])))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_19))) ? (((/* implicit */int) (unsigned short)17945)) : (max((((int) arr_24 [i_6] [i_14])), (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_14)) : (var_17)))))));
                        arr_43 [i_6] [i_13] [i_12] [i_6] [i_6] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)53800)) : (((/* implicit */int) (short)-29747)));
                        var_42 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) < (((/* implicit */int) arr_5 [i_6])))) ? (((((/* implicit */_Bool) (unsigned short)29982)) ? (((/* implicit */int) arr_10 [i_6] [i_12] [i_12] [i_13] [i_14] [i_14])) : (((/* implicit */int) arr_1 [i_13])))) : (((/* implicit */int) ((((((/* implicit */int) (short)29718)) / (((/* implicit */int) arr_7 [i_12] [i_12] [i_12])))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)47464)) : (((/* implicit */int) var_16)))))))));
                    }
                } 
            } 
            var_43 = ((short) ((((/* implicit */_Bool) -455519639)) ? (((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_40 [(unsigned short)1] [i_12] [i_12] [i_12]))));
        }
        arr_44 [i_6] [i_6] = ((/* implicit */int) (unsigned short)0);
        var_44 ^= ((((/* implicit */int) arr_34 [i_6] [i_6] [i_6])) | (((((/* implicit */int) ((short) (short)19567))) * (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_2)))))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) && (((/* implicit */_Bool) arr_19 [i_6] [i_6]))))) - (((((/* implicit */_Bool) 13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_6] [i_6]))))));
    }
    for (signed char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        arr_48 [(short)1] [(_Bool)1] = ((((((/* implicit */_Bool) arr_16 [i_15])) ? (arr_16 [i_15]) : (arr_16 [i_15]))) / ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46728)))));
        var_46 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (_Bool)0))), (((((/* implicit */_Bool) (short)-30878)) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) (short)-2416)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (signed char i_16 = 2; i_16 < 13; i_16 += 2) 
    {
        arr_53 [i_16] = max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)47464)))), (((/* implicit */int) max((max((arr_49 [i_16]), ((unsigned short)43818))), (((/* implicit */unsigned short) arr_0 [i_16]))))));
        var_47 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_16 - 2])) + (((/* implicit */int) arr_0 [i_16 - 2])))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_0 [i_16 - 1])))))));
    }
    var_48 = ((/* implicit */_Bool) max((((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) + (((/* implicit */int) max(((unsigned short)23748), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1517231214)) ? (((/* implicit */int) (short)-1)) : (-1095664716)))) ? (((/* implicit */int) (_Bool)1)) : (1608439491)))));
}
