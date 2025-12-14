/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36040
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
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((((((/* implicit */_Bool) 1717060401)) ? (576460751229681664LL) : (-385050966061222689LL))) != (((/* implicit */long long int) -1717060401)));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [20U] [(_Bool)1] [11U] [11U] [i_1] [2U] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2]);
                                var_15 = ((/* implicit */unsigned char) ((var_13) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(-1787511079758306606LL)))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_4] [i_3] [i_2])))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] = ((/* implicit */long long int) -1717060374);
                }
            } 
        } 
    } 
}
