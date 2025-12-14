/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194455
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_14;
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(35175782154240LL))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
            arr_9 [i_1] [i_1] [i_1] = arr_7 [i_2] [i_2] [i_1];
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1])))))));
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_2] [i_1] [i_1])), (10009244)));
            arr_10 [i_2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_23 = ((/* implicit */int) (short)-1);
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) (unsigned char)31))))));
        }
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned char)167))));
            var_26 *= (unsigned char)255;
            arr_16 [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_12 [i_1] [i_4] [i_1])), (max((arr_5 [i_4]), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1]))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-((-(arr_6 [i_1] [i_5 - 1] [i_5 + 2]))))))));
            arr_21 [i_1] [i_5 + 3] [i_1] &= ((/* implicit */unsigned long long int) arr_18 [(unsigned char)11] [i_1]);
        }
    }
    for (long long int i_6 = 2; i_6 < 16; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (unsigned char)246);
        arr_26 [i_6] = ((/* implicit */unsigned char) arr_24 [i_6 - 2]);
        var_28 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_23 [i_6 - 2])))), (((/* implicit */int) arr_23 [i_6 - 2]))));
    }
    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) arr_23 [i_7]);
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)122)))))));
        arr_29 [i_7] = ((/* implicit */int) var_13);
        arr_30 [i_7] |= ((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) (short)3932)))))));
        arr_31 [i_7 + 2] = ((/* implicit */unsigned long long int) min((arr_28 [(unsigned short)8] [i_7 - 4]), (arr_28 [i_7 - 3] [i_7 - 3])));
    }
    var_31 = ((/* implicit */long long int) (_Bool)1);
    var_32 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */int) (unsigned short)10052))));
    var_33 = ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)12624)))), (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1)))))));
}
