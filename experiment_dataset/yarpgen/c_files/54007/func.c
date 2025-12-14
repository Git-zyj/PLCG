/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54007
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) var_0);
                    var_11 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18071)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) > (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (unsigned short)35855)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (unsigned short)46107)) << (((((((/* implicit */int) (short)-20672)) + (20698))) - (24)))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) var_9);
}
