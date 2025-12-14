/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233921
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0 - 3]))))), (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (var_11)))));
        var_13 = ((/* implicit */signed char) (short)-6015);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        var_14 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (signed char)47)))));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            var_15 = ((/* implicit */long long int) var_9);
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(var_4))))));
            /* LoopNest 3 */
            for (long long int i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)60))));
                            arr_20 [i_1] [i_3] [i_1] = ((/* implicit */short) var_4);
                            var_18 = ((/* implicit */_Bool) var_10);
                            var_19 = arr_13 [i_1] [i_3] [i_1] [i_1];
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned int i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_2);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                            arr_28 [i_1] [i_2] [i_7] [i_7 - 1] [i_2 - 2] = ((/* implicit */_Bool) ((long long int) ((long long int) var_2)));
                            arr_29 [i_1] [i_7] [i_6] [i_7] [i_8 + 1] = ((/* implicit */short) (-((-(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (signed char)-47);
            }
            for (signed char i_9 = 3; i_9 < 24; i_9 += 4) 
            {
                var_23 = ((/* implicit */signed char) 4038171781U);
                arr_33 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_9 - 1] [(_Bool)1] [i_9])) : (((/* implicit */int) var_7))));
                arr_34 [i_1] [i_1] [(short)2] [i_9 - 1] = (!(var_4));
                /* LoopSeq 1 */
                for (signed char i_10 = 2; i_10 < 23; i_10 += 4) 
                {
                    var_24 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (signed char)47)) - (47)))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (signed char)-107))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (var_9))))));
                    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)47))));
                    var_27 = ((/* implicit */signed char) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_10])))));
                }
            }
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 3; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_28 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                        var_29 = ((/* implicit */_Bool) var_12);
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 21; i_14 += 4) 
            {
                for (unsigned int i_15 = 4; i_15 < 21; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30))))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
                        arr_52 [(short)21] [i_13] [(signed char)4] [i_13] = ((/* implicit */short) (~(((/* implicit */int) (signed char)127))));
                        var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */int) (signed char)(-127 - 1))) | (arr_44 [i_15] [i_1 - 1] [i_14 + 1])))));
                    }
                } 
            } 
            arr_53 [i_1] [i_13] = ((/* implicit */short) ((long long int) arr_38 [i_1] [i_1 - 1] [i_1 - 1]));
            arr_54 [i_1] [i_13] [i_13] = ((/* implicit */short) ((var_12) << (((((/* implicit */int) (signed char)-47)) + (59)))));
            arr_55 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) 1225286897)))))));
        }
        arr_56 [i_1] = var_11;
        arr_57 [i_1] [6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) 1225286897)) : (0ULL)))));
        arr_58 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_1])) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) var_8))))) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
    }
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((var_5) % (((/* implicit */int) var_0))))) : (var_9)))) ? ((+(((/* implicit */int) min(((signed char)60), (var_8)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
}
