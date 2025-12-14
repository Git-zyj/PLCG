/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218195
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
    var_18 = ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [0LL] |= (~(((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28672))) : (var_5)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_19 ^= ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])) : (var_3))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (3066598823U) : (arr_8 [i_0] [i_1] [i_2] [i_0])));
                arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_1]))));
            }
            for (int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */int) arr_12 [(unsigned char)15] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) 2050711713U);
                            arr_20 [8LL] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_1])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)60))) : (1307051002808556165LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13369))) : (2314577658U))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3 - 2] [i_0]);
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_6] [i_0])), ((~(((/* implicit */int) (short)-11227))))))) ? (((/* implicit */long long int) (-(3443817991U)))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) -276698071)) ? (1980389637U) : (4294967272U)))), ((~(8973707874962852480LL)))))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_32 [i_0] [(unsigned char)2] [i_0] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_0] [21U])) ? (((/* implicit */int) arr_13 [i_6] [i_6] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)52151)))) ^ (((/* implicit */int) ((signed char) (-2147483647 - 1))))));
                        arr_33 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_4 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)11226)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51452)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_7] [i_8]))) : (2583199660806656196LL)))) ? (arr_15 [i_8] [i_7] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1108188273))))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */signed char) arr_16 [i_9] [10U] [i_9] [i_9]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) >> ((((-(((/* implicit */int) var_8)))) + (16)))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_9] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_34 [i_9]))))) * (arr_15 [i_9] [i_9] [i_9] [i_9])));
        arr_37 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)18)) != (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_42 [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2090846819253149929LL)) ? (arr_26 [i_10] [i_10] [i_10]) : (arr_26 [i_10] [i_10] [i_10])));
        arr_43 [(unsigned short)8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16384)) ? (72958138) : ((~(((/* implicit */int) arr_12 [i_10] [i_10]))))));
        var_24 += ((/* implicit */unsigned char) (-(arr_26 [i_10] [i_10] [i_10])));
        arr_44 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_10] [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_10] [i_10])))))) : ((-(var_1)))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (long long int i_12 = 2; i_12 < 13; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 27644593U)) ? (((/* implicit */int) arr_19 [i_10] [i_11])) : (((/* implicit */int) arr_19 [6] [i_11])))))));
                        var_26 = ((/* implicit */unsigned int) arr_6 [(unsigned char)14] [(unsigned char)14] [i_12]);
                    }
                } 
            } 
        } 
    }
}
