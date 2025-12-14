/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29680
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_3))));
    var_21 ^= ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) var_0);
                    var_23 = ((/* implicit */unsigned long long int) var_1);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((long long int) var_4));
                                arr_13 [i_4] [i_3] [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (signed char)-69));
                                var_25 = ((/* implicit */unsigned int) ((3561059353087910029ULL) * (7ULL)));
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_4))) + (((/* implicit */int) ((_Bool) var_12))))) + (((((/* implicit */int) var_14)) / (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_28 = (signed char)-15;
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (signed char)102);
                    var_29 = ((/* implicit */short) ((unsigned short) var_0));
                }
            } 
        } 
    } 
}
