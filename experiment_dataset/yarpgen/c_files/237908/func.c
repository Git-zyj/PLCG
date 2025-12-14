/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237908
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_5 [i_0] [i_1])), ((signed char)123)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (-1399821159) : (1399821159)))) % (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 1399821159)))));
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (unsigned short)65431)), (12115888278074703833ULL)))))) ? (((/* implicit */long long int) ((0U) << (((/* implicit */int) var_3))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) arr_5 [i_0 - 2] [i_1 - 1]))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) -1399821159))));
                    var_18 &= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65431)) & (((((/* implicit */_Bool) -8458896435407371526LL)) ? (((/* implicit */int) (unsigned char)64)) : (1399821159)))))) ? (((/* implicit */long long int) -1399821157)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (-7872348832209154590LL) : (min((((/* implicit */long long int) (short)-7297)), (9223372036854775807LL))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_6))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_2);
}
