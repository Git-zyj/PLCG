/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45005
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
    var_14 *= min((((/* implicit */int) (_Bool)0)), (934775924));
    var_15 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 14878206084098229252ULL;
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [i_2] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                    var_16 = ((/* implicit */signed char) (((~(var_3))) & (((((/* implicit */_Bool) (short)-15010)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_17 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ (-6022655594599536721LL));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) var_12);
        arr_16 [(short)4] [i_3] = (-(((/* implicit */int) var_4)));
        arr_17 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)10600)))))));
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)19120)) >> (((((/* implicit */int) (unsigned short)2335)) - (2317))))), (((/* implicit */int) arr_13 [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_21 [(unsigned char)3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-6286))));
        arr_22 [(short)8] [i_4] |= ((/* implicit */_Bool) ((long long int) arr_0 [i_4]));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34583))) / (var_5)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((7703109612228457658LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))))));
        arr_23 [i_4] = ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]);
        arr_24 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)7))));
    }
}
