/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23408
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
    var_20 = ((/* implicit */long long int) var_18);
    var_21 += ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)107))) ? (((/* implicit */int) var_0)) : (max((var_18), (((/* implicit */int) (unsigned short)25187)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [(unsigned short)4] [i_1 + 2])) | (((((/* implicit */_Bool) -8987502107190758828LL)) ? (arr_3 [4] [i_1 + 2] [i_2]) : (((/* implicit */int) var_15)))))))))));
                    var_23 += ((/* implicit */long long int) var_11);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_24 *= ((signed char) (signed char)117);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) (unsigned short)2994);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-43)) % (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_17 [i_3] [i_1] [i_2] [i_0 - 1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -6133722226337637791LL))) ? (((/* implicit */int) arr_11 [2U] [2U] [2U] [2U])) : ((~(arr_1 [i_0])))));
                            arr_18 [i_0 + 2] [i_0 + 2] [6U] [i_0] [i_5] = ((/* implicit */_Bool) arr_6 [i_0]);
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [(_Bool)1] [(unsigned short)0] &= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) arr_11 [(signed char)9] [(unsigned short)2] [i_2] [i_6])) << (((((/* implicit */int) (unsigned short)37655)) - (37640)))))) > (arr_5 [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0] [4U])) : (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_2] [i_2] [i_6]))));
                        var_27 = ((/* implicit */long long int) (signed char)-48);
                        arr_22 [i_0] [i_0] [i_2] [i_0] = ((signed char) ((((((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1])) < (((/* implicit */int) (unsigned short)439)))) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((int) -719705754))));
                        arr_23 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [9U] = ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_0] [(unsigned short)2] [i_2] [6] [i_2]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_26 [i_0 + 2] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((2790380116U) % (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_7]))) : (arr_0 [i_0] [i_2])))));
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_12 [i_1 + 2] [i_1 + 1] [i_0] [i_0] [i_0 - 1] [i_0])));
                        var_28 += ((/* implicit */signed char) (~(((int) 1382520105247194874ULL))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) var_13);
}
