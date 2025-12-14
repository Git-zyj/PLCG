/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205282
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned long long int) var_1)))))));
                arr_5 [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) var_4))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_9)) : (var_12)))))) ? (((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) var_6)) - (162)))))) ? ((-(0ULL))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))))));
                var_18 = ((/* implicit */int) ((long long int) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_16);
    var_20 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (long long int i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_11)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))) : ((~(var_2)))));
                                var_22 = ((/* implicit */int) ((unsigned int) var_11));
                                var_23 = ((((/* implicit */_Bool) (unsigned short)63443)) || (((/* implicit */_Bool) 0LL)));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 777558114U))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) 133693440)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_15) : (var_1))))))) ? (min((var_16), (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_2))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_24 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (var_12)));
                        var_27 |= ((/* implicit */unsigned short) ((short) var_0));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) ((unsigned short) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))))));
}
