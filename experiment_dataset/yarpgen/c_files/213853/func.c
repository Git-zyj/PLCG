/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213853
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32747)) & (((/* implicit */int) (short)32746))))) * (max((((/* implicit */unsigned long long int) (short)32752)), (1690723607883091708ULL)))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) ((((/* implicit */_Bool) (short)32751)) && (((/* implicit */_Bool) (short)32746))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)32747)) ? (13479608322513489886ULL) : (6759120432362652970ULL))) != (((((/* implicit */_Bool) (short)30996)) ? (6759120432362652976ULL) : (((/* implicit */unsigned long long int) -6777878531237426726LL))))))))))));
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-30996)) + (((/* implicit */int) (short)32738))))) ? ((-(6348678783841598307ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-14)))))))) ? ((((-(4870763283447799638ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1453122764)) ? (((/* implicit */int) (_Bool)1)) : (-1453122770)))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-14)) ? (1250704402655822392ULL) : (13479608322513489902ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) + (3160940883U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3 + 2] [i_4] &= max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1453122770)))))))), (max((((17196039671053729224ULL) >> (((1511784376U) - (1511784350U))))), (((1406614374782895428ULL) >> (((1453410322U) - (1453410261U))))))));
                                var_17 *= ((/* implicit */long long int) ((short) ((677139894U) >> (((162814068) - (162814037))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3044937132532219567LL)) ? (1453122770) : (162814068))))));
                    arr_16 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))))) ? (3160940876U) : (((/* implicit */unsigned int) -859916795))))) ? ((+(((((/* implicit */long long int) -162814069)) & (-2553749262492652866LL))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-3044937132532219568LL)))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((short) ((unsigned int) (+(((/* implicit */int) (signed char)-111)))))))));
                }
            } 
        } 
    } 
}
