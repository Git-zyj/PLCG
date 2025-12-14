/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224700
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
    var_16 *= ((/* implicit */short) (-(((long long int) (short)4353))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) 3623114405U);
                            var_18 += ((/* implicit */unsigned char) 3623114403U);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)1)))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 18014398509481983LL)))))) ? (671852883U) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(3623114413U)))))) ? (((/* implicit */int) ((unsigned short) (signed char)47))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)231))))))))));
            }
        } 
    } 
}
