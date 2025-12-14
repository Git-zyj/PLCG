/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218918
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_3 [(unsigned char)15]))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_12 [i_2] |= arr_6 [i_2] [i_2];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_6 [14U] [i_2]))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((_Bool)1) ? (3171793192U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_2 [i_4]);
                            arr_24 [(short)10] [i_5] [i_4] [i_5] [(short)10] = ((/* implicit */unsigned int) arr_6 [i_2] [i_2]);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967290U))))));
                            var_18 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_4 - 1] [i_3 - 2]))));
                        }
                    } 
                } 
                arr_25 [i_2] [i_2] &= ((/* implicit */signed char) var_11);
                arr_26 [i_3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [8LL] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) var_2)))));
            }
        }
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-89)) + (((/* implicit */int) (unsigned char)183))));
        var_20 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [17U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_2]))) : (var_9)))), (((arr_18 [i_2]) ? (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [2U]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) arr_21 [i_2] [i_2] [(short)0] [i_2] [(unsigned char)10]))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        arr_31 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_7])) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_7]))))));
        arr_32 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_27 [i_7]))))) ? (((/* implicit */int) arr_30 [3U])) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_7])) >= (((/* implicit */int) arr_27 [i_7]))))));
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned int) var_8);
        var_21 = ((/* implicit */unsigned long long int) arr_29 [i_8]);
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)89)) + (((/* implicit */int) (signed char)76)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_29 [i_8])))) >= (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_9])) : (((/* implicit */int) arr_37 [i_9])))))));
        arr_39 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) arr_28 [i_9])) : (((/* implicit */int) var_6))));
        var_24 += ((/* implicit */signed char) ((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((var_4) ? (((/* implicit */int) arr_34 [i_9])) : (((/* implicit */int) arr_37 [(unsigned short)20])))) : (((/* implicit */int) var_3))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (short)-18925)) : (((/* implicit */int) (short)18925))));
        var_26 -= ((/* implicit */unsigned char) (+(arr_38 [i_9])));
    }
}
