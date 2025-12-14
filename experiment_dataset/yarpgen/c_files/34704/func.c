/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34704
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
    var_19 = var_11;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) var_4)) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))))) : (576390383559245824LL)));
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_1]))))));
                    arr_6 [i_1] [i_2] = ((/* implicit */signed char) arr_2 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */int) (_Bool)1);
}
