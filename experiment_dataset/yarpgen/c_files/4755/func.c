/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4755
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
    var_11 = ((/* implicit */unsigned char) var_9);
    var_12 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) min((var_9), (var_9)))), (var_10)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (var_1) : (var_3))), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)));
                arr_6 [3LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_5)))) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) var_2))))))));
                arr_7 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) var_2)) : ((+(var_5)))))) ? (((unsigned long long int) var_10)) : (var_3)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] [5U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))) : (min((((/* implicit */unsigned long long int) max((var_8), (var_7)))), (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) var_10))))))));
                            arr_13 [i_2] [i_3] [i_2] [i_2] [0LL] [i_1] [i_2] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)))))));
                            var_14 += ((/* implicit */short) min(((~(var_0))), (((/* implicit */unsigned long long int) ((var_6) - (var_5))))));
                            arr_14 [i_1] [i_1] [i_4] [2] [2] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))), ((+(var_3)))));
                            arr_15 [2] [2] [i_2] [1U] = ((/* implicit */unsigned int) (+(((long long int) var_2))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] &= ((/* implicit */unsigned short) var_4);
                        arr_23 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                        arr_24 [i_0 - 3] [i_0 - 3] [7ULL] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(max((var_5), (((/* implicit */long long int) var_7))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        arr_25 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)59658))));
                    }
                } 
            } 
            arr_26 [3LL] [i_1] = ((/* implicit */long long int) var_1);
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_29 [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1)));
            arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1)));
            /* LoopSeq 3 */
            for (unsigned short i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                arr_33 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) var_4))))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                arr_37 [i_0 - 3] [i_7] [8LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : ((-(var_1)))));
                            arr_45 [i_11 - 1] [i_7] [i_9] [10U] = ((/* implicit */unsigned int) (+(((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                arr_50 [(unsigned char)12] [8ULL] [8ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))) ? (var_6) : ((~(var_6))));
                arr_51 [i_0 - 1] [i_0 - 1] [i_7] [i_12] = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(var_6)))));
                }
                for (long long int i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
                {
                    arr_60 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) var_3);
                    arr_61 [i_0] [i_0] [i_12] [3LL] [i_7] [11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (var_10) : (var_10)))));
                    arr_62 [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_3)));
                    arr_63 [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_14 + 2] |= ((/* implicit */long long int) ((((/* implicit */long long int) var_2)) >= (var_5)));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+((-(((/* implicit */int) var_7)))))))));
                }
                for (long long int i_15 = 1; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) var_2)))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (var_6)));
                    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                    var_22 ^= ((/* implicit */unsigned short) var_9);
                }
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(var_10))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_0))))));
            }
            var_25 ^= ((/* implicit */unsigned long long int) var_4);
        }
        /* LoopSeq 1 */
        for (long long int i_16 = 2; i_16 < 11; i_16 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_9);
            var_27 = ((/* implicit */unsigned long long int) (-(var_6)));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                arr_73 [i_0] [i_16 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) var_10))))) ? ((~(min((((/* implicit */unsigned long long int) var_9)), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_6)))) : (min((var_0), (((/* implicit */unsigned long long int) var_6))))))));
                var_29 = (-(var_10));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))) : (var_4)));
                var_31 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), ((-(var_10))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((unsigned int) 547327363U)))))))));
            }
            arr_74 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1913206817496885701LL)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_3)))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_3))) : (((/* implicit */unsigned long long int) ((long long int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (var_6))))));
            var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_4)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_9))))))))));
        }
        var_33 |= ((/* implicit */unsigned long long int) var_7);
    }
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) 
    {
        arr_79 [i_18] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 16; i_19 += 1) 
        {
            arr_82 [i_19] [i_19] = ((/* implicit */unsigned long long int) (+(-7339133430942547958LL)));
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                var_34 = ((/* implicit */short) var_2);
                var_35 = ((/* implicit */int) var_5);
            }
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) var_2)) : (((unsigned int) var_9))));
                arr_89 [i_18] [i_18] |= ((((/* implicit */_Bool) var_10)) ? (((((var_5) + (9223372036854775807LL))) >> (((var_5) + (1640450728962076308LL))))) : ((+(var_5))));
                arr_90 [(unsigned short)13] = ((/* implicit */unsigned int) (-(var_6)));
                var_37 -= ((/* implicit */unsigned short) var_2);
                var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_22 = 0; i_22 < 16; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_23 = 1; i_23 < 15; i_23 += 1) 
            {
                for (short i_24 = 0; i_24 < 16; i_24 += 4) 
                {
                    {
                        arr_98 [i_18] [i_18] [i_23] [i_23 - 1] [i_18] = ((/* implicit */int) var_8);
                        arr_99 [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_5)))) ? (((long long int) var_6)) : ((-(var_5)))));
                        arr_100 [(unsigned char)1] [i_23] [i_22] [i_23] = ((/* implicit */unsigned int) var_5);
                        var_39 = ((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))))));
                        var_40 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
            arr_101 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))))) ? (min((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
            var_41 = ((/* implicit */int) var_4);
            var_42 += ((long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))), (((long long int) var_3))));
        }
        arr_102 [i_18] = ((/* implicit */long long int) var_2);
        arr_103 [i_18] &= ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1)))))));
    }
    for (unsigned int i_25 = 0; i_25 < 18; i_25 += 1) 
    {
        var_43 ^= ((((/* implicit */_Bool) var_10)) ? (var_4) : ((+(min((var_4), (var_5))))));
        var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    }
}
