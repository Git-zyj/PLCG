/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220238
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
    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-15513)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) < (((/* implicit */int) var_14)))) ? (((/* implicit */int) ((unsigned char) (short)-15490))) : ((+(((/* implicit */int) (short)15490))))))) : (min((((/* implicit */unsigned long long int) (short)15490)), (1016785787803174888ULL)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) == (var_6)))) : (((/* implicit */int) min(((short)-15501), (((/* implicit */short) (_Bool)1)))))))) : ((~(((((/* implicit */_Bool) (short)-15490)) ? (13216392101544045505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_22 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % ((+(-1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)15489))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 121527635))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) | (arr_1 [14ULL] [i_1])))) : (var_17)));
        arr_7 [i_1] [i_1] &= ((/* implicit */_Bool) (+(-1882376492)));
        arr_8 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) -121527635)))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_2])) < (((/* implicit */int) arr_11 [i_2])))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_9 [i_2]))) < (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) arr_10 [i_2])))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) arr_11 [i_4]);
                    arr_17 [i_4] [i_3] [i_4] = arr_16 [i_2] [i_4] [i_4] [i_4];
                    var_27 &= ((/* implicit */short) 4518278387231142932LL);
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1113701923U))))) : (((/* implicit */int) (unsigned char)247))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_9 [i_4 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                }
            } 
        } 
        var_30 ^= ((/* implicit */unsigned char) arr_9 [i_2]);
        arr_18 [i_2] = ((/* implicit */short) arr_13 [i_2] [i_2]);
    }
}
