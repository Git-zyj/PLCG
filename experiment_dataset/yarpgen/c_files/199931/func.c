/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199931
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
    var_14 = ((/* implicit */int) var_1);
    var_15 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) (signed char)-86)))))))));
                    var_17 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)183)))) : (-4507720278360785362LL)));
                        var_18 = (-(((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (1430275981U)))) : (((6848119045082791845LL) / (arr_4 [i_3] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_4] [i_2]))));
                        arr_15 [(_Bool)1] = ((/* implicit */signed char) (+(arr_5 [i_2] [i_1])));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0]) : (arr_9 [i_2]))) : (arr_7 [i_0] [i_1] [i_4] [i_0])));
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [i_1])) / (((((/* implicit */_Bool) -890130227)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (-(-4507720278360785369LL)));
                            var_23 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [i_5 - 1] [i_6]);
                        }
                        arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_7);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [5] [i_0] [i_0])))))) : (-8198696381655768028LL))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_9);
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (max((var_9), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_3)))))));
}
