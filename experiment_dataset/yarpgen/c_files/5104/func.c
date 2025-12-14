/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5104
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
    var_18 += ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) var_15);
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)41)) < (((/* implicit */int) (unsigned char)41))))) + (((((/* implicit */int) (unsigned char)210)) << (((528482304LL) - (528482288LL)))))));
                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))), (max((((/* implicit */unsigned long long int) 9223372036854775797LL)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 7; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) ((var_14) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_22 *= max(((unsigned char)236), (((/* implicit */unsigned char) ((arr_0 [i_5 + 4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 - 2])))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_6] [i_4])) != (((var_10) ? (((/* implicit */int) arr_8 [4LL])) : (((/* implicit */int) (unsigned char)20))))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-8)) || (((/* implicit */_Bool) (signed char)-2)))) || (((/* implicit */_Bool) arr_15 [i_2 - 3] [(_Bool)1]))))))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */int) max((arr_2 [3U] [i_4 + 2]), (((/* implicit */unsigned short) ((_Bool) var_10)))))) > (((/* implicit */int) ((((/* implicit */int) (signed char)7)) < (((/* implicit */int) (_Bool)1))))))))));
                            arr_21 [i_2 + 2] [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */int) var_13);
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) arr_9 [(_Bool)1])) - (48800)))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [2LL])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))))));
                            var_26 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_3 [i_2 - 2])) | (((/* implicit */int) arr_3 [i_2 - 1])))), (max((arr_23 [i_4 - 1] [i_2 + 1]), (((/* implicit */int) arr_12 [i_2 - 2] [i_4 - 1]))))));
                        }
                    }
                } 
            } 
            arr_25 [i_2] = ((/* implicit */unsigned char) max(((+((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2]))))) < (((/* implicit */int) ((signed char) 2147483647))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((int) 3645739683U);
                        var_29 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (max((var_15), (((/* implicit */long long int) arr_33 [i_2] [i_2 + 2]))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) arr_3 [i_2]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_11 = 2; i_11 < 10; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned char i_13 = 2; i_13 < 8; i_13 += 2) 
                    {
                        {
                            var_31 = (+((+(((/* implicit */int) (unsigned char)140)))));
                            var_32 = ((/* implicit */long long int) min((var_32), (241572581942017457LL)));
                            arr_43 [i_2] [i_8] [i_2] [(unsigned short)5] = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) arr_31 [i_2] [i_2] [i_2]);
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    arr_48 [(unsigned char)9] [i_2] [i_2] [i_2] = ((/* implicit */short) ((signed char) -1651087323));
                    arr_49 [i_14] [i_11 - 2] [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [(_Bool)1] [i_11 - 1] [i_8 - 1] [i_2 + 1] [i_2 - 1])) ^ (((/* implicit */int) arr_41 [i_11] [i_11 - 1] [i_8 - 1] [i_2 + 3] [i_2 + 2]))));
                    arr_50 [i_2] = ((/* implicit */_Bool) ((((17556909382611981437ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27245))))) ? (((/* implicit */int) ((arr_17 [i_2] [i_8 - 3] [i_11 - 1] [i_14] [3LL]) > (((/* implicit */int) var_12))))) : (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 4; i_15 < 7; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) ((unsigned char) var_3));
                        var_35 = ((/* implicit */signed char) ((_Bool) -1828973717));
                        arr_53 [i_15 + 3] [i_2] [i_11 + 1] [i_11] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_8 + 1] [i_2]))));
                    }
                    for (long long int i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_2] [i_8 - 1])) & (((/* implicit */int) arr_9 [i_2]))));
                        arr_56 [i_2] [i_2] [i_11] [i_16 + 2] = ((/* implicit */unsigned int) arr_37 [i_2 - 3] [i_8] [i_2] [i_14] [i_16 - 1] [i_16 - 1]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 2; i_17 < 8; i_17 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [(_Bool)1] [(signed char)1] [i_17 + 1] [i_14] [i_17] [i_17 - 2])) | (arr_29 [i_8]))))));
                        arr_61 [i_2 + 1] [i_8] [i_11] [i_2] [i_17] [i_17] = ((/* implicit */short) arr_31 [i_17 - 2] [i_14] [i_14]);
                    }
                }
            }
            arr_62 [i_2] [i_2] = ((/* implicit */int) var_3);
            arr_63 [i_2] [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned short) arr_12 [i_8 + 1] [i_8]);
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_38 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)109)) != (((/* implicit */int) (unsigned short)19452))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8908)))))));
            var_39 = -2805203796487986643LL;
        }
        var_40 = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) (unsigned char)99)))) << (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) % (var_1))))));
    }
}
