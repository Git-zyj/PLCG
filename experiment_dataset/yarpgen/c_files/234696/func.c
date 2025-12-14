/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234696
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
    var_11 &= ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) min((-521210389), (((/* implicit */int) var_6))))) ? (max((var_1), (((/* implicit */int) var_3)))) : (max((((/* implicit */int) var_6)), (var_1)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_5 [(unsigned short)20]))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((max((var_1), (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1])))))))));
                    }
                } 
            } 
        } 
        var_13 = var_3;
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59687)) < (1196811037)))), (((((/* implicit */_Bool) (short)-30180)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_15 [i_0])))))));
                    var_15 &= ((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_5] [i_4])));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */signed char) min(((unsigned char)162), ((unsigned char)70)));
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) (unsigned char)72))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)4941)) % (((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) -521210385)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_6 + 1] [i_7] [i_4 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 -= ((/* implicit */long long int) max((((/* implicit */short) var_6)), (var_4)));
}
