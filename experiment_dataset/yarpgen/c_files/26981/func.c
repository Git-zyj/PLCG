/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26981
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
    var_10 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56208)) ? (min((min((var_4), (((/* implicit */int) (unsigned short)960)))), (((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) var_6);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64575)))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [(short)20]);
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_1))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)252))));
                            var_15 = ((/* implicit */unsigned short) (-(0LL)));
                            arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)247)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56186))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            var_16 = ((/* implicit */long long int) (((~((((_Bool)1) ? (((/* implicit */int) (short)7680)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [(_Bool)1])))))) >= ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)12)) >= (((/* implicit */int) (unsigned short)975)))))))));
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned short) (((~((+(((/* implicit */int) var_0)))))) - (min((((/* implicit */int) max((var_1), ((_Bool)1)))), (((int) var_2))))));
                        var_18 ^= ((/* implicit */short) (~(arr_17 [i_0 - 2] [i_5 - 1])));
                        var_19 = ((/* implicit */unsigned int) ((short) max((min(((unsigned short)952), ((unsigned short)15872))), ((unsigned short)49663))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((short) arr_18 [i_0]));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                var_21 = ((/* implicit */_Bool) ((arr_22 [i_5 + 1] [i_8 + 1]) ^ (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)309)))))));
                var_22 = ((/* implicit */short) arr_4 [19LL] [i_5] [i_5]);
            }
        }
        var_23 = ((/* implicit */short) min((arr_1 [i_0 - 2] [6ULL]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])), (arr_4 [i_0 - 1] [i_0] [i_0]))))));
    }
    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (unsigned int i_11 = 3; i_11 < 14; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 2; i_13 < 14; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */short) (+(((((_Bool) (unsigned short)45800)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) : (min((((/* implicit */unsigned long long int) (unsigned char)109)), (var_2)))))));
                            arr_39 [i_9] [i_9] [i_9] [i_12] [i_12] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_8), (var_8)))), (((unsigned short) var_0))))));
                        }
                        for (long long int i_14 = 1; i_14 < 13; i_14 += 3) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (_Bool)1))));
                            var_26 *= ((/* implicit */signed char) ((((unsigned int) min((arr_9 [i_10]), (((/* implicit */long long int) arr_40 [i_9] [i_12] [i_9] [i_10] [i_9]))))) + (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)4095), (((/* implicit */unsigned short) ((signed char) arr_29 [i_14 + 1] [i_9])))))))));
                        }
                        var_27 = ((/* implicit */_Bool) var_5);
                        arr_42 [i_9] [i_10] [11U] [8U] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_6)))), (var_5)))) != (((unsigned long long int) arr_21 [i_9] [i_11 - 2] [i_11 - 3] [(_Bool)1])));
                    }
                } 
            } 
        } 
        arr_43 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9])) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_9])) : (((/* implicit */int) (short)(-32767 - 1)))))));
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)180)), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [(short)12] [i_9]))) : (var_5))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)15883)))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) (unsigned char)237);
}
