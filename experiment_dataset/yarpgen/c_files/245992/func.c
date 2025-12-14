/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245992
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_3))));
                    }
                    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)1268)) <= (((/* implicit */int) var_1))));
                        var_18 = ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [(signed char)13] [i_4 + 4] [i_4])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_4 - 1])));
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_1] [(unsigned short)8] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) arr_19 [(short)3] [i_1] [i_2])) : (var_4)));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) var_6);
                        var_19 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_20 = ((/* implicit */int) var_15);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)55)) : ((-(((/* implicit */int) var_7))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) (short)17249)) * ((+(((/* implicit */int) (unsigned short)10))))));
            arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)129)) < (-1971254594)));
            arr_26 [i_6] [(unsigned short)3] [i_6] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0]);
            arr_27 [20ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2] [(unsigned short)11])) && (((/* implicit */_Bool) var_13))));
            arr_28 [i_6] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(-1971254595)));
        }
    }
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        for (short i_8 = 4; i_8 < 19; i_8 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_7] [i_7] [15LL])) ^ (((/* implicit */int) max((((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_7] [i_7] [(unsigned short)20])) || (((/* implicit */_Bool) arr_3 [i_8] [i_8] [(signed char)19])))), ((((_Bool)1) && (((/* implicit */_Bool) var_5)))))))));
                arr_33 [i_8] = ((/* implicit */unsigned int) 1971254593);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            {
                arr_39 [i_9] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0));
                arr_40 [i_9] [i_10] = arr_8 [i_9] [i_9] [i_9];
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 7; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 6; i_12 += 2) 
                    {
                        {
                            arr_46 [i_9] [i_9] [i_11] [i_9] [i_9] = ((/* implicit */unsigned long long int) (short)20943);
                            arr_47 [(unsigned short)4] [(unsigned short)4] [(short)2] [i_11] [i_12] [i_10] = ((/* implicit */unsigned char) arr_3 [i_9] [i_10] [i_12]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_13 = 0; i_13 < 19; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                {
                    arr_56 [i_14] = ((/* implicit */unsigned short) ((short) min(((!(((/* implicit */_Bool) arr_19 [i_13] [i_15] [i_15])))), (((((/* implicit */int) (unsigned char)185)) > (((/* implicit */int) arr_29 [i_14] [i_15])))))));
                    var_24 = ((/* implicit */unsigned long long int) ((short) (~(arr_24 [i_13] [i_13]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                {
                    arr_63 [i_13] [i_16] [(unsigned short)12] [i_17] = ((/* implicit */unsigned char) arr_12 [i_13] [i_13] [i_17] [i_17] [i_17] [i_17]);
                    var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) max((400039428U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))) && (((((/* implicit */_Bool) 3114083888U)) && (((/* implicit */_Bool) max((var_13), (((/* implicit */short) (unsigned char)255)))))))));
                    var_26 = -1971254576;
                    arr_64 [i_17] [i_17] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))), (-1971254593)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-72)))))))))));
                    var_27 = min((min((((/* implicit */int) arr_32 [i_17] [i_16] [i_13])), (max((-1971254594), (((/* implicit */int) (unsigned char)32)))))), (((/* implicit */int) var_15)));
                }
            } 
        } 
        var_28 -= (unsigned short)56217;
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_18] [i_18] [i_18]))));
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_30 = arr_66 [(short)2];
            var_31 += arr_22 [i_18] [i_18] [(short)18];
        }
        /* LoopSeq 3 */
        for (long long int i_20 = 2; i_20 < 9; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_21 = 1; i_21 < 7; i_21 += 3) 
            {
                for (long long int i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    {
                        arr_80 [i_18] [(_Bool)1] [i_18] [i_22] = (+(((/* implicit */int) (unsigned short)0)));
                        arr_81 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned short) (unsigned char)245);
                        arr_82 [i_18] [(signed char)8] [i_18] [i_18] [i_18] = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned char)210)) > (((/* implicit */int) (unsigned short)4511))))));
                        arr_83 [i_18] [2ULL] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) arr_41 [i_18] [i_22] [i_21] [(signed char)8]);
                    }
                } 
            } 
            var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)10)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)16145))))));
            arr_84 [i_18] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)-72)))))));
            var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_57 [i_20] [i_18])))));
            arr_85 [(unsigned char)2] = ((/* implicit */_Bool) (unsigned char)255);
        }
        for (int i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_31 [(unsigned char)8]))));
            arr_88 [i_18] [i_23] = ((/* implicit */unsigned char) (unsigned short)51533);
        }
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            arr_91 [i_18] [i_24] [i_18] = ((/* implicit */long long int) arr_60 [i_18] [i_24] [i_18] [i_24]);
            /* LoopNest 3 */
            for (short i_25 = 2; i_25 < 9; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    for (int i_27 = 1; i_27 < 7; i_27 += 4) 
                    {
                        {
                            var_35 ^= ((/* implicit */unsigned short) ((long long int) (unsigned char)252));
                            var_36 = 1971254598;
                            arr_98 [i_27] [i_26] [i_25] [i_24] [i_18] [i_18] = ((/* implicit */int) ((unsigned short) (short)-26527));
                            var_37 ^= ((/* implicit */unsigned short) (signed char)-124);
                            var_38 = ((/* implicit */short) ((unsigned char) (unsigned char)255));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_28 = 0; i_28 < 17; i_28 += 2) 
    {
        arr_101 [i_28] = ((/* implicit */unsigned char) -1971254594);
        arr_102 [(unsigned char)14] = min((((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_50 [i_28] [i_28]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))));
        /* LoopSeq 2 */
        for (int i_29 = 1; i_29 < 15; i_29 += 2) 
        {
            arr_106 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_29 + 2] [i_29] [i_29]))))) >= (((/* implicit */int) ((((/* implicit */int) arr_104 [i_29 + 2] [(unsigned char)16])) == (((/* implicit */int) arr_32 [i_29 + 2] [i_29] [i_29])))))));
            arr_107 [i_28] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) min((6585538128270385267LL), (((/* implicit */long long int) (signed char)63)))))));
            var_39 = ((/* implicit */long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
            var_40 = ((/* implicit */unsigned short) 481553119);
            arr_108 [i_28] [i_29 - 1] = ((/* implicit */long long int) (short)-26155);
        }
        for (int i_30 = 0; i_30 < 17; i_30 += 4) 
        {
            var_41 = ((/* implicit */short) ((arr_100 [i_30]) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_28] [i_28] [i_30])) ? (((/* implicit */unsigned int) -1982905870)) : (arr_14 [i_30] [i_28] [i_28]))))));
            /* LoopNest 2 */
            for (unsigned char i_31 = 2; i_31 < 15; i_31 += 3) 
            {
                for (unsigned short i_32 = 0; i_32 < 17; i_32 += 3) 
                {
                    {
                        var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2429586944335598471LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (-1491158527)))) : (var_12)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) var_15)), (1971254587)))), (((((/* implicit */_Bool) (unsigned short)54698)) ? (((/* implicit */long long int) -481553120)) : (arr_58 [i_30])))))) : (((((((/* implicit */_Bool) arr_61 [i_28] [i_30] [i_31 + 1] [i_31 + 1])) || (((/* implicit */_Bool) var_3)))) ? (arr_109 [i_31] [i_31 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (arr_31 [i_28])))))))));
                        arr_116 [i_31] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) (_Bool)1))), (((long long int) (unsigned short)54698))))) && (((/* implicit */_Bool) var_12))));
                        arr_117 [i_28] [i_28] [i_32] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)130)), (var_12))) <= (((/* implicit */unsigned long long int) -1971254602))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 926620624U)) / (3878745203517371202LL)))) < ((-(var_12)))))));
                    }
                } 
            } 
        }
        arr_118 [i_28] = ((/* implicit */long long int) arr_105 [i_28]);
        var_43 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)44988)) > (-118707613))) && (((/* implicit */_Bool) (unsigned char)147))));
    }
    for (short i_33 = 3; i_33 < 13; i_33 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_34 = 0; i_34 < 15; i_34 += 1) 
        {
            for (unsigned int i_35 = 2; i_35 < 14; i_35 += 4) 
            {
                {
                    arr_126 [i_34] [i_34] [(unsigned short)5] = ((/* implicit */unsigned short) (unsigned char)140);
                    var_44 |= ((/* implicit */unsigned char) (~((+(min((var_4), (((/* implicit */long long int) arr_55 [i_35] [i_35 + 1] [i_35] [i_35]))))))));
                }
            } 
        } 
        arr_127 [(unsigned short)4] [i_33] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)18784)) != (-1971254585))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_14)) != (((/* implicit */int) (unsigned short)44983)))))))) : (var_11)));
        arr_128 [(unsigned char)12] = ((/* implicit */unsigned long long int) -10LL);
        var_45 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (3368346650U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_22 [i_33] [i_33] [(unsigned short)6])))))) + (min((((/* implicit */long long int) (unsigned char)172)), (-1LL)))))));
    }
}
