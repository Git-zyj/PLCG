/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190532
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
    var_12 = ((/* implicit */short) ((var_9) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((((/* implicit */_Bool) (short)-25906)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_6 [i_0])))));
                        var_14 = ((/* implicit */int) max((((unsigned char) arr_1 [i_3] [i_2 + 1])), (((/* implicit */unsigned char) (!(var_9))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_15 += ((/* implicit */unsigned long long int) ((int) (short)-25914));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_3]))) >= (var_3)))) >> ((((~(((/* implicit */int) (short)-25906)))) - (25903)))));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */short) var_7);
                            var_18 = ((/* implicit */unsigned char) ((int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1]));
                        }
                        arr_12 [i_3] [i_0] [i_3] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-110))))))) ? ((-(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-25909)) && (((/* implicit */_Bool) 8621412809850770741ULL)))))))));
                        var_19 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2 - 3]))))), (((((/* implicit */int) (signed char)-4)) / (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((int) var_8))))));
        var_21 += ((/* implicit */signed char) (~((-((+(((/* implicit */int) (short)25906))))))));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) * (((((((/* implicit */_Bool) 381418094U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (1197508059165502140ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) var_0);
                                arr_23 [i_0 + 4] [i_6] [i_0] [i_8] [i_9] = ((/* implicit */signed char) (+(-5558131798543836614LL)));
                                var_24 -= ((max((((/* implicit */unsigned long long int) -2458342878534951185LL)), (9825331263858780854ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))));
                                arr_24 [i_9 + 2] [i_6] [i_0] [i_8] [i_9] [i_8] [i_7] = var_3;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) arr_20 [i_6] [i_0] [i_6] [i_6] [i_6] [i_6]);
                    arr_25 [i_0] [i_0] [(signed char)6] |= ((/* implicit */unsigned long long int) (signed char)11);
                }
            } 
        } 
    }
    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) (signed char)-76);
        var_27 = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 2 */
        for (short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((max((445943452), (((/* implicit */int) arr_27 [i_10 + 2])))) - (((((/* implicit */_Bool) (short)-25906)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)83)))))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_28 [i_11 + 1]))) ? (((/* implicit */int) arr_27 [(_Bool)1])) : (((/* implicit */int) var_11))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_39 [i_10] [i_12] [i_10] = ((/* implicit */short) arr_33 [i_10] [i_10] [(unsigned short)2] [i_10]);
                            var_30 = ((/* implicit */unsigned int) (~(arr_29 [i_11 + 1] [i_10 - 1] [i_10])));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10 + 2])) && (((/* implicit */_Bool) var_1)))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)127)) >> ((((~(((/* implicit */int) (_Bool)1)))) + (8)))));
            var_33 = ((/* implicit */_Bool) (~(((int) (short)-26076))));
        }
        var_34 = ((/* implicit */signed char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_5))), (arr_29 [i_10 + 1] [i_10 - 1] [i_10]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    for (signed char i_16 = 3; i_16 < 20; i_16 += 1) 
    {
        var_35 = ((/* implicit */short) var_8);
        arr_44 [i_16] = ((/* implicit */unsigned long long int) var_6);
        var_36 = ((/* implicit */unsigned char) ((var_7) >> (((arr_43 [i_16]) - (2298851446U)))));
    }
    var_37 = ((/* implicit */unsigned long long int) max(((+((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_9))));
}
