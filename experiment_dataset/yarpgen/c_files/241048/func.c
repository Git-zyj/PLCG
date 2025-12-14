/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241048
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
    var_20 = ((/* implicit */unsigned short) var_19);
    var_21 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [7] [7ULL] [(unsigned char)13] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
                var_22 = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) var_7);
                                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_2] [i_3]))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */signed char) (~(((/* implicit */int) var_19))));
                    var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_13 [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_13 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1 - 1]);
                        arr_20 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    }
                    for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_8 - 3] [i_8] [i_7 + 1] [i_1 - 1] [i_0])) == (((/* implicit */int) arr_22 [i_7 + 1] [i_8 - 2] [i_8] [i_8] [i_8] [18])))))));
                            var_29 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_7 + 1] [i_8 - 1] [i_8 - 2]))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (-(arr_19 [i_0] [i_0] [i_1] [(unsigned char)2]))))));
                        }
                        var_31 = ((/* implicit */short) ((unsigned char) arr_9 [i_1 - 1] [i_7 - 2] [i_0] [i_7 - 1]));
                    }
                    arr_25 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_5]);
                    var_32 |= ((/* implicit */unsigned int) ((int) arr_3 [i_1 + 1] [i_1]));
                }
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((_Bool) arr_15 [i_9 - 3] [i_9] [i_9] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (arr_24 [i_10] [12ULL] [i_0] [i_9] [i_0] [i_0] [i_0])))));
                            var_34 ^= ((/* implicit */short) arr_6 [(unsigned short)5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
