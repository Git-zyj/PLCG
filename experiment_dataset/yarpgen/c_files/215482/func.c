/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215482
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) (~(var_6)));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16037301135293805091ULL)) ? (((/* implicit */int) (short)-2657)) : (((/* implicit */int) (short)-2657))));
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
                    var_15 = ((/* implicit */int) arr_5 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) (+(101433884U)));
                                var_17 = ((/* implicit */int) max((((/* implicit */short) ((((int) (short)-1)) < (min((arr_9 [i_4] [i_4] [(short)3] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) var_11))))))), ((short)-22)));
                                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-2657))));
                                var_19 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)73)), (var_6)))))));
                                var_20 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)93))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2664)) || (((/* implicit */_Bool) var_9))))), ((unsigned char)235)))) > ((~(((/* implicit */int) var_0))))));
}
