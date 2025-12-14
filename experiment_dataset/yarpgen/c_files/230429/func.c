/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230429
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
    var_13 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((unsigned char) -10LL))) * (((/* implicit */int) var_1)))));
    var_14 = ((/* implicit */long long int) (short)0);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (var_4) : (arr_2 [(unsigned char)7] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (-4884406735283772396LL))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((long long int) arr_2 [i_0] [4LL])), (((/* implicit */long long int) (unsigned char)9)))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned int i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_2] [i_1] [i_2] [(unsigned short)14]));
                            var_17 = ((/* implicit */short) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))));
                            arr_14 [i_0] [(unsigned char)0] [i_0] [i_1] [i_4] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned char)164)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_1] = ((/* implicit */long long int) ((int) arr_7 [i_1] [i_0] [i_1]));
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned int) var_12);
                        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 6761475240765330254LL)))) ? (((/* implicit */int) max((((signed char) var_2)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_6] [i_7] [i_6])) && (((/* implicit */_Bool) var_8)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [3] [3] [3] [3])) : (((/* implicit */int) (unsigned char)236))))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_26 [(unsigned char)4] &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) << (((((/* implicit */int) ((unsigned short) var_11))) - (30172)))))));
        arr_27 [i_8] = ((/* implicit */long long int) max(((signed char)125), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)120))))))))));
        arr_28 [i_8] = ((/* implicit */short) var_7);
        arr_29 [12U] |= ((/* implicit */unsigned char) 542114618568333740LL);
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(min((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned short)65535))))), (-5450947511844575173LL))))))));
                    var_20 = ((/* implicit */_Bool) (~((-(17100192142294450437ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)253))))) / (arr_21 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_45 [9LL] [i_11] [i_12] [i_14] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((long long int) arr_21 [i_12 - 1] [i_12 - 1] [i_11] [i_13] [i_12 - 1] [i_12 - 1]));
                        arr_46 [i_11] [i_12] [i_12 + 3] [i_14] = ((/* implicit */unsigned short) arr_8 [i_11]);
                        var_22 += (!(((/* implicit */_Bool) arr_10 [10LL] [(unsigned char)4] [(_Bool)1] [i_13] [i_11])));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        for (unsigned char i_16 = 2; i_16 < 9; i_16 += 1) 
        {
            for (signed char i_17 = 2; i_17 < 7; i_17 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) (unsigned char)20)), (-4859695776649627491LL))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((signed char) arr_42 [6LL] [i_16] [i_16] [i_16])), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)11))))))))) : (((long long int) ((long long int) var_1)))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (unsigned char)21))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_0))) - (((/* implicit */int) arr_41 [i_17 + 3] [i_16 - 2]))))) ? (((var_0) * (((/* implicit */int) min(((unsigned char)78), (((/* implicit */unsigned char) (signed char)0))))))) : (((/* implicit */int) ((signed char) arr_1 [i_16 - 2] [i_17 - 1])))));
                                arr_60 [i_17] [(signed char)6] [i_17] [(signed char)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)193), ((unsigned char)15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) arr_36 [(unsigned short)0] [i_17])), (var_11)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
