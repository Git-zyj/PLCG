/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248438
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
    var_20 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [(signed char)7] [(signed char)0] [i_1] [i_1] [i_1] = ((/* implicit */int) (+(arr_6 [(unsigned char)6] [i_1] [i_2] [i_3])));
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)52)));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))))) ? ((~(((((/* implicit */_Bool) 1807827248)) ? (4294967295U) : (1274906196U))))) : ((-(min((arr_6 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_0] [i_3] [i_4]))))))));
                            arr_17 [i_4] [i_4] [i_2] [i_3] [i_4] &= ((/* implicit */signed char) max((3020061100U), (3020061099U)));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_23 += ((/* implicit */unsigned int) arr_18 [(signed char)6] [i_3] [i_2] [i_1] [i_1] [i_0]);
                            var_24 -= ((/* implicit */signed char) ((unsigned char) arr_8 [i_5] [i_1] [i_2] [i_1]));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_26 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)0)))), (3020061099U)))));
                            arr_23 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_15 [i_3] [i_1] [i_0] [12] [i_6]);
                            var_27 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((_Bool) arr_8 [i_0] [i_1] [i_1] [i_1]))), (arr_0 [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) | (max((4294967295U), (((/* implicit */unsigned int) (signed char)-11))))))));
                            var_29 = ((unsigned int) arr_18 [i_0] [i_0] [i_0] [(signed char)3] [i_0] [i_0]);
                        }
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_31 [i_9] = arr_27 [i_8] [i_9];
                var_31 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_26 [i_9])) ? (arr_28 [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [0U] [i_8] [1]))) - (arr_28 [(unsigned char)2] [i_9]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_9] [i_8] [i_8]))))) ? (((arr_30 [i_8] [i_9] [i_9]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_8])))) : (((/* implicit */int) arr_29 [i_9])))))));
            }
        } 
    } 
}
