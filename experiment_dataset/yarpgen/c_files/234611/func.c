/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234611
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) (short)8456)))) != (((/* implicit */int) (short)(-32767 - 1)))))) | (((/* implicit */int) max((var_7), (((/* implicit */short) arr_0 [i_0])))))));
        var_11 = (~(10122754658662985511ULL));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_3))));
            arr_8 [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))))) != (((int) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) var_8)))))));
        }
        arr_9 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1] [i_1] [(short)2])))) - (19276)))))), ((~(var_3)))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_13 = ((/* implicit */short) var_3);
        arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((((/* implicit */int) (short)-32752)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_11 [(unsigned char)10] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_10 [i_3] [i_3])))))) : (((unsigned long long int) arr_10 [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((arr_11 [(short)1] [i_3]) + (arr_11 [i_3] [i_3]))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)129), ((unsigned char)144))))) | (min((arr_11 [i_3] [i_3]), (((/* implicit */unsigned int) arr_16 [(unsigned char)3] [(unsigned char)3] [i_6])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 24ULL))))))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((8311274859995175068ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26152))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_20 [14ULL]), (((/* implicit */short) arr_17 [i_7] [i_7] [i_7] [(unsigned char)7])))))));
    }
    for (unsigned short i_8 = 4; i_8 < 19; i_8 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_8])) & (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_8])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_9 = 2; i_9 < 20; i_9 += 1) 
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [(short)9])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26263))))) >> (((((((/* implicit */int) var_9)) / (((/* implicit */int) var_1)))) - (113)))));
            arr_28 [i_8] [i_8] = (i_8 % 2 == zero) ? (((/* implicit */unsigned char) ((var_2) << (((((/* implicit */int) arr_27 [i_8] [i_8 + 2])) - (17507)))))) : (((/* implicit */unsigned char) ((var_2) << (((((((/* implicit */int) arr_27 [i_8] [i_8 + 2])) - (17507))) + (8728))))));
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                {
                    arr_34 [i_9] [i_8] [i_10 + 2] [(unsigned char)3] [i_10 + 2] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8] [i_11 + 1])) ? (((/* implicit */int) arr_23 [i_8 - 1])) : (((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        arr_39 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_8] [i_9] [i_10] [i_11 - 1] [i_12])) >> (((((/* implicit */int) var_5)) - (39530)))));
                        var_20 -= ((/* implicit */unsigned short) ((unsigned char) var_6));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_8))))) : (var_3)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_22 = ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_25 [i_8])));
                        var_23 = ((/* implicit */short) arr_37 [i_8] [i_9 - 2] [i_10 - 1] [i_11 - 1] [i_11] [i_13] [i_13]);
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_15 = 1; i_15 < 20; i_15 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) arr_27 [i_8] [i_8 + 1]);
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                    }
                    for (signed char i_16 = 1; i_16 < 20; i_16 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_44 [i_8] [i_9 - 1] [i_10] [i_14] [(unsigned char)14] [i_14]))))))));
                        var_27 = ((/* implicit */unsigned short) arr_37 [i_8] [i_8 - 2] [i_8 - 2] [i_9 + 1] [(_Bool)1] [i_9 - 1] [i_10 + 2]);
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_8] [i_16 - 1] [i_16 + 2] [i_10 - 1] [i_9 - 1] [i_8]))));
                    }
                    arr_51 [i_8 - 1] [9ULL] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_8] [i_8 - 2] [i_9 + 2] [i_9 + 1] [i_10] [i_14] [i_14]))));
                }
                for (short i_17 = 4; i_17 < 20; i_17 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((unsigned short) var_5)))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32748)) & (((int) arr_41 [8ULL] [8ULL] [i_10 + 1] [i_8] [i_8 + 1] [i_9 - 2]))));
                }
                for (int i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_52 [i_8])) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((arr_48 [i_8] [i_8] [i_9] [i_10 - 1] [i_10 + 2] [i_8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [(short)2] [i_10] [i_9] [(short)2]))))))));
                    arr_56 [i_8] [(unsigned short)3] [i_10 + 2] [i_18 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_8] [i_10] [i_10 + 1]))) + (var_3)));
                    /* LoopSeq 1 */
                    for (short i_19 = 1; i_19 < 19; i_19 += 2) 
                    {
                        arr_60 [i_8] = ((/* implicit */unsigned long long int) var_8);
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_3))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_20 = 1; i_20 < 18; i_20 += 3) 
                {
                    var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_9 + 2] [i_10 - 1] [i_10] [i_20 + 1])) + (((/* implicit */int) ((((/* implicit */int) arr_59 [i_20])) != (((/* implicit */int) var_1)))))));
                    arr_63 [i_8 + 3] [i_9 + 2] [i_8] = ((/* implicit */unsigned int) arr_36 [i_10] [i_10] [i_10] [i_10] [i_10] [i_8]);
                }
            }
        }
        var_34 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_47 [i_8] [i_8 - 1] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_47 [i_8 - 2] [i_8 + 1] [i_8 + 1] [6])) : (((/* implicit */int) arr_47 [i_8] [(unsigned char)13] [i_8 + 1] [(signed char)19])))));
    }
    var_35 += ((/* implicit */unsigned long long int) var_5);
}
