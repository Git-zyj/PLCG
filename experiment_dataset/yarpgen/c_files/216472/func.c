/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216472
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((short) ((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((1365022010U) << (1));
                    var_18 = ((((/* implicit */int) max((arr_6 [i_0]), (arr_6 [i_0])))) | (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0])))));
                    var_19 = ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0]))) ? (((unsigned int) arr_5 [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_1])) : (((/* implicit */int) arr_11 [i_0] [20ULL]))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_10 [5LL] [i_1] [i_1] [i_3]))))) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_3] [i_1])) : ((-(((/* implicit */int) var_0))))));
                }
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
                    var_22 = ((/* implicit */int) max((((unsigned long long int) (signed char)91)), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [13] [i_0]))))))));
                    var_23 = ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (signed char)-84)));
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_4] [i_4] [i_1] [i_0]) ? (((/* implicit */int) arr_13 [(signed char)16] [10U] [i_1] [i_4])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_3 [i_4])))) : (((((/* implicit */int) arr_6 [i_4])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((var_15), (arr_7 [i_0] [i_1] [i_1] [i_0]))))) ? ((-(((/* implicit */int) max((arr_10 [i_0] [(short)14] [i_1] [5U]), (((/* implicit */short) arr_8 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_0] [i_1]))))));
                }
                var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [(unsigned char)18]))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) ((_Bool) (signed char)75)))));
                var_26 = ((long long int) ((((/* implicit */int) arr_8 [i_0] [i_1])) >> (((((/* implicit */int) arr_8 [i_1] [i_1])) - (243)))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_5)), (var_8)));
}
