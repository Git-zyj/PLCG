/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3684
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [0LL] = ((((/* implicit */int) (unsigned short)1095)) ^ (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0])));
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_15 |= ((/* implicit */unsigned char) ((arr_1 [i_0 + 1]) ? (arr_3 [i_0] [i_1] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 345126554U)) ? (((/* implicit */int) (short)12039)) : (((/* implicit */int) var_5)))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 + 1]))));
                    }
                    for (short i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (unsigned short)64437));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35206)) != (((/* implicit */int) (unsigned short)1110))));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_15 [i_5] [i_5] = ((/* implicit */long long int) (((+(4284058535U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1076)))));
                        var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned short)12]);
                        var_19 -= ((/* implicit */short) (+(arr_13 [i_0] [i_0] [i_0 + 1])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_0] [(_Bool)1] [i_6] = ((/* implicit */signed char) ((int) arr_5 [12ULL] [i_0] [i_0 + 1] [i_0 - 1]));
                        var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
                        arr_20 [i_0] [i_1] [i_1] [i_6] [i_0 + 2] = arr_7 [i_6] [i_2] [i_1];
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((arr_22 [i_0 - 1]) == (arr_22 [i_0 + 1])));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(arr_24 [i_0] [i_7] [14LL]))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_14 [(short)0] [i_0])) ? (arr_22 [i_7]) : (((/* implicit */int) var_5))))))));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned short)1095))))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))) : (15031641722722222305ULL)));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (var_2)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_8] [i_0])) ? (((/* implicit */int) var_4)) : (var_2)))));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)240)))) && (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11))))));
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        var_30 = ((/* implicit */unsigned short) ((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) (short)21777)))));
                        var_31 ^= ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_11 = 3; i_11 < 16; i_11 += 4) 
            {
                arr_36 [i_8] [(unsigned short)12] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_11 - 2] [i_0 + 1])) ? (arr_10 [i_0 + 1] [i_8] [i_11 - 2] [i_11]) : (((/* implicit */int) arr_7 [i_0 + 1] [(short)16] [i_11 - 2]))));
                var_32 = ((/* implicit */signed char) var_12);
            }
        }
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0 + 1])))));
    }
    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(7508585371265477167LL))))));
        var_35 = ((/* implicit */unsigned char) ((int) (unsigned short)64446));
    }
    for (unsigned int i_13 = 2; i_13 < 20; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            for (int i_15 = 1; i_15 < 21; i_15 += 4) 
            {
                {
                    var_36 += ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_15 - 1] [i_13 + 1] [i_13 + 1])) | (((/* implicit */int) ((((/* implicit */long long int) arr_40 [20ULL] [i_14 - 1])) < (arr_43 [i_13 + 1] [i_13 - 1]))))));
                    arr_48 [i_15] [i_15] = ((/* implicit */unsigned short) ((((2897924829U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28268))))) ? (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2897924837U)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)64446)) : (((/* implicit */int) (unsigned short)64438)))) : (((/* implicit */int) ((_Bool) arr_42 [i_14] [i_13]))))))));
                    var_37 = ((/* implicit */int) arr_37 [i_13] [i_13]);
                    var_38 = (+(((/* implicit */int) (short)-1)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 4) 
                    {
                        var_39 = arr_39 [i_13];
                        var_40 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)60383)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 1; i_17 < 20; i_17 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)47190))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37268))))) : (arr_53 [i_17 + 2] [i_17 + 2] [i_15])));
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) arr_42 [i_13 + 1] [i_13 + 1]))));
                        var_43 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_44 [(_Bool)1] [i_13] [i_13]))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_39 [(signed char)1])))))))))));
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13] [i_13]))) + (((((long long int) (unsigned char)48)) % (((((/* implicit */_Bool) var_8)) ? (arr_53 [i_13] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)-11))));
    var_47 += ((/* implicit */_Bool) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_10))));
    var_48 = ((/* implicit */int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
