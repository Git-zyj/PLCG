/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204487
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned long long int) arr_1 [0]);
                            var_15 = ((/* implicit */unsigned int) 3050035590341502018LL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) -2045822368);
                                var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) max(((unsigned char)17), ((unsigned char)129)))), (min((-1581167996), (((/* implicit */int) (unsigned short)65527))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) var_8);
}
