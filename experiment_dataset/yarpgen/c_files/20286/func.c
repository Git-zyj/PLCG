/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20286
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
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_11))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0] [i_3])))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (306236072811849517ULL))))) : (((/* implicit */unsigned long long int) ((long long int) (((-2147483647 - 1)) > (((/* implicit */int) (_Bool)1))))))));
                            var_23 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned long long int) (-((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (min((var_10), (((/* implicit */unsigned long long int) (~((-2147483647 - 1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-(arr_4 [i_0]))))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_6)) <= ((~(((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [i_4])) <= (var_5)));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_4]))));
                        var_27 += ((/* implicit */unsigned long long int) (unsigned char)255);
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        arr_21 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) <= (max((arr_18 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_4)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) 540431955284459520ULL)))));
            arr_24 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (arr_19 [i_8])))), (((((/* implicit */_Bool) arr_19 [i_8])) ? (var_18) : (var_15)))))));
        }
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2U), (((/* implicit */unsigned int) arr_26 [i_10] [i_10]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (arr_25 [i_11]))) : (arr_32 [i_8] [i_10] [i_10])))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (arr_31 [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : ((~(9223372036854775807LL))))) : (((/* implicit */long long int) (((!(var_13))) ? ((~(((/* implicit */int) (unsigned char)196)))) : ((-(((/* implicit */int) var_17)))))))));
                        arr_36 [i_10] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10])))) ? (((((/* implicit */_Bool) var_9)) ? (6052516582419793474ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))) : (max((((/* implicit */unsigned long long int) arr_15 [i_8] [i_11] [i_11])), (var_5)))))) ? (((/* implicit */unsigned long long int) var_19)) : (var_10));
                        arr_37 [i_8] [i_10] [i_11 + 2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned char)81)), (var_15))), (((/* implicit */long long int) ((arr_30 [i_11]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)141))) : (((((/* implicit */_Bool) arr_10 [i_11 + 2])) ? (arr_13 [i_11 - 2] [i_11 + 2]) : (((/* implicit */unsigned long long int) arr_10 [i_11 - 3]))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) (((-(arr_18 [i_8] [i_8] [i_10] [i_10]))) < (((((/* implicit */_Bool) arr_31 [i_10])) ? (arr_18 [i_8] [i_8] [i_8] [i_10]) : (arr_18 [i_8] [i_8] [i_10] [i_10])))));
        }
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned long long int) (!((_Bool)1)))))));
        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((arr_32 [i_8] [i_8] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
    {
        var_33 = ((/* implicit */unsigned int) var_0);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    arr_46 [i_13] [i_14] [i_14] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)144))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) : (min((arr_49 [i_13] [i_13 + 1]), (((/* implicit */long long int) (_Bool)1))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((((min((((/* implicit */unsigned int) arr_50 [i_13] [i_14] [i_14] [i_16])), (1536U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) || (((/* implicit */_Bool) (((-(((/* implicit */int) arr_47 [i_16] [i_15] [i_13])))) | (((/* implicit */int) var_3)))))))));
                        var_36 = ((_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_16)))));
                    }
                }
            } 
        } 
    }
    for (int i_17 = 0; i_17 < 11; i_17 += 3) 
    {
        var_37 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) arr_41 [i_17]))))))) ? ((+(((((/* implicit */int) arr_50 [i_17] [i_17] [i_17] [i_17])) / (var_4))))) : (((/* implicit */int) ((unsigned char) var_9))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    {
                        arr_63 [i_17] [i_18] [i_17] [i_17] [i_17] = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_16 [i_17] [i_18] [i_19])), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63488)))));
                        var_38 = ((/* implicit */unsigned long long int) ((int) ((((unsigned long long int) -454191770)) % (((/* implicit */unsigned long long int) (+(arr_4 [i_17])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_21 = 2; i_21 < 11; i_21 += 1) 
    {
        for (signed char i_22 = 1; i_22 < 14; i_22 += 3) 
        {
            {
                var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_25 [i_22 - 1]) == (arr_66 [i_21 + 3] [i_21] [i_22 - 1]))))));
                var_40 = ((/* implicit */unsigned short) ((max((arr_11 [i_21]), (arr_11 [i_21]))) != (arr_30 [i_22 + 1])));
            }
        } 
    } 
}
