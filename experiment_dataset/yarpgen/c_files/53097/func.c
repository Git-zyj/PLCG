/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53097
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
    var_18 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)32765))))) ? (((/* implicit */int) ((signed char) 9ULL))) : ((+(((/* implicit */int) var_14)))))), (((/* implicit */int) max((var_2), (var_4))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_1] = ((((((/* implicit */_Bool) arr_2 [i_1] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [i_0] [4LL]))) >= (18153975543234631411ULL));
            var_19 ^= ((/* implicit */unsigned long long int) (~(arr_2 [i_1 - 3] [i_1 + 4])));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_6 [i_1] [i_2] [i_3])));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3]))));
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) 18446744073709551606ULL);
                        }
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1])) ? (arr_6 [i_1 + 4] [i_1 - 2] [i_1]) : (arr_6 [i_1] [i_1 - 1] [(_Bool)1]))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 + 4] [i_2] [i_3 - 1] [i_3 - 1])) || ((!(((/* implicit */_Bool) var_0))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((unsigned short) var_5));
                        arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) var_10);
                        var_24 = ((/* implicit */int) 3310508081619546985ULL);
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned short)9797)))) + (2147483647))) >> (((/* implicit */int) max(((_Bool)1), (var_3))))))) ^ (min((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)64))))), (var_8)))));
                        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)-32749), (((/* implicit */short) (unsigned char)238))))), (((((/* implicit */_Bool) (short)-30396)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)102))))));
                        arr_32 [i_0] [i_7] [i_0] [i_7] [0] [i_7] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9 - 1] [i_9] [i_8 - 1] [i_0] [i_0]))) != ((-(18446744073709551580ULL)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned int) 746222062)))), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */unsigned long long int) (+(var_13)))) : (min((((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) arr_26 [i_7]))))));
            arr_33 [i_0] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)55738);
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 35ULL)) ? (299899243190316045LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_29 = ((/* implicit */signed char) 277076930199552ULL);
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_12])))))))) & (((arr_41 [i_12] [i_10] [i_12] [i_13]) + (arr_41 [i_10] [i_11] [i_12] [i_10])))));
                        arr_47 [i_11] [i_11] = 1787475632U;
                        arr_48 [i_10] [i_12] [i_11] = ((/* implicit */_Bool) ((((unsigned long long int) ((long long int) 2147483647))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_40 [i_10] [i_10] [(signed char)2] [10U])) : (((/* implicit */int) arr_43 [i_10] [i_11] [i_10] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (min((((/* implicit */unsigned int) var_3)), (arr_44 [2ULL]))))))));
                    }
                } 
            } 
        } 
        var_31 ^= ((/* implicit */unsigned long long int) ((((292768530474920204ULL) * (((/* implicit */unsigned long long int) arr_44 [i_10])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((!(((/* implicit */_Bool) 2507491661U))))))))));
    }
}
