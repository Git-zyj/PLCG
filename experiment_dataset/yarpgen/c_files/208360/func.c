/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208360
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
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1212357163U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 250518480)) ? (((/* implicit */int) (unsigned short)18430)) : (((/* implicit */int) (unsigned short)16854))))))) << (((((/* implicit */int) var_2)) + (28034)))));
    var_12 &= ((/* implicit */short) var_10);
    var_13 |= ((/* implicit */short) max((15137826695692326784ULL), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 3308917378017224831ULL)) ? (var_1) : (((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */signed char) max((max((var_0), (((/* implicit */unsigned long long int) ((long long int) -2693921379830723715LL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) && (((/* implicit */_Bool) arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (short)-4185)) : (2147483637)));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [(_Bool)1] = ((/* implicit */short) ((_Bool) arr_9 [i_4] [i_3] [i_3 + 1] [i_1] [i_3] [i_1]));
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (((_Bool)0) ? (16646144U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42)))));
                        }
                        var_17 -= ((/* implicit */unsigned char) arr_4 [i_1] [i_2]);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_9)));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            var_19 = ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)18426)));
                            var_20 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_3] [i_3]);
                        }
                        for (int i_6 = 4; i_6 < 16; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned long long int) 2147483647));
                            arr_20 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) 3082610133U);
                            var_22 = (~(1212357163U));
                        }
                    }
                    for (int i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        arr_24 [i_1] = ((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]);
                        arr_25 [i_0] [(unsigned char)16] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((((-711639313) + (2147483647))) << (((((-289536565) + (289536574))) - (9)))))))));
                        var_23 ^= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (unsigned char)226)), (18446744073709551605ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) arr_2 [i_7 + 1])) : (((/* implicit */int) arr_2 [i_7 + 3])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_7))));
                            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7))));
                        }
                    }
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])) | (18446744073709551605ULL)))) ? (arr_1 [i_0] [i_1]) : ((-(-2147483639))))))));
                    var_27 = (+(max((3082610133U), (((/* implicit */unsigned int) (unsigned char)0)))));
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-32764)) & (((/* implicit */int) ((_Bool) (_Bool)1))))) & (max((((/* implicit */int) ((unsigned char) var_3))), ((~(210059120)))))));
                }
            } 
        } 
    } 
}
