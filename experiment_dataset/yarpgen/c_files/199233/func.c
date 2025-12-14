/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199233
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned int) (signed char)74);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [i_2] = ((((/* implicit */int) ((4170499218U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))) * (((/* implicit */int) var_7)));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13600)) ? (((/* implicit */int) (unsigned short)19904)) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-100))));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned long long int) arr_10 [(short)16] [i_1] [i_5 + 1])))));
                        }
                        for (long long int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_14 += ((_Bool) var_7);
                            arr_22 [(short)4] [i_1] [(_Bool)1] [(unsigned short)13] = ((/* implicit */unsigned int) ((((/* implicit */int) ((4294967280U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) + (((/* implicit */int) var_2))));
                            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_4] [i_1 - 1] [i_4 + 1] [i_4 + 1] [i_6 - 1]))));
                        }
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_1] [15LL] [15LL] [15LL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)64384)) : (((/* implicit */int) (unsigned short)4095))))) % (9378355451364687307ULL)));
                            arr_28 [i_8] [i_1] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_0] [i_4 + 2] [i_4 + 2] [i_4] [i_8] [i_4] [i_1 - 1]))));
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)31775))));
                            arr_29 [i_1] [i_1 - 1] [7] [i_4] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-20706)))))));
                        }
                        arr_30 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) var_10);
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_33 [(short)8] [i_1] = ((/* implicit */unsigned long long int) (-(var_3)));
                        var_19 = ((/* implicit */unsigned char) ((short) var_6));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_20 = min((var_0), (((short) (_Bool)1)));
                    arr_36 [4U] &= ((/* implicit */long long int) var_1);
                }
                var_21 *= ((/* implicit */int) var_5);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 112573881U))) >= (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 470980329U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-86))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)46286))))))));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_23 |= ((short) arr_14 [0] [i_13] [(short)0] [(_Bool)1]);
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_12] [i_12] [(short)8] [18ULL] [i_12])) ? (var_9) : (((/* implicit */long long int) min((max((970856910U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))))))));
                                arr_50 [i_11] = ((/* implicit */int) (-(var_6)));
                                arr_51 [i_13] [(short)12] [6LL] &= ((/* implicit */long long int) ((((min((var_6), (((/* implicit */unsigned int) var_8)))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) ? (max((arr_12 [(_Bool)1] [i_12] [i_13] [(_Bool)0] [i_12]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((((/* implicit */int) arr_31 [i_11] [i_11] [i_11] [i_11])) + (2147483647))) >> (((((/* implicit */int) var_0)) + (29182))))) >= (((/* implicit */int) (unsigned short)44268))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-(1662727741))))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 3; i_16 < 11; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            {
                                arr_60 [i_16 + 1] [i_12] [i_11] [i_16] [i_12] [i_13] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [1U])) ? (1233626870) : (((/* implicit */int) var_4))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_10))))) == (((/* implicit */unsigned int) (+(var_1))))));
                                var_26 = ((/* implicit */signed char) ((_Bool) ((unsigned char) var_8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */_Bool) (-(-1233626884)));
                                var_28 ^= ((/* implicit */int) ((((unsigned int) (signed char)44)) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
