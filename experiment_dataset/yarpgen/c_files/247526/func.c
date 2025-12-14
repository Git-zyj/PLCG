/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247526
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_16)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (var_0))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))), (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_7)), (var_5))), (((/* implicit */int) min((arr_1 [i_0]), (var_12)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_13);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) >= (var_13))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) : (var_10))));
        arr_9 [i_1] = min((((/* implicit */signed char) var_8)), (((signed char) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_2))))));
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) > (max((arr_2 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))))) & (((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_7 [i_2] [i_1])) - (((/* implicit */int) arr_11 [i_1] [7] [i_2]))))))));
            arr_13 [i_1] [i_2] = max((((/* implicit */long long int) ((int) min((var_1), (arr_12 [i_1]))))), (((max((((/* implicit */long long int) arr_11 [i_2] [i_2] [i_1])), (arr_10 [i_1]))) - (((/* implicit */long long int) ((var_11) - (var_11)))))));
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1])) % (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) min((var_6), (arr_0 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1] [i_2])), (arr_0 [i_1]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) -375613843184261352LL)), (arr_2 [i_1] [i_3])));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_15 [i_1] [i_3] [i_4]))));
                arr_19 [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((max(((unsigned short)390), (((/* implicit */unsigned short) (unsigned char)99)))), (((/* implicit */unsigned short) var_6))))) * (((/* implicit */int) min((var_15), (arr_5 [i_1] [i_1]))))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) var_1);
                var_23 = ((((/* implicit */_Bool) ((int) arr_17 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */int) arr_12 [i_1])) : (var_5))) < (((/* implicit */int) arr_1 [i_1])))))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_20 [i_1] [i_3] [i_5] [i_5]))));
                arr_22 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_3] [i_1]))) / (((long long int) max((((/* implicit */unsigned long long int) var_15)), (arr_20 [i_1] [i_3] [i_5] [i_5]))))));
            }
            var_24 = ((long long int) ((unsigned char) max(((unsigned short)65152), ((unsigned short)390))));
            var_25 = ((/* implicit */short) min((((arr_10 [i_1]) & (arr_10 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) >> (((arr_10 [i_1]) - (3601070400756886216LL))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [i_6] [i_1])) ? (arr_23 [i_1] [i_6]) : (arr_23 [i_1] [i_1]))), (((/* implicit */long long int) max((var_4), (arr_7 [i_1] [i_6]))))));
            arr_26 [i_1] [i_6] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1] [i_6])), (var_12)))) : (((((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) >> (((arr_23 [i_6] [i_1]) + (3329658619692648544LL))))))));
            var_27 -= ((/* implicit */short) ((((_Bool) arr_16 [i_1] [i_6])) ? (((((/* implicit */int) min((var_2), (((/* implicit */short) var_15))))) - (((((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [i_6])) << (((((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) - (24936))))))) : (((/* implicit */int) ((arr_10 [i_6]) > (((((/* implicit */_Bool) (unsigned char)135)) ? (6315544356527467112LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))))))))));
            var_28 = ((((/* implicit */_Bool) ((unsigned short) ((signed char) var_4)))) ? (((/* implicit */int) ((((unsigned long long int) var_3)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))) : (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_0 [i_1]))))))));
            var_29 = ((_Bool) arr_23 [i_1] [i_1]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) ((unsigned short) ((_Bool) ((_Bool) var_6))));
            var_31 |= ((/* implicit */_Bool) min((((long long int) ((short) var_3))), (min((((long long int) arr_10 [i_7])), (((/* implicit */long long int) arr_0 [i_1]))))));
            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (var_13))) <= (((/* implicit */unsigned long long int) min((arr_6 [i_1]), (arr_6 [i_1]))))));
        }
        arr_30 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))) * (((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1]), (arr_11 [(unsigned char)0] [i_1] [i_1]))))));
        var_32 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [10LL])) || (var_1)))) <= (((/* implicit */int) arr_1 [i_1]))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((unsigned char) ((_Bool) min((var_13), (((/* implicit */unsigned long long int) var_6)))))))));
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned short)378)) - (378)))));
        }
        var_34 *= ((/* implicit */unsigned long long int) min((((((_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (var_9)))))), (((/* implicit */int) max((min((var_16), (var_3))), (var_0))))));
    }
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)65519))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_1)))))))));
    var_36 = ((/* implicit */unsigned long long int) ((long long int) ((((var_9) & (((/* implicit */int) var_7)))) < (((((/* implicit */int) var_3)) & (var_5))))));
}
