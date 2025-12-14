/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238300
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
    var_13 ^= ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) min((1627814017U), (((/* implicit */unsigned int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2047)) ? (-3812391124630199744LL) : (4825011919597042052LL)))) : ((+(((((/* implicit */unsigned long long int) 3812391124630199762LL)) - (var_11))))));
    var_14 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) var_12)) ? (1627813997U) : (2667153267U))), (((((/* implicit */_Bool) (unsigned short)26868)) ? (2517318361U) : (3447138305U))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) -2290374492780700852LL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned long long int) var_8);
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1636633788U)) ? (1627814018U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_1 [i_0] [8])) : (((/* implicit */int) max((arr_1 [i_0] [(unsigned char)12]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)2] [(short)2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((847828979U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))))) ? (var_2) : (((((/* implicit */_Bool) -2385172544036443990LL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_6))))))) : ((((_Bool)1) ? (3812391124630199745LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_4 + 2] = ((/* implicit */long long int) var_3);
                        var_19 -= ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_0 [i_1] [i_1])))) : ((((_Bool)0) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_21 += ((/* implicit */signed char) ((unsigned long long int) arr_18 [i_5]));
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_5] [i_5])) == (((/* implicit */int) arr_1 [i_5] [i_5]))));
    }
}
