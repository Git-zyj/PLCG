/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237288
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)55796));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (unsigned char)60)) && (((/* implicit */_Bool) (unsigned short)61114))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 3] [(short)2] [i_3 + 1] [16LL] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)84)) & (((/* implicit */int) (short)24983))))));
                                var_15 = ((arr_4 [i_0 + 2]) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9742))) / (var_3)))));
                                arr_16 [(_Bool)0] [(_Bool)0] [i_0] = ((unsigned long long int) (unsigned short)55793);
                                arr_17 [i_0] [i_1] [i_1 + 3] [i_0] [i_3 - 3] [6ULL] = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_2 + 1] [i_0] [i_2] [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 4; i_6 < 18; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((unsigned int) max(((unsigned short)9740), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)55792))))))));
                    arr_26 [i_5] [16U] [i_7] = ((/* implicit */unsigned short) arr_3 [i_5] [i_5] [i_5]);
                    arr_27 [i_7] [i_5] [6ULL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)9569)) : (((/* implicit */int) (unsigned short)9739)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_11 [i_5 + 2] [16LL] [i_6 - 3] [i_7] [i_5 - 1] [i_5 + 1])) ? (arr_11 [(short)18] [i_6] [i_6 - 1] [i_7] [i_5 - 1] [i_6 + 1]) : (arr_11 [i_5] [0] [i_6 - 2] [i_7] [i_5 - 1] [i_6])))));
                    arr_28 [i_5] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        arr_31 [i_5] [i_6] [i_6 - 2] [i_7] [i_8] = (~(((/* implicit */int) (unsigned char)84)));
                        arr_32 [4ULL] [11ULL] [i_6 - 1] [i_7] [i_8 - 2] = ((/* implicit */int) (unsigned char)255);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_38 [(unsigned char)6] [i_6 - 3] [i_10] [i_5 + 1] [i_10] [(unsigned char)6] [i_9] = min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_9] [i_6 + 1]))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_30 [i_5 + 2] [i_5 + 2] [i_9])) > (var_0)))) : (((int) arr_20 [i_5] [i_10])))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 5665851733468261248LL))));
                        }
                        arr_39 [i_9] [i_6] [i_7] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))), (var_0)));
                    }
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5] [i_5 - 1])) ? (((/* implicit */int) (_Bool)1)) : (var_9)))), (8397722209843257978LL)));
    }
}
