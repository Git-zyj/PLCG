/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36405
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)91)), ((+(((/* implicit */int) (unsigned char)151))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35728))))) ? (((/* implicit */int) ((_Bool) (unsigned char)151))) : (((/* implicit */int) min((var_13), (((unsigned short) 852505161)))))));
                    arr_9 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */int) (signed char)-9)) : ((+(((/* implicit */int) (short)18288))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((int) (_Bool)1)));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */int) (unsigned char)105)) : ((~(((/* implicit */int) (signed char)3))))))));
                        var_24 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_9))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) var_2);
                            var_26 -= ((/* implicit */unsigned short) ((long long int) (+(8131059935034617976ULL))));
                            var_27 = ((/* implicit */short) var_15);
                            arr_22 [i_0] = var_19;
                        }
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)165))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((long long int) (signed char)-121));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_18) : (4U)));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) -8932449093100651758LL);
                            arr_34 [i_0] [i_1] [i_3] [i_3] [i_9] = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_7))));
                        }
                    }
                    var_32 *= ((/* implicit */signed char) ((unsigned int) (signed char)68));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_40 [i_0] [i_1] [i_10] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((-(((((/* implicit */_Bool) 0LL)) ? (-2978375897071848109LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((18446744073709551596ULL) & (5551032250667664125ULL))))))));
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_6)))));
                        }
                    } 
                } 
                var_34 = var_6;
            }
        } 
    } 
}
