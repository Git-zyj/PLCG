/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230150
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 = max((((/* implicit */unsigned long long int) (((-(2139095040U))) >> (((max((68719476735ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) - (68719476720ULL)))))), ((+(var_5))));
                var_11 = ((/* implicit */unsigned char) ((((_Bool) (((_Bool)1) ? (((/* implicit */long long int) -737877610)) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(-1525322264682655765LL))))))) : (((/* implicit */int) arr_4 [i_0 + 1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_3 [i_2]))));
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((((/* implicit */int) ((_Bool) var_7))) << ((((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) + (127))));
    var_15 -= ((/* implicit */_Bool) (+(68719476735ULL)));
}
