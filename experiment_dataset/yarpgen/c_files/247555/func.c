/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247555
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)37308)))))) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)96))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : ((-(9223372036854775796LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) max(((short)-11), ((short)-2396)))), ((-(((/* implicit */int) max(((short)2380), ((short)-2404))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)2395)) ? (((/* implicit */unsigned long long int) var_2)) : (var_6))), (((/* implicit */unsigned long long int) -1262439143834385129LL))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)-2398)) : (((var_10) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-252)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((unsigned long long int) (unsigned short)6));
    var_17 += ((/* implicit */int) ((long long int) ((var_10) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (signed char)70)))));
}
