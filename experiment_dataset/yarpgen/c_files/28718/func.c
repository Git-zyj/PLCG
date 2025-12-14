/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28718
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
    var_13 = ((/* implicit */short) (!((_Bool)1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = var_9;
                            var_16 = ((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0]);
                            var_17 = ((/* implicit */signed char) (_Bool)1);
                            var_18 -= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_1)))))) ? (5382497598896688860LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 5382497598896688854LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)5826)))) / ((+(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (-(((/* implicit */int) var_12))));
}
