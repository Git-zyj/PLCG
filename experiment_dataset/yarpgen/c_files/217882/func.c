/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217882
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) 955736222);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? ((-(((/* implicit */int) var_1)))) : ((~(-955736227))))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 955736236))) ? (-955736247) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_2 + 3])) : (((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])) & (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) ((unsigned int) arr_2 [i_2 + 1]));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -955736222)) ? (-955736227) : (955736227)));
                                var_21 = ((((/* implicit */_Bool) 955736227)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_2 - 3])) : (arr_4 [i_1] [(unsigned short)9] [i_4]));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned int) ((unsigned short) var_12));
                                arr_17 [i_1] [(short)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -955736217))) ? (-955736228) : (955736217)));
                                arr_18 [i_1] = ((/* implicit */int) ((unsigned short) (~(arr_15 [i_5] [i_0] [(unsigned short)2] [i_2] [(unsigned short)2] [i_1] [i_0]))));
                                arr_19 [i_0] [i_0] [i_1] [i_2 + 3] [i_3] [i_5] &= ((/* implicit */int) ((signed char) arr_16 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2]));
                                arr_20 [17] [i_3] = ((((/* implicit */int) var_10)) ^ (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                            }
                            arr_21 [i_3] [i_2] [(short)3] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) 955736227)) && (((/* implicit */_Bool) -955736217))))), (var_14)))), ((+((-(var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                            {
                                var_23 = var_9;
                                var_24 = ((/* implicit */short) ((-955736226) - (((((/* implicit */_Bool) -955736222)) ? ((+(-955736234))) : (-955736226)))));
                                var_25 = ((/* implicit */signed char) 955736233);
                            }
                            var_26 = ((/* implicit */unsigned int) arr_32 [i_6] [i_0] [(unsigned short)3] [(signed char)2] [i_7]);
                            var_27 -= ((/* implicit */short) (-(((/* implicit */int) min((var_1), (arr_11 [i_0] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_8);
    var_29 -= ((/* implicit */signed char) var_3);
    var_30 = min((min((((int) var_2)), (max((((/* implicit */int) var_7)), (955736221))))), (min((-955736218), (-955736223))));
}
