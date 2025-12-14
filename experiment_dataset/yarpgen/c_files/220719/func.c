/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220719
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2 - 1])) ? (((((/* implicit */_Bool) 127ULL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 2413952693U)))) : (((/* implicit */unsigned long long int) (-(3438060026559725378LL))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-13199))) / (-3209664605703234537LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22171))) : ((~(arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_4 - 1]))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) max((-2320584410053641776LL), (897133208789411152LL)))) : (max((var_1), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((int) var_14))), (((((/* implicit */_Bool) 1070842578U)) ? (((((/* implicit */_Bool) (short)-13199)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1070842578U))) : (((arr_0 [i_2]) ^ (arr_7 [i_0] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) var_0))) + ((+(var_11)))))));
    var_18 = ((2413952693U) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), (((short) 1817263668)))))));
    var_19 = ((/* implicit */short) var_1);
    var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (7742432419849872118LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) 0ULL))))));
}
