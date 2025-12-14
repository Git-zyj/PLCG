/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41124
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
    var_13 = ((/* implicit */int) var_3);
    var_14 &= ((/* implicit */signed char) (_Bool)0);
    var_15 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)4032))) * (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((min(((~(arr_2 [i_1] [5ULL]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) ^ (4294967295U))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_7) ? (((/* implicit */int) (short)4032)) : (((/* implicit */int) var_6)))))))));
            var_17 = (+(((unsigned long long int) max((var_3), (((/* implicit */short) arr_3 [i_0] [i_0]))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (short i_3 = 4; i_3 < 8; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_0] = ((/* implicit */_Bool) max((min((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (arr_7 [i_3 + 1] [i_3] [5ULL])))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_2 + 1] [0] [i_3] [i_4] [i_4]))))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 1] [i_2 - 1] [i_2])))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_0] = ((/* implicit */unsigned int) (((+(var_4))) == (((arr_13 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))));
            var_19 *= ((/* implicit */short) (~(((/* implicit */int) ((max((arr_2 [i_2] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_6))))))))));
        }
        var_20 = ((/* implicit */int) min((((/* implicit */short) max((arr_1 [i_0]), (arr_1 [i_0])))), (max((max(((short)4032), (((/* implicit */short) (signed char)66)))), (min((var_6), (((/* implicit */short) var_5))))))));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_21 = ((/* implicit */short) ((arr_20 [i_6] [5ULL]) ? (((/* implicit */int) min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6])))) : (max((((((/* implicit */_Bool) arr_22 [i_6])) ? (var_4) : (((/* implicit */int) var_3)))), (var_2)))));
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_6])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_7)))) == (((/* implicit */int) ((((arr_23 [i_6]) - (arr_23 [i_6]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))))))));
        var_23 = ((/* implicit */_Bool) 0U);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1061151657)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9] [(_Bool)1] [i_7])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (~(arr_25 [i_9])))) ? ((~(arr_25 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_7])))))));
                    var_25 = ((/* implicit */unsigned int) (((((((_Bool)1) ? (arr_25 [(_Bool)1]) : (((/* implicit */long long int) var_11)))) == (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_9] [i_8]))))))) || (((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7]))));
                    var_26 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28525))))))) ? ((+(((long long int) (_Bool)1)))) : (((/* implicit */long long int) max((arr_31 [i_7] [i_7] [i_8] [i_9]), (((/* implicit */unsigned int) ((signed char) arr_24 [12] [12])))))));
                    var_27 = ((/* implicit */unsigned long long int) arr_26 [i_7]);
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) arr_33 [i_7] [i_7]);
    }
    var_29 = ((/* implicit */short) var_12);
}
