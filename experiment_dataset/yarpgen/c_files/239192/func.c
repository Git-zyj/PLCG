/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239192
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
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 = ((/* implicit */unsigned int) var_7);
    var_21 = ((/* implicit */long long int) var_17);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_22 = min((((min((var_8), (((/* implicit */long long int) 279633384)))) & (((/* implicit */long long int) -720269150)))), (var_15));
                                var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) << (((var_15) - (196743525836964311LL)))))))), ((-(14111522896938174484ULL)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((-391975760), (((/* implicit */int) var_18)))))));
                    var_25 |= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 3463868432910494523LL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_2])) : (var_6))) << (((-3593507697343197191LL) + (3593507697343197212LL)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            arr_14 [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) -2280237217726213784LL)))), ((_Bool)0)));
            arr_15 [i_0] [i_5] = ((((/* implicit */_Bool) 2280237217726213789LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (min((((/* implicit */long long int) -1638106695)), (arr_5 [i_0 + 3] [i_0]))));
            var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)59347)))), (((((/* implicit */long long int) max((var_6), (1638106708)))) + (((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
            var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)66)) * (((/* implicit */int) arr_12 [i_0] [i_5]))))), (max((((/* implicit */long long int) min((415733046U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))))), (-3850388203950850380LL)))));
        }
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */int) ((((-3593507697343197201LL) / (var_11))) | (((/* implicit */long long int) (~(-1892913925))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) var_4)))))));
        var_30 = ((/* implicit */unsigned long long int) ((long long int) -3593507697343197201LL));
    }
}
