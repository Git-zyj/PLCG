/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225060
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12)) ? (9851010817850363158ULL) : (((/* implicit */unsigned long long int) 2590231281U))));
                                var_17 = ((/* implicit */unsigned long long int) ((_Bool) (short)1484));
                                arr_12 [(signed char)7] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) max(((short)-1484), ((short)-1493)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (signed char)37);
                    var_19 = ((/* implicit */unsigned short) (signed char)-19);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11420)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)1492))));
                var_21 = ((/* implicit */_Bool) (signed char)35);
                var_22 *= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 4; i_7 < 22; i_7 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((var_14), (((/* implicit */unsigned short) (short)-1484))))), (((7725094498545634664LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))));
        arr_20 [i_7] = ((/* implicit */signed char) -1);
        arr_21 [8] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        arr_22 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)87), ((unsigned char)29)))) >> (((((((/* implicit */_Bool) (short)-14402)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-1493)))) - (59439)))));
    }
}
