/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38025
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0 + 1])));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))), (max((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_0 + 2] [i_0 + 1])))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_16 = ((/* implicit */short) arr_3 [i_2]);
            arr_8 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((-2971878528672485749LL), (2971878528672485748LL)));
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1]);
            var_18 ^= ((/* implicit */unsigned int) max((-2971878528672485749LL), (((/* implicit */long long int) var_3))));
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7235))) < (-4083038884378863856LL)));
            var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) var_1)), (arr_10 [0LL] [i_3])));
        }
        for (unsigned int i_4 = 4; i_4 < 24; i_4 += 1) 
        {
            var_21 = ((/* implicit */_Bool) var_9);
            var_22 += ((/* implicit */_Bool) arr_11 [i_1] [i_1]);
            var_23 = ((/* implicit */short) -4840903372605721587LL);
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    arr_19 [i_5] [i_5] [i_6] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_4 [i_6])) * (((/* implicit */int) var_6))))));
                                var_25 &= ((/* implicit */unsigned short) max((min((var_1), (((/* implicit */unsigned int) arr_17 [i_1] [i_1])))), (((/* implicit */unsigned int) max(((short)-10084), (((/* implicit */short) var_9)))))));
                                var_26 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_9 [i_5 + 1]))))));
                                var_27 = ((/* implicit */long long int) max((var_27), (((long long int) max((((/* implicit */int) min((var_10), (arr_22 [i_1] [i_1] [i_7] [(unsigned char)22])))), ((~(((/* implicit */int) (unsigned short)0)))))))));
                                arr_24 [i_1] [i_6] [i_1] [i_5] = ((signed char) max((((/* implicit */unsigned short) arr_7 [i_8 + 2] [i_8] [i_8])), (arr_4 [i_8 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_29 [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
            arr_30 [i_9] = ((/* implicit */unsigned short) var_4);
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((long long int) (signed char)(-127 - 1))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            arr_33 [i_1] [17ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) 18446744073709551606ULL)) && (((/* implicit */_Bool) -2971878528672485749LL)))))))));
            arr_34 [12ULL] = ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (_Bool)0))))), (max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_3))))));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_22 [i_1] [i_11] [i_11] [i_11])) >> (((max((var_2), (((/* implicit */unsigned long long int) arr_3 [i_1])))) - (9953295982380541628ULL))))));
                arr_38 [i_1] [i_11] [i_11] [i_11] = ((/* implicit */long long int) var_8);
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_21 [i_1] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 24; i_14 += 3) 
                    {
                        {
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            var_31 = ((/* implicit */unsigned long long int) arr_12 [i_12] [i_12]);
                            var_32 += ((/* implicit */signed char) arr_17 [i_1] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 3; i_16 < 24; i_16 += 3) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned short) arr_20 [i_12 - 1] [i_12 + 2] [i_1] [i_16 + 1]);
                            arr_51 [i_16] [i_16] [i_16] [i_16] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_34 += ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_12 + 1] [i_12 + 1] [i_12 + 2])) + ((+(((/* implicit */int) arr_40 [i_1] [i_1] [i_10] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) ((9007199254740991LL) ^ (((((/* implicit */_Bool) (short)-25)) ? (2971878528672485749LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_36 = ((/* implicit */unsigned char) (-(arr_48 [i_12 + 2] [i_17] [i_12] [i_12 + 2])));
                    /* LoopSeq 4 */
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        var_37 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        var_38 += ((/* implicit */unsigned long long int) arr_37 [i_1] [i_10] [i_12]);
                        var_39 = ((/* implicit */long long int) (+(13959614822134315022ULL)));
                        var_40 = ((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_1]))));
                    }
                    for (signed char i_19 = 1; i_19 < 23; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) var_0);
                        arr_58 [i_1] [i_10] [i_10] [i_12 - 1] [i_17] [i_10] [i_19] = ((/* implicit */signed char) var_12);
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3007421588U)))))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 24; i_20 += 2) 
                    {
                        arr_63 [i_1] [i_10] [i_1] [i_17] [i_20] [i_20 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [(signed char)23] [i_12 - 1] [i_12 + 1]))) / (-2616283780241175295LL)));
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) var_11))));
                        var_44 += ((/* implicit */unsigned long long int) (+(arr_59 [i_20] [i_20 - 1] [i_20] [i_20 - 1] [i_20])));
                    }
                    for (long long int i_21 = 4; i_21 < 22; i_21 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) (~(1287545706U)));
                        arr_67 [(unsigned short)14] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                        arr_68 [i_12] [i_1] = (~(4487129251575236600ULL));
                    }
                }
            }
        }
    }
}
