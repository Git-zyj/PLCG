/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206267
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)31744)) : (((/* implicit */int) (unsigned char)252))))) ? (((unsigned long long int) 268434944U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_21 = (((+(9205357638345293824ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))));
                    arr_9 [i_1] [i_1] [i_0] = ((unsigned char) (unsigned char)245);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) (+(((var_6) << (((((/* implicit */int) (signed char)-31)) + (40)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)22));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_11))));
}
