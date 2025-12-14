/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29135
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
    var_18 = ((/* implicit */int) var_1);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33317)) ? (((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_12))))) ^ ((~(((/* implicit */int) (unsigned short)51833)))))) : (((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (3820090040U))) != (((/* implicit */unsigned int) ((2147483647) - (((/* implicit */int) (signed char)25))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [(unsigned short)0] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) ^ (((unsigned long long int) arr_1 [i_0 - 2]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) == (((((/* implicit */_Bool) (-(var_6)))) ? (min((3U), (((/* implicit */unsigned int) (signed char)93)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0 - 2])))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1 - 2] [i_0] = ((_Bool) (+(arr_8 [i_0] [i_0 - 2] [i_0 + 2] [i_0])));
                        arr_12 [i_0 + 2] [i_0] [16LL] = ((/* implicit */signed char) (~(arr_7 [i_1 - 1])));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [18] = ((/* implicit */int) ((((/* implicit */unsigned int) max((max((arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0]), (var_17))), (((/* implicit */int) (!(arr_9 [i_0 - 2] [i_0 - 2]))))))) == (max(((-(arr_7 [9LL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)7)))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        arr_18 [i_4 - 1] [i_4] = ((/* implicit */_Bool) (+(1073741760)));
        var_21 = ((/* implicit */_Bool) (unsigned short)51833);
        arr_19 [i_4] = var_7;
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_6 [i_4 + 1] [i_4]))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_22 [i_4 - 1] [i_4 - 1])) == (((((/* implicit */_Bool) 18013921555499127333ULL)) ? (((/* implicit */long long int) -1415084748)) : ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)217)) | (((/* implicit */int) max((var_10), (((/* implicit */short) var_9))))))))));
    var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)13)), (var_1)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25020))))) : (-8917483066041910183LL)))));
}
