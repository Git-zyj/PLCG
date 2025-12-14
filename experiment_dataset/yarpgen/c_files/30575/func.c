/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30575
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
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(417506332U)))));
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0] [i_0 - 1])))) != (((/* implicit */int) arr_1 [i_0]))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 417506325U)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-23043))))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((min((arr_5 [i_1]), (arr_5 [i_1]))), (arr_5 [i_1])));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (+((+(0LL)))))) : (18446744073709551615ULL)));
    }
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) arr_4 [i_2])))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (-8947256339540373198LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_10 [i_2])))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_14);
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (min((4294967295LL), (((/* implicit */long long int) arr_8 [i_2]))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(unsigned short)0] [(unsigned short)0])) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)196)), (arr_13 [(unsigned short)14] [(unsigned short)14])))) : (((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) arr_12 [(_Bool)1])) : (((/* implicit */int) arr_5 [i_3 - 2])))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 2]))) : (var_1)))));
            var_27 += ((/* implicit */unsigned long long int) -19);
        }
        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_14 [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) (unsigned short)1223)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) < (var_1))))))) < (((((/* implicit */_Bool) (short)7680)) ? (4294967284LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7680)))))));
            var_29 = ((/* implicit */_Bool) var_8);
            arr_20 [i_3] [i_5] = ((/* implicit */unsigned int) arr_3 [i_3]);
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_30 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((arr_5 [i_5]), (((/* implicit */short) var_4))))), (arr_23 [i_3 - 3] [i_3]))) % (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_5])))) ? (-8010269804740625860LL) : ((+(6522555449383523031LL))))))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_3])))) ? (((arr_16 [i_3] [i_3 - 3] [i_3 + 1]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_3 + 1] [i_3 - 1])))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_3 - 3] [i_3 + 1])) : (((/* implicit */int) var_15))))));
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-23055)))))) < (((((/* implicit */_Bool) ((arr_24 [i_3] [i_5] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 - 1]))) : (((((/* implicit */_Bool) 417506331U)) ? (3001095290877806562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5])))))))));
                    var_33 = ((/* implicit */int) ((min((arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 3] [i_3 - 1]), (arr_26 [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 1]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned long long int) 417506332U)) : (9013016095534032146ULL)))) ? (3877460964U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1]))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_34 = ((/* implicit */signed char) (short)-11072);
                    arr_30 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */short) 18446744073709551612ULL);
                    var_35 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 3]))))), ((+((-2147483647 - 1))))));
                }
                var_36 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_3] [i_3 + 1] [i_3] [i_3])) ? (arr_23 [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3] [i_5] [i_5] [i_3]))))) != (((((/* implicit */_Bool) arr_23 [i_6] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3 - 3] [i_5] [i_6] [i_3]))) : (arr_23 [i_5] [i_3])))));
            }
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_29 [i_3] [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3 - 3]), (((/* implicit */unsigned int) (_Bool)1))))) ? (arr_19 [i_3 - 2] [i_3] [i_3]) : ((+(5561367172841533994LL)))));
        }
        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 3) 
        {
            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_9 + 1] [0LL])) / (((((/* implicit */_Bool) arr_13 [i_9 + 1] [2])) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) arr_13 [i_9 + 1] [(_Bool)1]))))));
            arr_33 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_24 [i_3] [i_9 - 1] [i_3]), (arr_24 [i_3] [i_9 + 2] [i_3]))))));
            var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31982)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9 - 1] [i_3 - 1] [4])))))));
            var_40 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            var_41 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_17 [i_3]), (((/* implicit */long long int) (signed char)-26))))), (arr_22 [i_3])));
        }
        var_42 &= ((/* implicit */int) min(((short)13947), (((/* implicit */short) (unsigned char)0))));
        var_43 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (17094905659869319018ULL))), (((/* implicit */unsigned long long int) arr_19 [i_3 + 1] [i_3] [i_3])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (417506325U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
    }
    var_44 = ((((/* implicit */_Bool) 5296284152543063113ULL)) ? (((/* implicit */unsigned long long int) 2134133421)) : (8669653643150565913ULL));
    var_45 = ((/* implicit */long long int) var_19);
}
