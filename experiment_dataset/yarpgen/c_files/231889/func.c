/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231889
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == (max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))));
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_0)))) ? (max((((/* implicit */unsigned int) (short)18786)), (2147483648U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32741)))))))));
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(arr_2 [i_1 + 2])))) <= (((long long int) (short)-32710))));
                arr_7 [i_0] = ((/* implicit */int) ((unsigned long long int) ((short) arr_3 [i_0] [i_1])));
                var_13 = ((/* implicit */unsigned int) (unsigned char)65);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_2);
}
