/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20641
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((var_0) ? (8901108575578966645LL) : (var_5))) == (var_6)))) & (((((/* implicit */int) var_10)) | (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) arr_3 [i_0] [i_1]);
            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) ((short) var_9))) < (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) (signed char)-43)), ((unsigned char)151)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)52)) || (((/* implicit */_Bool) (short)-8016))))))));
                            arr_14 [i_0] [(unsigned char)13] [i_1] [i_2] [i_2] [1ULL] [i_4] = (-(arr_4 [i_1]));
                            var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned char)151), (((/* implicit */unsigned char) (signed char)81)))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_1] = ((((/* implicit */_Bool) ((long long int) ((short) arr_12 [i_0] [i_0] [i_0] [15ULL] [i_1 + 1] [(unsigned char)0])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) <= (var_6))))) : (((/* implicit */int) max((arr_0 [i_0] [i_1 - 1]), (((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (arr_11 [i_0] [i_0] [3ULL] [i_1] [i_1] [i_1])))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            arr_18 [i_0] [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5 - 2] [i_5 - 3] [21LL] [i_5 - 3] [i_5 + 1])))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_21 = ((unsigned long long int) ((long long int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0])), ((unsigned short)1024))));
                    arr_25 [(unsigned short)16] [i_5 - 3] [i_0] [(short)6] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((16383ULL) != (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) ? (arr_11 [2LL] [2LL] [(unsigned char)13] [2LL] [(signed char)4] [(signed char)21]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1574758648)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-1))))))) & (min((arr_9 [1LL] [i_6] [i_6] [i_7] [i_7] [i_7]), (((unsigned long long int) (unsigned short)64535))))));
                    arr_26 [i_0] [i_0] [i_5 - 3] [i_6] [i_6] [i_5] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_6] [i_6] [i_7]);
                }
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_22 = ((/* implicit */short) ((long long int) 16777215LL));
                    var_23 += ((long long int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_32 [i_0] [21ULL] [(short)20] [i_5] [i_0] [i_8] = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5 - 2] [i_8] [i_9] [i_8] [i_6])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [3LL] [i_0] [i_5] [15ULL] [i_0]))) - (arr_16 [i_0] [i_0] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)64500))))));
                        arr_33 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) (short)32751);
                    }
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        arr_36 [i_0] [i_5] [i_5] [i_8] [i_10 + 1] = ((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (5915953102715722693LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_34 [i_0] [4LL] [i_0] [i_0] [i_10 + 1] [i_10])) || (((/* implicit */_Bool) arr_6 [(unsigned char)3])))))))))))));
                        arr_37 [i_5] [i_8] [i_8] [i_6] [i_5 - 3] [i_5] = ((/* implicit */_Bool) var_6);
                    }
                }
                var_26 = ((/* implicit */signed char) ((((16545337027622409120ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))))) ? (((arr_13 [i_5] [i_5 - 3] [i_5 - 1] [i_5 - 2] [21] [i_5 - 3] [i_5 - 3]) & (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (arr_13 [(_Bool)1] [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 3] [i_5] [i_5])));
            }
            var_27 = ((/* implicit */long long int) (unsigned char)7);
        }
    }
    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 11; i_13 += 1) 
            {
                {
                    arr_45 [i_12] [i_12] |= ((/* implicit */int) ((((((/* implicit */_Bool) (short)1)) ? (12120518507673949461ULL) : (((/* implicit */unsigned long long int) 2047U)))) & (max((((/* implicit */unsigned long long int) -5915953102715722706LL)), (18446744073709551615ULL)))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((5915953102715722689LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_29 ^= ((/* implicit */unsigned long long int) ((max((min((arr_16 [i_11] [i_11] [i_11]), (-2660823510276297648LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))) < (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
    var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((8177505686043990086LL), (((/* implicit */long long int) var_14)))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_1))))))))) > (max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((+(var_4)))))));
}
