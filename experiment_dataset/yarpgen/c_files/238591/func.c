/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238591
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
    var_19 += ((/* implicit */unsigned int) 10087083744711552184ULL);
    var_20 &= ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 4211263847465000922LL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */short) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) -252828799))) : (((/* implicit */int) ((_Bool) var_9)))))), (((arr_13 [i_0] [i_1] [i_4 - 1] [i_3] [2U]) >> (((arr_2 [i_4 + 1] [i_4 - 1]) - (1582923786U)))))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (short)16452))));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */short) (signed char)28);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) var_1);
                                var_26 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
