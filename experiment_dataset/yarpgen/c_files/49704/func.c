/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49704
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
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (+(var_11))))) ? (((((var_15) ^ (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0])))))));
                var_20 &= ((/* implicit */unsigned long long int) arr_3 [(_Bool)1]);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9050))) / (4294967295U)));
            }
        } 
    } 
    var_22 = var_11;
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (short)28887))));
                    arr_15 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_9 [i_2]);
                    arr_16 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_16);
                }
            } 
        } 
    } 
}
