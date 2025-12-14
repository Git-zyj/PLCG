/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208322
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [1U] [i_2] [i_3] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                            arr_12 [(unsigned char)17] [(unsigned char)17] [i_0] [i_3] = ((/* implicit */short) var_6);
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                            {
                                arr_16 [i_1] [i_0] = ((/* implicit */long long int) arr_9 [i_4 - 1] [i_4]);
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_3] [i_3]))))))));
                                arr_17 [i_0 + 2] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1346246188))))) - (((int) arr_13 [i_2 + 1] [i_2 + 1] [i_4 - 1] [4U] [i_0 + 3] [i_1]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                            {
                                var_14 &= ((/* implicit */int) var_3);
                                var_15 = (!(((/* implicit */_Bool) ((((int) (unsigned char)10)) + (((/* implicit */int) var_5))))));
                                arr_25 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_21 [i_0] [16ULL] [i_0] [i_6 - 1])) && (((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_5 - 2] [(_Bool)1] [(_Bool)1])))))));
                                arr_26 [i_0] [(_Bool)1] [i_5 + 1] [i_1] [i_0] = ((/* implicit */int) (~(((unsigned int) ((int) var_8)))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_6 [i_5] [i_5]))));
                            }
                            var_17 = ((int) ((((((/* implicit */int) arr_22 [10] [i_1] [0])) | (arr_21 [(unsigned char)18] [0] [i_0] [i_6]))) << (((var_7) - (13323511447364799733ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    arr_31 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_1] [(unsigned char)0] [i_0] = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0]));
                        arr_35 [i_1] [i_1] [(unsigned char)13] [i_0] [(unsigned short)16] [11] = ((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 3] [i_9 - 1] [i_9 + 2]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        arr_39 [i_0] [i_0] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) var_6);
                        arr_40 [i_0] [i_0] [i_8] [i_10] = ((/* implicit */unsigned char) ((int) arr_18 [i_0] [i_8] [i_0]));
                    }
                }
                var_18 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0 + 4])) != (((/* implicit */int) arr_22 [i_0 + 3] [(unsigned char)6] [i_0 + 3])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (+(var_6))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_9))));
}
