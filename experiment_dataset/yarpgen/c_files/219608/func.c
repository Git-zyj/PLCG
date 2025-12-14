/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219608
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((4428525469800716326LL) <= (((/* implicit */long long int) 1121486670))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -430960227309629840LL)) ? (((/* implicit */int) (short)-17350)) : (((/* implicit */int) (short)-18080))))) ? (var_6) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-23233)), (-1917076567)))))))))));
    var_15 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 1617406747U)) ? (var_9) : (((/* implicit */long long int) 2677560562U)))));
        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(955405127))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8724994224304169457ULL)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (short)-17350))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)17349))))) ? (((/* implicit */unsigned long long int) 283726776524341248LL)) : (8724994224304169480ULL)))))));
        var_19 = ((/* implicit */short) (-(((unsigned int) -6059768871406851469LL))));
        var_20 = max((((((/* implicit */_Bool) -283726776524341249LL)) ? (4611686018427387776ULL) : (((/* implicit */unsigned long long int) (+(1617406747U)))))), (10072952661781425680ULL));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_13 [(short)11] [i_2] [i_2] = ((/* implicit */short) (~(6922777277657500198ULL)));
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -955405128)) ? (((/* implicit */int) (short)2016)) : (((/* implicit */int) (!(((/* implicit */_Bool) 352175416U)))))));
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (short)17371)) - (17344)))));
                        arr_18 [i_5] [(unsigned char)2] [(unsigned char)2] [i_2] |= ((/* implicit */_Bool) ((unsigned int) (short)-17350));
                    }
                    for (long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        arr_22 [i_2] [i_2] [i_3] [i_4] [i_2] [i_6 + 2] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)245)), (4194272)));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) <= (((/* implicit */int) (unsigned char)235)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-955405141) : (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20173))))) : (((((/* implicit */_Bool) 1898306547821228177LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (8724994224304169503ULL))))) : (12391642839314864296ULL)));
                        arr_23 [i_2] [(short)6] [i_4] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) & (144114088564228096ULL))))));
                        var_25 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (var_0)))), (8323845191311715228LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((((/* implicit */_Bool) (short)-1988)) ? (252429448) : (((/* implicit */int) var_10))))))) : ((((~(var_3))) + (((((/* implicit */_Bool) 955405127)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2004))) : (-8323845191311715228LL))))));
                    }
                }
            } 
        } 
        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) -254678090))));
    }
}
