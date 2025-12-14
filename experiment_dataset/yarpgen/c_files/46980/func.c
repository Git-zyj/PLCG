/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46980
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) < ((-((-(((/* implicit */int) (_Bool)0))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3])) && ((_Bool)1)))) : (((/* implicit */int) (short)30067))))));
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (-1394210479) : (((/* implicit */int) var_3))))))) ? (((long long int) var_6)) : (((/* implicit */long long int) 1394210478))));
                            }
                        } 
                    } 
                    arr_17 [14] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_6))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_12 = ((((_Bool) arr_5 [i_5] [i_2] [i_0 + 3])) ? (((unsigned int) arr_5 [i_0] [i_0 + 2] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3])))))));
                                arr_25 [i_0] [i_5] [i_0] [i_5] [7U] = ((/* implicit */int) min((((signed char) ((unsigned char) var_8))), ((signed char)-98)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
