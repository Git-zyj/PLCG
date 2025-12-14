/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211626
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) 4294836224U);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        arr_8 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_5 [(_Bool)1] [i_2] [(_Bool)1] [i_0])));
                        var_21 *= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_22 = ((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_18)))))));
                    arr_9 [13U] [13U] [13U] [i_2] |= ((/* implicit */short) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_23 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                    arr_19 [i_4] = ((/* implicit */short) var_14);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned long long int) arr_22 [i_4] [i_5 - 1] [i_5] [i_5 - 2]))));
                                var_25 = ((/* implicit */signed char) ((_Bool) arr_13 [i_4] [i_7] [i_4]));
                            }
                        } 
                    } 
                    arr_27 [i_4] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) max((-2210939764499045244LL), (((/* implicit */long long int) (unsigned short)7))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    arr_31 [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_4] [i_5 - 2] [i_4]))))) - (((long long int) (+(((/* implicit */int) var_17)))))));
                    var_26 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_5 - 2] [18ULL] [i_5 - 2] [i_5 - 2]))))), (4294836244U)));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)142))));
                    arr_32 [i_4] [i_5] [i_10] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_5 - 2] [i_4] [i_10] [i_5 - 1] [i_5 - 2]))));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_35 [i_4] = ((/* implicit */unsigned long long int) ((arr_11 [i_4] [i_5]) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45176)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) var_1);
                                var_29 = ((/* implicit */int) (_Bool)1);
                                arr_41 [i_11] [i_4] [(unsigned char)16] = ((/* implicit */short) (-(arr_14 [i_4] [i_4])));
                            }
                        } 
                    } 
                    arr_42 [(unsigned char)5] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)2417)) < (((/* implicit */int) (short)24978))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) var_12);
}
