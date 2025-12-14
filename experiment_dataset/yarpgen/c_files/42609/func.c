/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42609
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (max((max((((/* implicit */short) (unsigned char)242)), (var_12))), (var_12)))));
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_10))))))), (var_14)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (-(1509527264166320039LL)))) ? (((((/* implicit */long long int) var_8)) + (-18652343274773062LL))) : (((((/* implicit */long long int) var_1)) + (18652343274773062LL))))));
                    var_20 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18756))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-18652343274773054LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)563))) : (3031645622U))))));
                    var_21 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (short)-563))));
                }
            } 
        } 
    } 
}
