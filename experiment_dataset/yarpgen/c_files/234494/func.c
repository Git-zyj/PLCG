/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234494
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) 1327401738);
                var_20 = ((/* implicit */_Bool) 1327401738);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */_Bool) var_5)) && (((((/* implicit */_Bool) (short)1425)) && (((/* implicit */_Bool) (unsigned short)17605))))))));
                    var_22 = var_6;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_19 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) var_5);
                                var_23 = ((/* implicit */_Bool) ((1327401738) * (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_24 = ((unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-19930))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_18)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1327401738))))))))));
                }
            } 
        } 
    } 
}
