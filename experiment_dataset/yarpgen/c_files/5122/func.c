/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5122
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
    var_15 -= var_2;
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_10)), (arr_6 [i_2] [i_1] [i_2])))))) ? (min((-597639318586488615LL), (((/* implicit */long long int) (short)20210)))) : (((long long int) (((_Bool)0) ? (((/* implicit */long long int) var_13)) : (4155317722020586374LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (signed char)28)), (arr_6 [i_2] [i_1] [i_2])))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_3)), (-384446208340800024LL))))) : (((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1)))))));
                                var_18 = (~(4155317722020586374LL));
                                var_19 = max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (1652152909815574747LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */signed char) var_14);
}
