/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49421
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) == (((/* implicit */int) arr_3 [i_0] [i_1])))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1]))))));
            var_20 = ((/* implicit */unsigned char) var_12);
            var_21 ^= ((/* implicit */unsigned short) (~(((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            arr_6 [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
        }
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_8))))))))));
            var_22 -= ((/* implicit */unsigned int) var_5);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_23 = (i_3 % 2 == 0) ? (((/* implicit */short) (-(max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((var_3) + (arr_11 [i_3] [i_2] [i_3] [i_3])))))))) : (((/* implicit */short) (-(max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((var_3) - (arr_11 [i_3] [i_2] [i_3] [i_3]))))))));
                var_24 = (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_0 [i_2])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_25 += ((/* implicit */short) ((long long int) ((min((arr_2 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_8)))) <= (min((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_2] [i_3]))))));
                            arr_17 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_1))) ? (((/* implicit */int) ((arr_2 [i_3] [i_3]) != (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_3] [i_4]))))) : ((-(((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (arr_14 [i_3])))) == (((var_13) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) - (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ^ (((var_3) ^ (var_15))))) % (min((((/* implicit */long long int) min((((/* implicit */signed char) var_13)), (var_5)))), (arr_5 [i_0] [i_0])))));
                arr_20 [i_3] = ((/* implicit */unsigned long long int) ((min((min((var_1), (((/* implicit */long long int) arr_3 [i_3] [i_2 + 1])))), (((/* implicit */long long int) ((unsigned int) var_10))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) var_18)) != (var_0))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_2] [i_0]))))))));
            }
            arr_24 [i_0] [i_2 - 1] = ((/* implicit */short) (((((~(((/* implicit */int) arr_22 [i_2 - 2] [i_2] [i_2] [i_2 + 1])))) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) - (38)))));
            arr_25 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_0])))) != (var_12))))) < (var_15)));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) arr_27 [i_7]);
            arr_28 [i_7] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_0])) * (((/* implicit */int) var_16)))))));
        }
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    {
                        arr_41 [i_8] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_39 [i_8 + 2]))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_14 [i_9]))));
                        /* LoopSeq 1 */
                        for (int i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            arr_44 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (((var_18) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                            arr_45 [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) << (((/* implicit */int) var_16)))) >> ((((~(((/* implicit */int) var_7)))) + (1467)))));
                        }
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((arr_23 [i_10 + 1] [i_10 + 1] [i_8 + 4]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))))));
                        var_31 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_39 [i_8])) - (((/* implicit */int) arr_15 [i_0] [i_0] [i_10] [i_0] [i_0])))));
                    }
                } 
            } 
            arr_46 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8]))))) * (((/* implicit */int) ((((/* implicit */long long int) var_18)) == (var_15))))));
        }
    }
    /* LoopSeq 2 */
    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        arr_49 [i_12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */long long int) arr_47 [i_12])) : ((-(var_15)))))) && (((((/* implicit */int) ((unsigned short) var_18))) > (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))))));
        arr_50 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_15);
    }
    for (int i_13 = 2; i_13 < 18; i_13 += 4) 
    {
        arr_54 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))) / (max((((/* implicit */long long int) var_18)), (var_10)))))) ? (((((/* implicit */int) min((var_17), (var_14)))) - (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_51 [i_13])))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) != (((/* implicit */int) var_5)))))));
        arr_55 [i_13] [i_13] |= ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_52 [i_13] [i_13])), (max((var_14), (var_6))))), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [i_13])) != (arr_48 [i_13])))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (unsigned short i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                for (long long int i_16 = 1; i_16 < 17; i_16 += 1) 
                {
                    {
                        arr_62 [i_13] [i_16] [i_13] [i_13] [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) min((var_11), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_13]))) != (var_15)))))))));
                        arr_63 [i_16] = ((/* implicit */unsigned char) (-((-(arr_47 [i_13])))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */long long int) var_18)) >= (var_10))) && (((/* implicit */_Bool) var_10))))), (((unsigned int) ((var_1) > (var_15)))))))));
    }
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_14))))))))));
}
