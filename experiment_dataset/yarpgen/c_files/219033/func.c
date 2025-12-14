/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219033
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) (!(var_9)));
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (short)-9872)))))) : (((/* implicit */int) (short)-2517))));
        arr_2 [i_0] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)126)))) >= (((/* implicit */int) (signed char)15))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (4938644755388632204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] = (!(((/* implicit */_Bool) (unsigned short)3675)));
                        arr_13 [(unsigned char)4] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)14336)), (5224489400953856167ULL)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) min(((~(min(((-9223372036854775807LL - 1LL)), (6986626141660018136LL))))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)11748)), ((unsigned short)24585)))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1])))))));
    }
    var_18 *= ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)28672)))))))));
}
