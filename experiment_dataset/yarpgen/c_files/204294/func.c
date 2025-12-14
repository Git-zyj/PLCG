/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204294
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
    var_20 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min(((unsigned short)56818), (((/* implicit */unsigned short) arr_3 [i_0] [i_2 - 1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_23 -= (signed char)-53;
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_4] [i_4] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_1 + 1]))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 302285630))));
                            var_26 -= ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                        }
                        var_27 = ((/* implicit */unsigned int) ((((3U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) ((signed char) -302285628))) : (-302285631)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_28 = ((((/* implicit */int) arr_4 [i_0] [i_2 - 1] [5])) + (((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_2 + 2] [(_Bool)1] [i_6] [i_1 + 3])) : (((/* implicit */int) arr_12 [i_0] [i_2 + 1] [i_2] [i_6] [i_1 + 1])))));
                        arr_19 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */long long int) arr_6 [7LL] [i_1] [i_2 + 1]);
                        arr_20 [i_0] [i_1 + 4] [i_2] [i_6] = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) (unsigned short)36672)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) ^ (((((/* implicit */int) min(((signed char)53), (arr_7 [(signed char)3] [i_1 + 3] [i_0])))) ^ (((/* implicit */int) max((arr_13 [i_0] [i_6]), ((signed char)-3))))))));
                        var_29 = ((/* implicit */short) ((max((((/* implicit */long long int) var_14)), (arr_17 [i_2 + 2] [(short)6] [i_2 + 1] [i_2] [i_1] [i_1 + 4]))) & (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_6] [2] [i_2] [i_2] [i_1 + 2] [i_0])))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_7] [i_7] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)67)) >> (((-883629161) + (883629177)))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)4701)) ? (((var_18) ? (((/* implicit */int) arr_4 [(unsigned char)8] [12] [12])) : (((/* implicit */int) var_18)))) : ((-(((/* implicit */int) arr_3 [i_0] [i_2])))))) : (arr_0 [i_0] [(signed char)12])));
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (((_Bool)1) ? (-1616769848) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)7] [i_0] [i_0])))))) - (((/* implicit */int) (signed char)114))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 1616769848)) ? (2625469244U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_25 [(signed char)4] [(short)1] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)43589)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (-5651636490642945175LL))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0]))));
                                arr_32 [0LL] [i_8] [0LL] [i_0] = ((/* implicit */signed char) (~(arr_5 [i_8] [i_8])));
                                arr_33 [i_0] [i_1] [i_2] [i_8] [i_9] [(_Bool)1] = ((/* implicit */long long int) arr_4 [i_8] [i_1 + 4] [i_0]);
                                var_34 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [i_8] [i_9] [i_9] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_18))), ((-(((/* implicit */int) var_4))))));
}
