/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224271
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
    var_19 = ((/* implicit */_Bool) ((unsigned int) var_17));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((1197766943661466526ULL) ^ (((/* implicit */unsigned long long int) 3105631983U))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (_Bool)0);
                                arr_15 [(_Bool)1] [i_1 - 2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((short) var_0))) <= (((/* implicit */int) (signed char)-7))))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)81)))))));
}
