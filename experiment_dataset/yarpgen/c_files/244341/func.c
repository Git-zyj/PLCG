/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244341
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))) / (max((2046318396U), (((/* implicit */unsigned int) var_1))))))));
    var_15 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_3))))))) < (var_4)));
    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2088960))))), (var_0)))) || (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1])))))));
                    var_18 = ((/* implicit */short) arr_5 [13U]);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) (signed char)8)))))));
                    var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((arr_2 [i_2] [i_2]), (((/* implicit */int) arr_8 [12] [i_1] [(unsigned short)1] [i_0])))), (((/* implicit */int) arr_4 [i_0] [(short)10])))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-8)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_4))))));
}
