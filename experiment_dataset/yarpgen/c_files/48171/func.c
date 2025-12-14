/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48171
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_13);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_2])), (arr_1 [(unsigned char)5]))), (((((/* implicit */long long int) arr_11 [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) - (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                                var_18 = ((/* implicit */long long int) (((~(max((1962842079U), (((/* implicit */unsigned int) arr_10 [13LL] [i_1 - 1] [i_1 + 1] [i_1] [i_4])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 - 2]))))));
                                arr_12 [i_2] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (-3939076971689117546LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [11U] [i_2] [i_6] [11U] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2])) == (min((((/* implicit */unsigned long long int) var_5)), (var_11)))))), (((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (unsigned char)217))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 2332125217U)))))))));
                                var_19 = 1962842079U;
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)92)) * (((/* implicit */int) (short)-1))))), (max((454401022U), (((/* implicit */unsigned int) arr_5 [i_2]))))))), (max((((unsigned long long int) arr_17 [i_0 + 3] [i_5] [i_2] [i_5])), (((/* implicit */unsigned long long int) 3240284938478332750LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) var_6))), (((((/* implicit */long long int) ((/* implicit */int) arr_23 [(signed char)4] [8U] [(unsigned short)6] [i_7] [i_2]))) | (var_0)))))) ? (((((/* implicit */_Bool) 0U)) ? (256LL) : (-257LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3096905344841914184LL) : (((/* implicit */long long int) arr_11 [i_8] [i_1 - 1] [15ULL] [11ULL] [i_1 - 1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))))) : (((((/* implicit */_Bool) 255LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned char)10] [i_0] [i_2]))) : (var_0))))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (short)-1)), (-821862961))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_9])), (var_1))))));
        var_24 = ((/* implicit */unsigned char) var_12);
        arr_26 [i_9] = ((/* implicit */unsigned long long int) max((((unsigned char) arr_15 [i_9])), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned char)100)), (14366851265416115245ULL)))))));
    }
    var_25 -= ((/* implicit */int) max((((/* implicit */long long int) max((((3008895614U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((_Bool) var_10)))))), (min((max((((/* implicit */long long int) var_1)), (var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))));
    var_26 = ((/* implicit */unsigned char) ((signed char) (-(((((/* implicit */_Bool) 2299169916U)) ? (3840566273U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8462))))))));
}
