/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205725
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)0)));
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)8)) - (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28995))) : (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)547))) : (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) (signed char)8))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))))), (((min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)510)))))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1322516752)) ? (((/* implicit */int) (unsigned short)65025)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1322516752)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65026))) : (-2425689264126601105LL))))))) : (((/* implicit */int) ((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)2047)))))))))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((int) ((((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [0LL] [i_0])))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
}
