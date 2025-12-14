/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3288
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
    var_16 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (signed char)39)))) != (((int) (unsigned char)115)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1187093534)))))));
    var_19 |= ((/* implicit */unsigned char) ((unsigned short) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))))) : (var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((_Bool) arr_0 [i_0] [i_0]));
        arr_2 [i_0] = arr_0 [(short)17] [i_0];
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_0] [15] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24794))));
            var_21 = ((/* implicit */unsigned short) ((int) arr_1 [i_0]));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
            {
                var_23 = ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */int) arr_8 [10] [i_1])) - (((/* implicit */int) (unsigned short)5394)))));
                var_24 = ((signed char) arr_4 [i_0] [i_1]);
            }
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)45229)) ? (((/* implicit */int) arr_11 [1ULL] [(unsigned short)0] [(unsigned short)0] [i_0])) : (var_1))) : (((/* implicit */int) (unsigned short)35832))));
                arr_14 [i_0] [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_1 [i_0]))));
            }
        }
        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_22 [i_0] [i_4 + 1] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / ((+(2667791598370553771LL)))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((((long long int) var_3)) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */int) arr_17 [16LL] [i_5] [i_6])) : (arr_19 [(unsigned short)8] [i_4] [i_5] [i_5] [i_5]))))))));
                    }
                } 
            } 
            arr_23 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_0])) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 2] [(unsigned short)15])) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 2] [i_0]))));
            var_27 = ((/* implicit */int) arr_17 [0] [i_4] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) arr_24 [i_7]);
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_7] [i_7 + 2]) / (((/* implicit */long long int) arr_25 [i_7]))))) ? (((/* implicit */int) arr_20 [i_7] [i_7 - 1] [i_7] [(unsigned short)8] [i_7])) : (((/* implicit */int) ((unsigned short) arr_17 [i_7] [i_7] [(unsigned char)16])))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_30 &= ((/* implicit */unsigned long long int) var_3);
            var_31 = arr_5 [i_8];
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) arr_18 [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) (_Bool)1))))) ? (arr_21 [i_8] [i_8] [i_7] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))));
        }
        for (int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) ((unsigned char) (unsigned short)7155));
            var_34 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 1]));
        }
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_10]))))) ? (((-2667791598370553770LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) arr_1 [i_10 - 1])) ? (arr_0 [i_10 - 1] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10 - 1] [i_10 - 1] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) (signed char)-43)))))));
        var_36 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_10] [i_10])) > (((((/* implicit */_Bool) (unsigned short)2399)) ? (((/* implicit */int) (unsigned short)5389)) : (arr_32 [1] [i_10]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) -1187093541)))));
        var_37 = ((/* implicit */long long int) ((unsigned long long int) -1757950140));
        var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((-2667791598370553778LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (short)2557)))))))), (((signed char) ((((/* implicit */_Bool) arr_17 [i_10 - 1] [i_10] [(signed char)2])) ? (arr_29 [i_10] [i_10]) : (((/* implicit */int) arr_17 [12ULL] [i_10] [(unsigned short)5])))))));
    }
}
