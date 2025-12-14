/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216527
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) var_4);
        var_17 = ((/* implicit */short) (unsigned short)39854);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 |= ((/* implicit */unsigned int) (unsigned short)16384);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48804)) && (((/* implicit */_Bool) (unsigned char)176)))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_2 [(unsigned char)1]))))));
            var_21 = ((/* implicit */unsigned short) (signed char)-1);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) (~(1839208992U)));
            var_22 |= ((/* implicit */short) (unsigned char)255);
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) % (((/* implicit */int) (short)-8101))));
            var_23 = ((/* implicit */_Bool) max((3054754571U), (min((2455758314U), (3132869322U)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) << ((((-(((/* implicit */int) (short)8131)))) + (8170)))));
            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
        }
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) 
        {
            var_25 -= ((/* implicit */short) (+(arr_4 [(unsigned short)15] [i_4] [i_4])));
            var_26 = ((/* implicit */unsigned int) (short)8179);
            arr_16 [i_0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_0] [(signed char)6] [(signed char)6]))));
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_5] [i_6] [i_5]))))) + (((var_0) / (arr_4 [i_5] [i_5] [i_5])))));
            var_28 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30)))))));
        }
        var_29 = ((/* implicit */unsigned int) var_7);
        var_30 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))))));
    }
    var_31 -= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)25678));
}
