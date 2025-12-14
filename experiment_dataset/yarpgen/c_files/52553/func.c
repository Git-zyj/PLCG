/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52553
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
    var_12 += ((/* implicit */signed char) min((max((var_0), (((/* implicit */unsigned int) ((short) -1557768711))))), (((((/* implicit */_Bool) min((1557768707), (((/* implicit */int) (unsigned char)6))))) ? (var_0) : (((/* implicit */unsigned int) -155199476))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(5723403620715175549ULL))), (((((/* implicit */_Bool) 2ULL)) ? (8426445131416547732ULL) : (((/* implicit */unsigned long long int) -5337434997127582639LL))))))) ? (max((var_8), (((/* implicit */unsigned long long int) -1557768707)))) : (10020298942293003870ULL)));
                    arr_9 [i_0] = ((/* implicit */unsigned short) (+(max((-5337434997127582639LL), (5337434997127582639LL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 12531787440669219245ULL)) ? (5337434997127582648LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32749))))) : (((/* implicit */long long int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-21921))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) var_6))));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(8911114260189148698LL))), (((/* implicit */long long int) (unsigned char)6)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) ((var_4) * (((/* implicit */int) (unsigned short)15)))))), (min((var_8), (((/* implicit */unsigned long long int) ((long long int) (signed char)33))))))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(5337434997127582635LL))))));
    }
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) max(((short)3), ((short)-1)))), (min((((/* implicit */unsigned int) (_Bool)0)), (var_0)))))));
}
