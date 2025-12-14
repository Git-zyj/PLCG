/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37564
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
    var_17 -= max((var_10), (((/* implicit */long long int) var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (((-(var_5))) == (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((unsigned short) var_6));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((max((((long long int) -8162416219144725338LL)), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((unsigned short) ((2429923023U) >> (((((/* implicit */int) (unsigned short)26863)) - (26844))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */long long int) var_16);
                                arr_26 [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (unsigned short)41731)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37230))) : (8162416219144725359LL));
                            }
                            arr_27 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_14);
                            arr_28 [i_2] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((var_5) ^ (var_13)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
