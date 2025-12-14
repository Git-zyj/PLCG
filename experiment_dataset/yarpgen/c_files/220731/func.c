/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220731
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 &= ((/* implicit */int) ((_Bool) var_6));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (unsigned char)250);
                        arr_9 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)64307)) ? (((/* implicit */unsigned long long int) 4017010598U)) : (18446744073709551615ULL))));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6583)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) ((long long int) ((int) var_0)));
        var_15 = ((/* implicit */unsigned short) 515174043U);
        arr_11 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4017010598U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (140113814U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)64307)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1228)) ? (((/* implicit */int) (signed char)68)) : (-109584822))))));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        var_17 = ((long long int) ((short) ((unsigned long long int) arr_14 [i_4])));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_24 [i_4] [i_4] [i_6] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */signed char) 17575473698168827290ULL);
                            var_18 = ((/* implicit */short) arr_12 [i_4]);
                            arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_16 [i_6] [i_6 + 1] [i_6])))) ^ (((/* implicit */int) ((unsigned short) var_3)))))) ? (((((/* implicit */int) arr_16 [i_5 - 2] [i_5] [i_5])) ^ (((/* implicit */int) (unsigned char)218)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58952)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_14 [i_7])))) : ((~(((/* implicit */int) (unsigned short)46489))))))));
                        }
                        var_19 += ((/* implicit */long long int) var_4);
                        var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)58945)) : (((/* implicit */int) arr_14 [i_6 + 1])))) + (((/* implicit */int) (unsigned short)6591))));
                    }
                } 
            } 
        } 
    }
    var_21 |= ((/* implicit */unsigned long long int) (unsigned short)64307);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 109584818)) <= (((long long int) ((((/* implicit */int) (unsigned short)58952)) / (((/* implicit */int) (unsigned short)58941)))))));
}
