/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199421
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (-3597846715330216804LL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_0 - 2] [i_1 - 2]) * (var_3)));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) 0));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18))));
            var_19 = (-(((/* implicit */int) (short)274)));
            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (-1) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2]))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_2 [i_0 - 1] [i_0 + 1])));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_6));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0 - 2])) >= (((/* implicit */int) (signed char)-9)))))));
            arr_17 [i_3] [i_0] = ((/* implicit */_Bool) 3597846715330216823LL);
        }
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_4 [i_0] [i_4]);
                            arr_28 [i_0] [i_4] = ((/* implicit */long long int) var_18);
                        }
                    } 
                } 
            } 
            var_23 *= var_18;
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25946)) ? (0LL) : (((/* implicit */long long int) arr_9 [i_0] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_4 + 2] [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_31 [i_8] = ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8]))) : (arr_19 [i_8] [i_8])));
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) min((1), (((/* implicit */int) (signed char)-23))))) & (((((/* implicit */_Bool) -3597846715330216809LL)) ? (((/* implicit */unsigned int) 0)) : (1870572386U)))));
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_26 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */short) (unsigned char)30))))) ? (((unsigned int) arr_26 [i_9] [i_9] [i_9] [i_9] [(short)6])) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)246)))))))), (arr_4 [i_9] [i_9])));
        arr_34 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((-8574636054958414239LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61986)))))) && (((((/* implicit */unsigned long long int) arr_1 [i_9])) > (10292450431906156560ULL)))));
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 9; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_11] [i_10 - 4] [i_11] [i_11])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_11] [i_10 - 4] [i_13] [i_13])) / (arr_43 [i_11] [i_10 - 4] [i_11] [i_12] [i_12]))))));
                                var_28 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) max(((short)700), (((/* implicit */short) (signed char)-24)))))))) && (((/* implicit */_Bool) (~(var_7)))));
                            }
                        } 
                    } 
                    arr_47 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10 + 1] [i_10 - 1])) ? (-62982754) : (((/* implicit */int) arr_37 [i_10 + 1] [i_10 + 2])))))));
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) max((min((var_12), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) var_8))));
    }
    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        arr_52 [i_14] = ((/* implicit */unsigned int) (((((+(((/* implicit */int) min((var_18), (((/* implicit */short) var_1))))))) + (2147483647))) >> ((((~(((/* implicit */int) ((signed char) arr_0 [i_14]))))) + (75)))));
        arr_53 [i_14] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_14] [i_14])) ? (arr_4 [i_14] [i_14]) : (((/* implicit */long long int) var_11)))), ((-(arr_4 [i_14] [i_14])))));
        arr_54 [i_14] = ((long long int) var_15);
    }
    var_30 = ((/* implicit */int) var_14);
    var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_7)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_17)))) / (var_12)))));
    /* LoopNest 3 */
    for (short i_15 = 2; i_15 < 18; i_15 += 4) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-((-(((/* implicit */int) var_14)))))))));
                    var_33 += ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_6))))))), (((/* implicit */int) (signed char)50))));
                    var_34 = ((/* implicit */_Bool) ((-8574636054958414248LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
                    var_35 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */int) (unsigned char)28)) * (-1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */int) (unsigned short)10876))));
                }
            } 
        } 
    } 
}
