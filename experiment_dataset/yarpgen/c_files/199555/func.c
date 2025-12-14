/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199555
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
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)32750)))) ? (((arr_5 [i_0] [i_1]) ? (arr_0 [i_1] [(signed char)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [3LL] [i_0]))))));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) <= (var_6))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (1274099091U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-24062)) * (((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_2))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_13 [i_0] = ((/* implicit */unsigned int) var_1);
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3]))));
            }
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((unsigned long long int) ((_Bool) arr_7 [i_0] [i_0] [i_1])))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_5 [i_0] [(unsigned char)8]))));
            arr_17 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [(signed char)8] [i_0]))));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 34225520640LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10831))) : (-3363504428095953461LL)));
            var_21 = ((/* implicit */unsigned int) ((arr_14 [i_0] [(unsigned char)4] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_21 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_19 [i_5] [i_0] [(unsigned short)1]))))));
            arr_22 [i_0] = ((/* implicit */_Bool) ((short) 2653129029U));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned long long int) arr_24 [9U] [9U] [i_6] [i_7]);
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_0] [i_5] [i_6])))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) && (arr_1 [i_0])));
                        var_24 = ((/* implicit */unsigned short) 2147483643);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1874281098832161612LL)) : (262143ULL)))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) < (((/* implicit */int) arr_1 [(short)13])))) ? (((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (var_5))) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_8] [i_9] [i_0]))));
                        var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 252U)))) ? (((/* implicit */int) arr_28 [i_0] [i_8] [6] [i_10] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_28 -= var_4;
        arr_41 [i_11] [i_11] &= ((/* implicit */_Bool) arr_39 [i_11]);
        arr_42 [i_11] [(short)1] = ((/* implicit */unsigned short) arr_18 [i_11]);
        var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11]))));
    }
}
