/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216856
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-1690002198) : (max((((/* implicit */int) (short)-25017)), (2089144181)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) max((arr_1 [i_0] [17LL]), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_5)))) : (max((arr_6 [i_0]), (arr_0 [i_0] [i_1]))))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20928)) / ((-(((/* implicit */int) (short)-25017))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_10 [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_2] [i_2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_2))))))) ? (max((((/* implicit */long long int) var_1)), (arr_0 [i_1 - 2] [i_1 + 2]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)10] [4ULL] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [0] [i_2] [i_3])) : (0)))), (4297769652099793905LL)))));
                    var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0] [(short)22]);
                }
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)9436)))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (0U)))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [3LL]))));
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_7)), (16038818353133400709ULL)));
            }
            var_17 = ((/* implicit */int) (unsigned short)43749);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1 - 2] [i_1 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) == (arr_0 [i_1 + 2] [i_1])));
        }
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned long long int) arr_0 [i_5] [i_5])) : (16038818353133400709ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    arr_22 [(signed char)17] [i_6] [4ULL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16038818353133400709ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65528))))) ? (((((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -689143905)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5] [0] [i_5] [(unsigned char)15])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_5])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [i_5])), (arr_0 [i_5] [i_6]))))));
                    var_20 = ((/* implicit */signed char) arr_21 [i_5]);
                }
            } 
        } 
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) max(((unsigned short)43749), ((unsigned short)17613)))) - (43718)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [12U]))) : (((((arr_0 [i_5] [i_5]) + (9223372036854775807LL))) >> (((((/* implicit */int) max((var_4), ((unsigned char)0)))) - (13)))))));
        arr_23 [i_5] = ((/* implicit */int) max((max((((((/* implicit */_Bool) (signed char)125)) ? (9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) (short)-30939)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)9437)))))));
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        arr_26 [i_8] [i_8] = var_8;
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967264U)) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (short)-7154)))) : (((/* implicit */int) (short)-9438))));
            var_23 = ((/* implicit */unsigned char) 1481195734U);
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_8] [i_8])) | (((/* implicit */int) arr_25 [i_8] [5LL]))));
        }
        for (signed char i_10 = 2; i_10 < 22; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) var_9);
            arr_32 [(short)21] [(short)21] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (short)25017)))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (short i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) (signed char)(-127 - 1));
                            var_27 = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */int) arr_7 [i_8] [4LL] [i_12] [5LL])) % (((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (unsigned short)45031))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            arr_47 [i_8] [i_10] [i_11 + 2] = (~((~(arr_30 [i_10 + 1] [i_11]))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((((/* implicit */_Bool) arr_27 [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38805))) : (arr_27 [i_8]))) : (max((arr_27 [i_11 + 1]), (arr_27 [i_15])))));
                            var_29 = (+(((/* implicit */int) var_1)));
                            var_30 = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) arr_14 [19LL] [i_11 + 2]);
                var_32 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) (signed char)-105)) - (((/* implicit */int) arr_39 [i_11] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2]))))));
            }
        }
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5774)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (signed char)123))));
    /* LoopNest 2 */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        for (unsigned int i_17 = 3; i_17 < 14; i_17 += 2) 
        {
            {
                var_34 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2941200175644402444LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_0)));
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((min((-9223372036854775792LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_2))))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_17] [(unsigned char)19])))))))))));
                var_36 = arr_17 [(short)5] [(short)6];
                var_37 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (816023072U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), ((unsigned short)26734))))) : (max((((/* implicit */unsigned int) var_9)), (2934661570U))))))))));
}
