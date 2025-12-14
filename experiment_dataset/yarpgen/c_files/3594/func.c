/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3594
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
    var_12 = ((/* implicit */int) ((signed char) ((2267926787964632779LL) != (((/* implicit */long long int) ((1982195374) % (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_13 ^= ((int) (signed char)-100);
        var_14 = ((/* implicit */unsigned short) (~(((unsigned int) 2267926787964632785LL))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_10 [i_2] [i_2] [i_3] |= ((/* implicit */int) -2971303972075233724LL);
                    var_16 = ((/* implicit */int) -8841126254626646981LL);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(-2000658486572183041LL))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_18 = ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) 2267926787964632806LL)), (var_1))))) <= (min((min((((/* implicit */int) (_Bool)1)), (arr_4 [20] [i_4] [i_4]))), ((+(((/* implicit */int) (unsigned short)65535)))))));
        var_19 -= (unsigned short)3955;
        var_20 = ((/* implicit */int) ((-2000658486572183043LL) + (((/* implicit */long long int) (-(((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4] [0U]))))))))));
    }
    var_21 = ((/* implicit */unsigned short) var_1);
}
