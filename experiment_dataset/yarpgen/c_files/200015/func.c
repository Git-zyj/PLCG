/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200015
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-29))));
                        arr_12 [i_0] [12LL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_11))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))));
                        var_18 = ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_2] [i_4 - 1] [i_1] [(signed char)7] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-33))));
                            var_19 = ((/* implicit */long long int) var_9);
                        }
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) : (-895821120976601639LL))))));
                        arr_20 [i_0] [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_23 [i_1] [23U] = max((((/* implicit */int) (signed char)29)), ((+(max((485044757), (((/* implicit */int) arr_2 [i_6])))))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * ((-(((/* implicit */int) (_Bool)1))))))) ? (var_2) : (((/* implicit */unsigned long long int) (~(arr_7 [i_2] [i_2] [0LL]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = arr_2 [i_0];
                        arr_26 [i_0] [i_0] [i_1] [i_0] = ((unsigned short) 17591917608960LL);
                    }
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_1] [i_2] [(unsigned short)22] [i_1])) ? (((/* implicit */int) arr_17 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0])) : ((-(((/* implicit */int) var_4))))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((((/* implicit */int) var_7)) / (var_1))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (signed char)-29);
    var_25 = ((/* implicit */short) (+(max((((/* implicit */int) var_10)), (0)))));
}
