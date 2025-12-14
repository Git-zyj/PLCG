/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194934
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
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_11))), (((((/* implicit */_Bool) (short)-7437)) || (((/* implicit */_Bool) (short)7407))))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_1))), (max((1408197046U), (876603149U))))))))));
    var_14 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    var_15 ^= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                        var_16 = arr_7 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0];
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16787))) % (10602764581700402666ULL)))) || (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6))))) == (max((((/* implicit */unsigned int) arr_3 [i_0])), (arr_5 [i_0] [i_0])))))));
        var_17 |= ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1]))));
        var_18 -= arr_8 [i_0] [i_0] [i_0] [i_0];
        var_19 *= ((/* implicit */signed char) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_20 += ((/* implicit */short) arr_12 [i_4]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(arr_14 [i_4]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_22 &= (~(3720840121U));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_5 [i_7] [i_7]);
                        var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [5U] [i_6]))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_9 = 4; i_9 < 8; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7462))) * (0U));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (short)-708)) ^ (((/* implicit */int) (signed char)0)))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) 0U)) ? (13561580336559334115ULL) : (((/* implicit */unsigned long long int) arr_14 [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_28 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_4 [i_5] [i_5]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 4; i_12 < 9; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) var_2);
                            arr_33 [(unsigned char)2] [(unsigned char)2] [i_10] [i_11] [(unsigned char)2] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (short)719)))))));
                            arr_34 [i_5] [i_5] [i_10] [i_9] [i_12 - 2] = ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))));
                            var_30 *= ((/* implicit */short) var_11);
                            arr_35 [i_5] [i_9 - 1] [i_9] [i_5] [i_9] [(short)1] = (short)0;
                        }
                        for (signed char i_13 = 1; i_13 < 8; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */short) max((var_31), (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            var_32 += ((var_1) / (arr_14 [i_5]));
                        }
                        for (unsigned int i_14 = 1; i_14 < 7; i_14 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) arr_6 [i_5]);
                            var_34 = (+(var_0));
                            var_35 = ((/* implicit */unsigned char) (signed char)-21);
                            arr_41 [3U] [i_10] [i_10] [i_10] [i_9] [i_10] [i_5] = ((/* implicit */unsigned char) ((arr_12 [i_5]) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 329763075U)) : (0ULL)))));
                        }
                        for (short i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_36 -= ((/* implicit */short) ((4885163737150217500ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            arr_44 [i_5] [i_9] [(short)7] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) % (arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_11] [i_15])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 1; i_16 < 8; i_16 += 1) 
        {
            for (unsigned char i_17 = 1; i_17 < 7; i_17 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_37 |= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_4 [i_5] [i_5])))));
                        arr_53 [i_5] [i_5] [i_5] [i_5] [i_18] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_17 + 1] [i_5]))) : (var_2));
                    }
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        arr_56 [i_5] [i_5] [i_16 - 1] [i_5] [i_5] [i_19] = ((/* implicit */unsigned int) var_6);
                        /* LoopSeq 4 */
                        for (unsigned int i_20 = 1; i_20 < 8; i_20 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_5]))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), ((-(((unsigned int) arr_19 [i_5] [i_16 + 2] [i_17]))))));
                        }
                        for (unsigned int i_21 = 1; i_21 < 8; i_21 += 1) /* same iter space */
                        {
                            arr_62 [i_17] [i_21] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)236));
                            var_40 = ((/* implicit */unsigned int) ((unsigned char) arr_20 [i_5] [i_5] [i_5] [i_5]));
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 8; i_22 += 2) 
                        {
                            var_41 *= var_0;
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_5] [i_16] [i_17] [i_16] [i_22] [i_22 + 1])) & (((/* implicit */int) arr_38 [i_5] [i_19] [i_22 + 1] [i_19] [i_22]))))) ^ (((arr_5 [i_5] [i_22]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [9ULL] [9ULL]))))))))));
                        }
                        for (signed char i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            arr_69 [i_5] [i_5] [i_16 + 2] [i_17] [i_17] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (((17998700583085504211ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))));
                            arr_70 [(short)0] [i_5] [i_17 + 1] [i_16 - 1] [i_5] [i_5] = ((((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (unsigned char)70)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (arr_6 [i_5]));
                            var_43 = ((/* implicit */unsigned char) ((signed char) 13539247703279767298ULL));
                        }
                    }
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((5929824828980208023ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        var_45 = ((/* implicit */signed char) arr_2 [i_5] [i_16]);
                        var_46 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_16 - 1] [i_16 + 1]))));
                        var_47 = ((/* implicit */unsigned int) arr_30 [i_5] [i_5] [8U] [i_5]);
                        arr_73 [i_5] [i_16 + 2] [i_5] = ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_5] [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-708))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))));
                    }
                    var_48 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6316)) ? (arr_43 [(short)5] [i_17] [i_17] [i_17] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_71 [i_5] [i_5] [i_5] [i_16] [i_16] [i_17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_5] [i_16]))) : ((~(3654187788U)))));
                    arr_74 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)));
                }
            } 
        } 
    }
}
