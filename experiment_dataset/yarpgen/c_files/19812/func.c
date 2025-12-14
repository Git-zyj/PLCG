/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19812
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = (signed char)-94;
                    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 2245306196578269189LL))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) (+(((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - ((+(-1)))));
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) 481036337152LL)));
        var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (1771618995U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))))), (((unsigned long long int) (unsigned char)236)))) % (((unsigned long long int) var_9))));
    }
    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_8)))));
        var_21 = ((/* implicit */int) ((unsigned int) var_10));
        var_22 = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_23 = ((/* implicit */long long int) ((signed char) var_0));
            var_24 = ((/* implicit */int) var_13);
        }
    }
}
