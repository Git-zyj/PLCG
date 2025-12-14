/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202787
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(2641030861U))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)94)))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [(signed char)12] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2199023255424ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [16LL] [i_0] [i_0]))) : (min((var_8), (((/* implicit */long long int) var_4))))))) ? (max(((-(var_0))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) (unsigned char)245))))))) : (((/* implicit */int) min(((short)-2236), (((/* implicit */short) (signed char)81))))))))));
                    var_20 = ((/* implicit */unsigned int) ((long long int) ((((arr_1 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) ? (((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (short)19062))))) : (arr_7 [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_0]))))) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((short) arr_1 [i_2]))) ? (((/* implicit */unsigned long long int) (~(-1LL)))) : (((15816047451813997770ULL) >> (((((/* implicit */int) arr_3 [i_1])) - (23991))))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_15))))))));
    var_23 = min((((/* implicit */unsigned int) var_2)), (var_10));
    var_24 = ((/* implicit */int) var_8);
}
