/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238126
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) 1499849167U);
                var_17 = ((/* implicit */long long int) max((var_17), (arr_3 [i_0])));
                var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(1499849167U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1]))))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                arr_12 [(signed char)8] [i_3 - 1] [i_2] = ((/* implicit */signed char) var_6);
                arr_13 [i_3] [(_Bool)1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(1613522419U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (unsigned char)192))))));
                arr_14 [4LL] [i_3] = ((/* implicit */unsigned short) (+(var_9)));
            }
        } 
    } 
    var_19 &= ((min((2795118128U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))) % (((unsigned int) (+(var_10)))));
    var_20 = ((/* implicit */unsigned int) min((14200471354633578990ULL), (min((((/* implicit */unsigned long long int) 1613522430U)), (13157665502146101468ULL)))));
}
