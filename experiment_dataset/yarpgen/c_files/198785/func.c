/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198785
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
    var_17 = ((/* implicit */long long int) max((877864357U), (((/* implicit */unsigned int) -1618000785))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) var_6);
        var_19 = ((/* implicit */long long int) (+(var_2)));
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [9] [i_3] [i_0] = ((/* implicit */unsigned long long int) (short)-30451);
                        var_21 = ((/* implicit */signed char) var_16);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (-1048576LL) : (((/* implicit */long long int) 536739840))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            {
                arr_15 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_4])) ? (((/* implicit */int) (unsigned short)6324)) : (((/* implicit */int) (signed char)76))))) ? (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (unsigned short)52603)))) : (((/* implicit */int) var_8))));
                arr_16 [i_4] = ((/* implicit */signed char) -860601775);
            }
        } 
    } 
}
