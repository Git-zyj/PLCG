/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23863
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)664), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)29)), ((short)126)))))))) ^ (((unsigned long long int) var_3))));
    var_17 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) ^ (arr_0 [(short)0])))));
                var_19 += min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (6213809399070886446LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5325))))))), (min((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) 8796093022207LL)))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) (-(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (9823064125986579407ULL)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_12);
    var_22 = ((/* implicit */long long int) var_2);
}
