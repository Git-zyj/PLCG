/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213339
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
    var_20 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) min(((unsigned char)97), (var_0)))))), (((/* implicit */int) (unsigned short)34022))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31537)) - (((/* implicit */int) (unsigned short)34022)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34024))) >= (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31522)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34022))) : ((~(arr_2 [i_1])))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)34027)) : (((/* implicit */int) var_10))))) ? (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)34027)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31508)) / (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 - 1]) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31509))))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31515))) / (arr_1 [i_0 + 1])))));
                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
            }
        } 
    } 
    var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)34036)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)34020)) + (var_3))) / (((((/* implicit */_Bool) (unsigned short)31515)) ? (((/* implicit */int) (unsigned short)31517)) : (((/* implicit */int) (unsigned short)34047))))))) : (min((min((var_15), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) min(((unsigned short)34044), (((/* implicit */unsigned short) var_0)))))))));
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((min((var_3), ((+(((/* implicit */int) (unsigned short)34027)))))) + (2147483647))) << (((((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)34018)) : (((/* implicit */int) var_11))))) - (34018ULL))))))));
}
