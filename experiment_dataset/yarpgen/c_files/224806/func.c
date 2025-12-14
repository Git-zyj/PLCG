/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224806
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_20 = arr_1 [i_0];
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 |= ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 2])) ? (min((((/* implicit */unsigned long long int) (short)15685)), (min((var_9), (((/* implicit */unsigned long long int) 103741682)))))) : (((/* implicit */unsigned long long int) (~(var_17)))));
                    var_22 |= ((/* implicit */unsigned short) (-(-7080949251492205040LL)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_18 [(_Bool)1] [i_4] [(unsigned short)2] [i_6] = (signed char)-25;
                            var_23 = ((unsigned char) ((((/* implicit */_Bool) (signed char)24)) ? (max((((/* implicit */long long int) var_12)), (7080949251492205046LL))) : (((/* implicit */long long int) ((int) 7080949251492205040LL)))));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */unsigned long long int) -7080949251492205036LL);
                var_25 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) 638628632U))))), (var_13)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 4) 
    {
        var_26 |= ((/* implicit */int) var_15);
        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) % (var_15)));
    }
}
