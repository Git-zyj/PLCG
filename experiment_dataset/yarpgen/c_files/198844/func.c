/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198844
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
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) 18446744073709551602ULL));
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = min((((/* implicit */long long int) ((unsigned int) arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] [i_1] [i_2]))), (((long long int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)-90)) : (913421925)))));
                                var_15 = ((/* implicit */int) var_5);
                                var_16 = ((/* implicit */signed char) (-(var_11)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [3ULL] [i_1] [i_2]) : (max((arr_10 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (+(-6280752553434541866LL))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((long long int) (signed char)47));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_17 [i_5])) : ((-(((/* implicit */int) (unsigned char)67)))))));
        arr_18 [i_5] = ((/* implicit */int) arr_16 [i_5] [i_5]);
    }
}
