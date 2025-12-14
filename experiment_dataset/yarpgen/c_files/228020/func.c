/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228020
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) max((-813557598), (((/* implicit */int) (short)-32761))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)32)) <= (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)6749)) + (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)-109)) : ((-(((/* implicit */int) (_Bool)1))))))));
        var_19 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)53360))));
        arr_4 [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((-813557606), (((/* implicit */int) var_16)))) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [0LL])) != (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [6])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_5 [i_1]))))) : (arr_6 [i_1]))));
        arr_7 [i_1] |= ((/* implicit */_Bool) ((signed char) ((short) ((((/* implicit */int) (_Bool)1)) != (var_2)))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45621)))))))))))));
        var_22 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_2])))) - (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_2]))));
        var_23 ^= max((max((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_2] [5])))), (((((/* implicit */_Bool) (unsigned short)60334)) ? (((/* implicit */int) (_Bool)1)) : (-1))))), (((/* implicit */int) ((unsigned char) var_4))));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_2] [i_3 - 1]))));
                        var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)63)))), (((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1]))))), ((+(var_3)))));
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (956992245))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) var_5);
}
