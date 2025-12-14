/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4480
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47928))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57005)) ? (((/* implicit */int) (unsigned short)56996)) : ((~(((/* implicit */int) (unsigned short)47928))))));
        arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-59))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7LL)) ? (((((/* implicit */_Bool) 6962262706482255737LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)102))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17608))))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4747193596943283772LL)) ? (-6962262706482255737LL) : (((/* implicit */long long int) 1073725440))))) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (!(((/* implicit */_Bool) 268435455U)))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-67))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) % (-6962262706482255735LL)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31532))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6962262706482255738LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57005)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)101)))))));
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((6962262706482255737LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (((((/* implicit */_Bool) -244749736)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18905))))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)-102)))) >> (((((((/* implicit */_Bool) (short)15380)) ? (((/* implicit */unsigned long long int) 6962262706482255727LL)) : (5376733254426267142ULL))) - (6962262706482255697ULL))))))));
                                arr_21 [i_1] [9U] [i_2] [i_4] [i_5 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)77)) + (((/* implicit */int) (unsigned short)65512))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43440)))))) : (((((/* implicit */_Bool) 1715591916U)) ? (-6962262706482255737LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64462)))))))) ? (((/* implicit */int) (short)26417)) : (((/* implicit */int) (short)-2961))));
                                arr_22 [i_1] [i_2] = ((/* implicit */int) (~((~(((((/* implicit */_Bool) -6962262706482255738LL)) ? (536862720ULL) : (((/* implicit */unsigned long long int) -1073725440))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 612705938U)) ? (699207988U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30660)))))))))));
    }
    var_23 ^= ((/* implicit */unsigned long long int) var_12);
}
