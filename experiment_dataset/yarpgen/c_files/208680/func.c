/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208680
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(var_2)))) ? (var_6) : ((~(((/* implicit */int) var_0)))))), (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned int) min((var_15), ((~((-(min((((/* implicit */unsigned int) var_9)), (24U)))))))));
    var_16 = ((/* implicit */int) ((((((6623488186704652791LL) | (((/* implicit */long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((4201587061213174160ULL) >= (((/* implicit */unsigned long long int) 1390785107))))) | (((/* implicit */int) var_0))))) : (18335702551471903231ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((111041522237648373ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */int) ((((/* implicit */int) (short)32763)) <= (var_6)))) & (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) arr_1 [i_2])), (var_8))))));
                    var_17 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
