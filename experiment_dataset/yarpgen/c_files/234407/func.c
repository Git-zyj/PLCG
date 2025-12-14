/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234407
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */signed char) ((max((var_1), (((/* implicit */unsigned long long int) 59600951U)))) == (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((3926372817484566789ULL) >> (((((/* implicit */int) var_7)) - (19251)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) 14520371256224984826ULL);
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_2 [i_0])));
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3926372817484566788ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (1006117569U)))))) + (2147483647))) << (((((/* implicit */int) var_11)) - (1)))));
        var_18 = ((/* implicit */int) arr_1 [i_4]);
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_16 [i_4] [i_5] = ((/* implicit */int) ((min((arr_14 [i_4 - 1] [i_5]), (((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_5])))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)38)))))))));
            var_19 = ((/* implicit */int) min((((unsigned long long int) (-(var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_5])), (arr_7 [18U] [i_4] [i_4] [i_4 + 1] [i_5] [i_5])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_4 + 1] [i_5] [4U])))))));
            var_20 = ((/* implicit */unsigned char) var_1);
            arr_17 [i_4] [(short)10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)32)), (606379844976153024ULL)));
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_4 - 1]))) % (((((((/* implicit */_Bool) 14520371256224984828ULL)) ? (594288404972061403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))) - (arr_2 [i_6])))));
            arr_20 [i_4] [(unsigned char)10] [i_6] = ((/* implicit */signed char) 3443019250U);
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((3626230736U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) | (((long long int) var_6))))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max(((-(5U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) ^ (((/* implicit */int) (_Bool)1))))) == (min((((/* implicit */unsigned long long int) var_4)), (14520371256224984819ULL)))))))))));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((6808525055101798974LL) != (288230238712758272LL)))) | (((/* implicit */int) var_7))));
                            var_25 = ((/* implicit */unsigned int) (-((+(arr_14 [i_10 + 2] [i_4 - 1])))));
                        }
                    } 
                } 
            } 
            arr_31 [i_4 + 1] [i_7] = ((/* implicit */unsigned char) max((((arr_24 [i_4 - 1] [i_4] [10U]) >> (((arr_24 [i_4 - 1] [i_7] [i_4 - 1]) - (2296146984U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
        }
        /* vectorizable */
        for (short i_11 = 2; i_11 < 10; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 2; i_12 < 8; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (signed char i_14 = 1; i_14 < 8; i_14 += 4) 
                    {
                        {
                            arr_42 [i_13] [i_11] [i_11] [i_12 + 3] [i_13] [i_13] [i_14] |= ((/* implicit */signed char) ((var_8) ^ (((/* implicit */int) var_10))));
                            var_26 = ((851948045U) >> (((((/* implicit */int) var_6)) + (1719))));
                        }
                    } 
                } 
            } 
            arr_43 [i_4 + 1] [(unsigned char)4] = ((/* implicit */long long int) ((arr_2 [i_11]) / (((/* implicit */unsigned long long int) (+(var_4))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 7; i_16 += 1) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned short) (+(var_12)));
                        var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_14) >> (((/* implicit */int) (unsigned char)32)))))));
                    }
                } 
            } 
        }
    }
    for (short i_17 = 1; i_17 < 17; i_17 += 4) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= ((-(((/* implicit */int) var_9))))))) >> (((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_8 [i_17 + 1] [(_Bool)1])))))) - (25662)))));
        arr_54 [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned char)191))) != (var_12)))), (((668736572U) % (3845047257U)))));
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned int i_19 = 1; i_19 < 14; i_19 += 4) 
            {
                for (unsigned short i_20 = 3; i_20 < 17; i_20 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_60 [i_20 - 2] [i_19 + 3] [(short)1] [i_17 + 1] [i_19])) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)176)) - (153))))) : (max((((/* implicit */int) var_3)), (var_12))))) == (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) >> (0ULL)))) != (var_14))))));
                        arr_61 [i_17 + 1] [i_20] = ((/* implicit */int) max((((((/* implicit */int) arr_53 [i_17 + 1])) == (((/* implicit */int) arr_53 [i_17 - 1])))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_53 [i_17 + 1]))))));
                    }
                } 
            } 
        } 
        var_31 = ((((3926372817484566773ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_11)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (arr_8 [2] [2])))))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [(signed char)2])) | (var_12)));
    }
}
