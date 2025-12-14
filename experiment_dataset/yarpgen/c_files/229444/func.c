/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229444
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) ^ ((~(5430373366131435986LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                var_14 -= max((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)127));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */_Bool) arr_3 [i_2]);
                            var_16 = ((/* implicit */signed char) max(((((~(15867429803024090485ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_6))))))), (arr_11 [i_1] [i_1])));
                        }
                    } 
                } 
                var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2579314270685461131ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_13 [i_0] [(unsigned char)10] [i_0] [i_0] [(unsigned char)19])) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0])) != (((/* implicit */int) (signed char)-16)))))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (15867429803024090516ULL))) : (((/* implicit */unsigned long long int) ((((((arr_7 [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) + (2147483647))) << (((/* implicit */int) var_10))))));
                arr_14 [i_0] [i_0] |= ((max((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_10 [i_0] [i_1] [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (signed char)18)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_12))) > (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_6])) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_5])) : (((/* implicit */int) arr_17 [i_4] [i_5]))))), (2579314270685461131ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */short) max(((-(1914548437U))), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_11 [(unsigned short)19] [i_5])) & (((/* implicit */int) var_1)))))))));
                                arr_25 [i_4 - 1] [i_5] [i_6] [i_7] [i_7] [i_8] [i_6] |= ((/* implicit */long long int) max((max((((2579314270685461130ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_6]))))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_4 + 2])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) arr_9 [i_9]);
                                arr_33 [i_4] [i_10] = ((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_9] [i_10]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        arr_37 [i_4] [i_5] [i_9] [i_4] = (~(-447319756578377448LL));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5U))))) : (((var_3) ? (((/* implicit */int) arr_30 [i_4 - 2] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) var_7))))));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) ((arr_28 [(unsigned char)2] [i_5] [(unsigned char)2]) != (((/* implicit */long long int) (~(var_4))))))) : ((~((~(((/* implicit */int) var_1))))))));
                    arr_42 [i_4] [(unsigned short)16] [(signed char)0] [i_4 - 1] |= ((/* implicit */_Bool) (signed char)-106);
                    arr_43 [i_4] [i_4] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) ((arr_18 [i_4] [i_5] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                arr_44 [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_5 [i_4] [i_5] [i_5]) ? (((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_5 [i_4 + 1] [i_5] [i_5]))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [(_Bool)1] [i_5] [i_4 + 2] [i_4] [i_4] [i_4]))) / (arr_3 [i_4])))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        {
                            arr_52 [i_4] [i_14] [i_14] [i_15] = (signed char)16;
                            var_23 ^= ((/* implicit */unsigned short) max((977123638U), (((/* implicit */unsigned int) (signed char)-14))));
                            var_24 = ((/* implicit */unsigned char) max((15867429803024090520ULL), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
                arr_53 [i_4] = ((/* implicit */unsigned char) var_9);
                var_25 = ((/* implicit */unsigned short) 4294967271U);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned short i_19 = 4; i_19 < 10; i_19 += 3) 
                {
                    {
                        arr_65 [i_16] [i_17] [i_19] = (-(((((((/* implicit */_Bool) arr_10 [i_16] [i_17] [i_18] [i_16])) ? (((/* implicit */int) arr_7 [i_16] [i_16] [i_16])) : (((/* implicit */int) var_7)))) | (((/* implicit */int) ((_Bool) arr_12 [i_16] [i_17]))))));
                        var_27 -= ((/* implicit */unsigned int) ((short) (+(arr_62 [i_19 + 1] [i_19] [i_19 - 2] [i_19 + 1]))));
                        arr_66 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_4);
                        var_28 ^= ((/* implicit */int) ((((((/* implicit */int) arr_15 [i_19 - 4])) ^ (((/* implicit */int) arr_15 [i_19 - 4])))) < (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_15 [i_19 + 1])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
    {
        var_29 -= arr_38 [i_20];
        arr_70 [(signed char)2] &= ((/* implicit */unsigned int) ((arr_49 [i_20] [16ULL] [i_20] [16ULL]) < (((/* implicit */unsigned int) ((int) arr_50 [i_20] [4U] [i_20] [i_20])))));
    }
}
