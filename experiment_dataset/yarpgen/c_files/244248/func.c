/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244248
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
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)4] [15U] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) (unsigned short)54775)) : (((/* implicit */int) ((short) (unsigned short)17589)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0 + 1] = ((_Bool) 208408384);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) max((max((2285235818598984161ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (short)-11563))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
