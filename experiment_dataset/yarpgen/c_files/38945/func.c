/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38945
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_17 += ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) 3107362754U)), (((14570047659919715440ULL) / (((/* implicit */unsigned long long int) 16383)))))));
            var_18 |= ((/* implicit */unsigned short) max((611259746253145582LL), ((+(-5720119642990440129LL)))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) -5720119642990440129LL);
                            var_20 = ((/* implicit */signed char) var_14);
                            var_21 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 688545066);
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_22 = ((/* implicit */long long int) -688545070);
            var_23 = ((/* implicit */unsigned short) ((long long int) min((4294967291U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))));
        }
        arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(6319359737321293296ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (short)-17370)) : (((/* implicit */int) var_15))))) : (-4617182316878250954LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -688545072))))));
        var_24 = ((/* implicit */unsigned short) var_12);
    }
    var_25 = ((/* implicit */unsigned short) ((var_8) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-83)), ((+(((/* implicit */int) (unsigned char)236)))))))));
}
