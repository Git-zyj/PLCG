/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48841
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
    var_15 = ((/* implicit */short) var_8);
    var_16 |= ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) | ((~(((/* implicit */int) (unsigned char)15))))));
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7987488692262118205LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8907285087669589926LL)))) ? (((((/* implicit */long long int) 449668999)) / (-283856269319229123LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) 922534513))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)13)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((-8174842639540433638LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7987488692262118205LL)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (16280159840854479LL))) : ((~(2750367118096452316LL)))))) ? (((1125882726973440LL) | ((-9223372036854775807LL - 1LL)))) : ((~((-9223372036854775807LL - 1LL)))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7987488692262118217LL)) ? (-449669007) : (((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)17360)) >> (((((/* implicit */int) (signed char)96)) - (89)))))) ? (((((/* implicit */int) (signed char)31)) << (((943017409U) - (943017399U))))) : ((~(-1792081392))))) : (((((/* implicit */_Bool) 7987488692262118204LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
    }
    var_21 = ((/* implicit */_Bool) (unsigned char)124);
}
