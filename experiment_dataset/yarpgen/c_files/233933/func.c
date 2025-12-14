/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233933
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(2878470346149069533LL)))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (min((var_16), (((/* implicit */unsigned int) (signed char)-65)))))) : (((/* implicit */unsigned int) (((-(var_12))) - ((~(((/* implicit */int) var_9)))))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1195936610)) ? (((/* implicit */int) var_11)) : (var_8)))) ? (((/* implicit */int) var_7)) : (var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(0)))) ? (var_18) : (343880832U))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) 1740043816)) ? (1624710922U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_10 [8LL] [8LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */int) (short)-10021))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(arr_5 [i_4])));
                        var_22 = ((/* implicit */signed char) (-(arr_14 [i_1] [i_2] [i_2])));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_19 [i_1] = ((/* implicit */long long int) ((arr_6 [i_3] [i_4]) ? (((/* implicit */int) arr_6 [1LL] [i_3])) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
                            var_23 |= ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_3]) : (arr_1 [i_4]));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_23 [i_6] [i_3] [i_3] [i_2] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((short) (unsigned short)10337)));
                            arr_24 [i_6] [i_6] = arr_18 [i_6] [i_4] [i_3] [i_2] [i_1];
                            arr_25 [i_1] [(_Bool)1] [i_1] [4U] [i_6] = ((/* implicit */unsigned long long int) (~(((long long int) arr_6 [i_1] [i_1]))));
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10324)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10352))) : (((((/* implicit */_Bool) (unsigned short)10337)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10326))) : (arr_14 [i_6] [i_4] [i_1])))));
                        }
                        var_25 += ((/* implicit */unsigned short) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55199)) : (((/* implicit */int) (short)-24896)))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1870))))))));
                    }
                } 
            } 
        }
        var_27 &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_16)) || (arr_2 [i_1]))));
    }
}
