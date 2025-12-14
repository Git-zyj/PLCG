/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200429
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-126)))))) <= ((-(((/* implicit */int) (short)-23000))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */int) max((var_4), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_2))) && (((((/* implicit */int) var_4)) < (((/* implicit */int) var_2)))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) (signed char)0)))))) ? (var_1) : ((((-(var_9))) / (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_3)))))))));
        var_13 *= ((/* implicit */signed char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */int) ((var_6) <= (var_6)))) <= ((+(var_9))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_8))))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))))))));
                    arr_12 [i_1] [i_2] [i_2] [i_3] = min((var_6), (((/* implicit */long long int) var_1)));
                    var_16 = ((/* implicit */int) var_6);
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */int) min((var_7), (((/* implicit */short) var_2))))) < (var_5)));
        var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) (!(((var_6) > (((/* implicit */long long int) var_9))))))), (max(((-(-5312173514100315889LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) var_9)) / (var_6))), ((-(var_6))))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((max((((var_8) / (var_8))), (((/* implicit */long long int) var_3)))) & (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7)))) ? (((var_6) / (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
                        arr_22 [8] [(short)6] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_4)))) < (((/* implicit */int) var_4))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 11; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_8), (var_6))))))));
                            arr_31 [(signed char)4] [(_Bool)1] [i_7] [i_8] [i_9] = var_6;
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((max((var_5), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-81)))))) & (((/* implicit */int) var_4))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                            var_23 = ((((/* implicit */int) var_3)) - ((((-(var_1))) + (((var_9) + (var_5))))));
                        }
                        var_24 += ((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((((/* implicit */long long int) var_9)) < (var_8))))))));
                        arr_35 [i_1] [i_4] [i_4] [i_8] |= var_9;
                    }
                } 
            } 
        }
        arr_36 [i_1] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (5611847208328998091LL)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_0))))) != (((/* implicit */int) var_7))));
            var_26 = ((/* implicit */long long int) var_5);
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (-(((((/* implicit */int) var_4)) - (((/* implicit */int) var_2))))));
                            var_28 += ((/* implicit */short) ((var_8) + (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                            arr_49 [i_12] [i_12] = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_3)))));
                            var_29 ^= ((/* implicit */signed char) ((short) var_1));
                            arr_50 [i_11] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_8)))))));
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_8))));
                        arr_59 [i_18] [i_18] [12LL] [12LL] [i_18] [16LL] &= ((/* implicit */signed char) var_7);
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 18; i_19 += 2) 
                        {
                            arr_62 [i_17] [i_17] = ((/* implicit */short) var_6);
                            arr_63 [i_18] [i_18] [i_19] |= ((/* implicit */long long int) ((int) var_9));
                            arr_64 [i_16] [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_5)))) ? (((/* implicit */int) ((signed char) var_6))) : (var_9));
                        }
                    }
                } 
            } 
            arr_65 [i_11] [(short)12] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6));
            var_33 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (var_9));
        }
        arr_66 [(_Bool)1] = ((/* implicit */long long int) var_2);
    }
    for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
    {
        arr_69 [i_20] = ((/* implicit */short) ((((int) 7721025029231255385LL)) <= ((-(min((var_5), (((/* implicit */int) var_2))))))));
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-80)))))));
        var_35 = ((int) 5611847208328998091LL);
    }
}
