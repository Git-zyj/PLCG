/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29813
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) -8384347023916480157LL);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)31241))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) (!((_Bool)1)));
            arr_9 [14U] |= (-(arr_8 [10U]));
        }
        for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))));
            var_21 = ((/* implicit */unsigned short) arr_4 [i_1]);
        }
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) arr_18 [i_1] [i_4] [i_5] [i_6]);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (arr_14 [i_1] [i_1 + 2] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_4) : (arr_5 [i_1 + 1])));
                    }
                } 
            } 
            var_25 *= 0U;
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (72055395014672384LL)))));
        }
        arr_22 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-31242))));
        var_27 = ((/* implicit */short) ((unsigned int) (short)14580));
    }
    var_28 = max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-812))))) : (min((var_15), (((/* implicit */unsigned int) (unsigned short)20361)))))));
    var_29 = ((/* implicit */unsigned short) ((min((var_2), (((/* implicit */unsigned int) var_3)))) >> (((((/* implicit */int) max(((short)31244), (((/* implicit */short) (_Bool)1))))) - (31231)))));
    /* LoopSeq 3 */
    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        var_30 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)31241))));
        var_31 = ((/* implicit */long long int) arr_25 [(short)16]);
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_3 [i_9]))));
                    arr_32 [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) arr_6 [i_8] [i_9] [i_10]);
                    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_8] [i_9]))));
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_7 [i_8] [i_8] [i_8]) : (((650218583U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        var_35 -= (+(3644748713U));
    }
    for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        var_36 = min((((max((arr_34 [(short)14] [i_11]), (((/* implicit */unsigned int) arr_33 [(unsigned short)4])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((9019639540084761673LL) >= (((/* implicit */long long int) 8U)))))))), (((/* implicit */unsigned int) max((arr_33 [i_11]), (var_13)))));
        arr_36 [i_11] [12U] &= ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [12U]))) ^ (var_15))) - (1357255662U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967295U)))))))) : (var_4));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) -3025283452870288561LL);
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1324591546131205144LL)) ? (-1LL) : (((/* implicit */long long int) 0U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)29891), (((/* implicit */unsigned short) (_Bool)0)))))) : (arr_39 [i_11] [i_12] [i_12]))))))));
                }
            } 
        } 
    }
}
