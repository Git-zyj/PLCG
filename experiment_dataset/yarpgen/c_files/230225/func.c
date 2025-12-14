/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230225
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) ((short) (~(677895870))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 += (_Bool)0;
                                arr_14 [(short)3] [i_1 - 1] [i_1] [i_2 + 1] [i_3 + 1] [(short)3] = ((((/* implicit */_Bool) (+(arr_10 [(signed char)15] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) ? (((7337360360383818068LL) / (((/* implicit */long long int) 3677978038U)))) : (((((/* implicit */_Bool) -2809731830739652814LL)) ? (((/* implicit */long long int) var_4)) : (arr_13 [(short)13] [i_3] [i_3] [i_3] [i_3 - 1]))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_3] [i_3 - 2] [i_3 - 2])) ? (var_17) : (((((/* implicit */_Bool) var_9)) ? (-6126817887924125750LL) : (-7337360360383818072LL))))))))));
                                var_22 += ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 535822336U)) ? (arr_3 [i_0]) : (arr_13 [i_0] [(signed char)22] [i_2] [i_3] [i_1])))) ? ((+(771697553212846833LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 4; i_5 < 21; i_5 += 2) 
                {
                    var_23 = ((/* implicit */short) var_17);
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (short)9809)) * (((/* implicit */int) (short)2047))));
                }
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_25 = arr_19 [(signed char)5] [(signed char)5];
                    arr_23 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * ((~(arr_17 [i_0] [i_1] [i_1]))));
                }
                for (int i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    arr_27 [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_1] [i_7 - 1])))) | (((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_7 + 1] [i_1] [i_7 - 1])) & (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_7 + 1] [i_1] [i_7 + 1]))))));
                    arr_28 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_4 [i_0] [0LL] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) var_10)) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(short)15] [i_0] [i_1] [(signed char)6]))) : ((~(arr_2 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_19 [i_7 + 1] [i_0]))))))))));
                }
                for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_31 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_20 [i_1] [i_1 - 1] [i_8]))) ? ((+(arr_4 [i_0] [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1]))))));
                    var_26 = ((/* implicit */signed char) (+(616989242U)));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_8])) ? (arr_13 [(signed char)0] [i_1 - 1] [i_1] [i_1 - 1] [(short)22]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8]))))) + (((((/* implicit */_Bool) ((short) (signed char)31))) ? (arr_3 [i_0]) : (((/* implicit */long long int) (~(arr_5 [i_0] [i_1] [i_8])))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 771697553212846833LL)) && (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_8] [i_9])))))));
                        arr_36 [i_0] [i_1] = ((arr_3 [i_1]) & (arr_3 [i_1]));
                    }
                    var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (var_10)));
                }
            }
        } 
    } 
}
