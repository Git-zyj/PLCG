/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198260
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
    var_17 = var_1;
    var_18 += ((/* implicit */unsigned long long int) (((~((+(var_11))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = (signed char)104;
                var_20 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (3073125143U))) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10538)) + (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (signed char i_4 = 4; i_4 < 23; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_14 [i_2] [i_2] [i_2]), ((unsigned short)9678)))))) ? (((/* implicit */int) (short)-630)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != ((~(((/* implicit */int) (short)-630)))))))));
                    var_22 += ((/* implicit */unsigned char) ((((((/* implicit */int) (short)24012)) & (-1662999885))) & ((+(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_23 = ((unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_4)));
}
