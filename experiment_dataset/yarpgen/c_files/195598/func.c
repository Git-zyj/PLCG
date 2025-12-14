/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195598
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) min(((+((~(((/* implicit */int) (short)-1)))))), ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_19 -= ((/* implicit */unsigned short) ((arr_7 [i_0] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)9)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_20 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)16383), ((unsigned short)16383)))) ? (((((arr_2 [i_4]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (1578542630)))), (((unsigned int) arr_0 [i_3 + 1]))));
                            arr_13 [i_2] [i_1] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_12)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */short) max((max((var_2), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_10))));
                            var_22 |= min((((short) ((((/* implicit */_Bool) var_13)) && ((_Bool)1)))), (((/* implicit */short) ((signed char) (~(((/* implicit */int) var_11)))))));
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1])))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) min(((unsigned short)55420), ((unsigned short)49152)));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */short) ((unsigned short) min(((unsigned char)34), (arr_10 [i_6 - 1] [i_1] [i_1] [i_1]))));
                                var_24 = ((/* implicit */_Bool) min((((long long int) var_16)), ((~(((long long int) var_15))))));
                                arr_25 [i_0] [i_2] [(unsigned short)4] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -395069249713829990LL))) < ((~(((/* implicit */int) var_6)))))))));
                                arr_26 [i_0] [i_2] [(unsigned short)10] [i_6 - 1] [i_2] = ((/* implicit */long long int) arr_15 [i_0] [i_0] [10] [i_0] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (short i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            {
                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_17)) ? (1863713327U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_31 [i_8] [i_8] [i_8]);
                var_26 = ((/* implicit */short) (+(((/* implicit */int) (short)14))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) (~(var_5)));
}
