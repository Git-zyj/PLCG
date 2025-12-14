/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207958
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
    var_20 = ((/* implicit */signed char) var_19);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0])), (10304013786435921913ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((unsigned short) 8878934276692022878ULL))))))));
                var_21 += ((/* implicit */unsigned long long int) arr_1 [(unsigned char)11] [(unsigned char)11]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_2])), (-2091972203)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) var_5)) % (var_2))))))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37101)) && (((/* implicit */_Bool) -6393501893800000109LL))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_19))) : (((/* implicit */unsigned long long int) var_14)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1992699603)) ? (((/* implicit */int) (short)-14)) : (((((/* implicit */int) arr_14 [i_2] [i_2] [0ULL] [i_2] [i_2])) - (var_12))))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3 - 3])))), (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
