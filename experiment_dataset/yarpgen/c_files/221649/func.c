/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221649
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
    var_10 = ((/* implicit */int) ((unsigned short) ((int) max((var_7), (var_2)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (unsigned char)64);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)16));
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) -237286476)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned char)75)))) <= (max((((int) arr_2 [i_0] [i_0])), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_2))))) ? (((int) -2014397155)) : (min((max((-238743353), (((/* implicit */int) var_2)))), (((/* implicit */int) var_2)))))))));
    var_14 = (unsigned char)48;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((-2014397155) - (((((/* implicit */_Bool) 326140684)) ? ((+(((/* implicit */int) var_1)))) : (((int) var_8))))));
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) -2147483626))) ? ((+(max((-993940338), ((-2147483647 - 1)))))) : (((/* implicit */int) arr_3 [i_2] [i_2] [17]))));
            }
        } 
    } 
}
