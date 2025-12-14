/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195557
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_2] = ((((int) arr_9 [i_0] [i_0] [i_0 - 1])) < (((/* implicit */int) var_12)));
                        var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_5))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
            {
                {
                    var_20 |= ((/* implicit */_Bool) arr_18 [i_5] [i_4] [(unsigned short)4]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_21 [i_6] [i_0] [0] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) ((_Bool) (unsigned char)229))))));
                        arr_22 [i_0] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (unsigned char)229)))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned short)0))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
    var_24 = ((/* implicit */int) ((unsigned char) (+((+(((/* implicit */int) var_4)))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((var_5) - (((/* implicit */unsigned long long int) var_13)))))) | (((/* implicit */int) (unsigned char)26))));
}
