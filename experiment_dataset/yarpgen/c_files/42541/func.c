/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42541
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) + ((-(((/* implicit */int) ((var_1) < (((/* implicit */int) (short)22847)))))))));
        arr_4 [i_0] = ((max((((arr_0 [i_0] [i_0]) ^ (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (unsigned char)64)))) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31658))))) : (((((/* implicit */int) (short)255)) % (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)165))))) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (unsigned char)81))))), (((min((5700070691711024728LL), (((/* implicit */long long int) (short)-17140)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))))));
                    var_13 += ((/* implicit */int) arr_8 [i_2]);
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((6623354893684410057LL), (((/* implicit */long long int) (signed char)98))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned short)1023))))));
        var_14 = ((/* implicit */_Bool) (~(17592186044415LL)));
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        arr_17 [i_4] = (unsigned char)255;
        var_15 |= (-(((/* implicit */int) ((short) (-(arr_9 [16ULL]))))));
    }
    var_16 = ((/* implicit */short) -6623354893684410058LL);
    var_17 *= ((/* implicit */unsigned char) max((32767ULL), (((unsigned long long int) (-(((/* implicit */int) (unsigned char)31)))))));
    /* LoopSeq 1 */
    for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) 32767ULL));
        arr_20 [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)23)) : (((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) (unsigned char)32)))))), (((/* implicit */int) (signed char)45))));
    }
}
