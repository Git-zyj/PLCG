/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197110
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned short)65535)))))));
    var_19 &= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42401))) : (arr_5 [i_2 - 3])))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)222)))))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            arr_15 [15LL] [i_1] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))));
                            arr_16 [i_0] [i_3] [(unsigned short)22] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 3] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)227)))));
                        }
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned char)34)) - (22))))))))), (min(((~(((/* implicit */int) arr_0 [i_3])))), ((-(((/* implicit */int) arr_10 [i_0] [i_2] [i_3]))))))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned char)201)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187)))))))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_25 *= ((/* implicit */_Bool) (unsigned char)187);
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_0 - 3]))))) - (((/* implicit */int) arr_2 [i_0 - 2] [i_6 - 1]))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)201)))) % (((/* implicit */int) max(((unsigned char)200), ((unsigned char)185))))))) ? (((unsigned int) ((long long int) (unsigned char)54))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)90)))), ((!(((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_6] [i_0 + 1]))))))))));
            }
            var_27 = (!((!(arr_4 [i_0 + 1]))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_28 = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)44)) && (((/* implicit */_Bool) (unsigned char)222))))) - (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) arr_3 [i_0])))))), ((~(((/* implicit */int) (unsigned char)208))))));
                var_29 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)220))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 2) 
            {
                var_30 &= ((/* implicit */unsigned char) var_6);
                var_31 = ((/* implicit */_Bool) (-(((arr_18 [i_0 - 3] [i_5] [(short)13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))));
                arr_27 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */signed char) (((~(arr_12 [i_0 - 1] [i_5] [i_5] [i_8] [i_8] [i_8 - 3]))) << (((((unsigned long long int) (unsigned char)68)) - (28ULL)))));
                var_32 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)191))));
            }
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_33 = (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (arr_5 [i_0]))));
                var_34 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (unsigned char)220))));
            }
            arr_31 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
        }
    }
    for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 4) 
    {
        var_36 |= ((/* implicit */_Bool) ((signed char) (unsigned char)220));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)236)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)55))))))) ? ((+((-(var_16))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)229))))) ? ((+(((/* implicit */int) (unsigned char)69)))) : (((((/* implicit */int) (unsigned char)186)) / (((/* implicit */int) (unsigned char)187)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_11 = 3; i_11 < 22; i_11 += 2) 
        {
            arr_37 [i_11] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_10 [i_11] [i_10] [i_11 - 2])) % (((/* implicit */int) (unsigned char)201)))), (((/* implicit */int) (unsigned char)247))));
            var_38 = ((/* implicit */_Bool) min((var_38), ((((!(((/* implicit */_Bool) min(((unsigned char)76), ((unsigned char)76)))))) && (((((/* implicit */_Bool) (unsigned char)201)) && (((/* implicit */_Bool) min(((unsigned char)180), ((unsigned char)206))))))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) % (((/* implicit */int) min(((unsigned char)79), (((unsigned char) var_2)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            var_40 = ((/* implicit */long long int) min((var_40), (max((max((((/* implicit */long long int) arr_23 [i_10 - 2] [i_11 - 3] [i_11 - 1] [i_12 + 1])), (arr_35 [i_11 - 3] [i_10 - 2] [i_10 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)205))) ? ((~(((/* implicit */int) (unsigned char)78)))) : (((/* implicit */int) min(((unsigned char)68), ((unsigned char)54)))))))))));
                            arr_44 [(unsigned char)8] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_21 [i_12] [i_12] [i_12 + 3] [i_12 + 3]) << (((arr_21 [i_12] [i_12 + 2] [i_12 + 3] [i_12 + 3]) - (4150349763713508993ULL)))))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) ((short) arr_18 [i_12] [(unsigned char)22] [i_14])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 3; i_15 < 22; i_15 += 4) /* same iter space */
                        {
                            arr_47 [(signed char)4] [i_11] [i_12] [i_11] [i_13] [i_13] [(unsigned short)9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_11] [i_11 - 2] [i_11]))));
                            var_41 = ((/* implicit */_Bool) arr_30 [i_15 - 1]);
                            var_42 = ((/* implicit */unsigned long long int) (-(((long long int) (unsigned char)229))));
                            arr_48 [i_10] [19] [i_11] = ((_Bool) ((((/* implicit */int) (unsigned char)206)) >= (((/* implicit */int) (unsigned char)94))));
                        }
                        for (unsigned short i_16 = 3; i_16 < 22; i_16 += 4) /* same iter space */
                        {
                            var_43 = ((_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), (max(((unsigned char)53), ((unsigned char)76)))));
                            var_44 = ((/* implicit */unsigned short) ((((arr_19 [i_11 - 3] [i_11]) % (arr_19 [i_11 - 2] [i_16]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) arr_3 [i_11])) : (((/* implicit */int) arr_3 [i_11])))))));
                            var_45 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_4 [i_12])) > (((/* implicit */int) (unsigned char)54))))))));
                        }
                        var_46 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) arr_45 [i_12] [(short)2])) : (((/* implicit */int) (unsigned char)11)))))))), (((((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)54)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_11] [i_11 - 3] [i_11])))))))));
                    }
                } 
            } 
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_47 = ((/* implicit */long long int) (unsigned char)185);
            var_48 ^= ((/* implicit */unsigned short) ((arr_1 [i_10]) + (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) : (arr_1 [i_10])))));
        }
        for (unsigned char i_18 = 2; i_18 < 22; i_18 += 2) 
        {
            var_49 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)215))))));
            var_50 = ((/* implicit */unsigned int) (-(max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (unsigned char)185)))))))));
        }
        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_18 [i_10] [i_10 - 1] [i_10 + 1])))) ? (max((arr_18 [i_10] [i_10 + 1] [i_10 - 1]), (arr_18 [(unsigned char)21] [i_10 - 2] [i_10 + 1]))) : (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) : (arr_18 [i_10] [i_10 - 2] [i_10 - 1])))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) (unsigned char)222))));
    }
    for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            var_53 = ((/* implicit */signed char) min((max((((/* implicit */int) (unsigned char)221)), ((~(((/* implicit */int) (unsigned char)197)))))), ((-(((/* implicit */int) (unsigned char)220))))));
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)175))) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) ((short) (unsigned char)62)))));
            var_55 = ((/* implicit */_Bool) (unsigned char)36);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 2; i_21 < 16; i_21 += 4) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_56 = ((/* implicit */long long int) (unsigned char)76);
                    var_57 -= ((/* implicit */_Bool) (unsigned char)193);
                }
            } 
        } 
    }
}
