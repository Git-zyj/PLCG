/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20961
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)224)) - (216)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_17 *= ((/* implicit */unsigned int) var_7);
                            arr_17 [i_1] [i_1 + 1] [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((((/* implicit */int) (unsigned char)0)) * (-877961820)))))), (((arr_8 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))));
                            var_18 *= ((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_4])), ((-(((/* implicit */int) ((_Bool) arr_0 [i_3])))))));
                            var_19 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_20 [i_5] [(_Bool)1] [i_1] [i_1 - 2] [i_0 + 1] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) arr_16 [i_3] [3U])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_14 [i_5] [i_3] [i_1 + 1] [i_1 + 1] [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_1] [i_3] [i_5]) > (((/* implicit */unsigned int) var_1))))))))));
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [(unsigned short)4])) ? (((/* implicit */int) arr_10 [i_2] [i_0 + 1] [i_1 - 1] [i_2])) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_16 [(short)10] [i_2]))))) ? (min((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])), (arr_2 [i_1 - 2]))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (arr_19 [i_0] [i_2] [i_2] [i_3] [i_5]))))))));
                            arr_21 [(unsigned char)2] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)247)), (3111899018332847186LL)));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) - (((/* implicit */int) ((short) 127LL)))))) ? (min((((/* implicit */long long int) (short)-4)), (-3111899018332847187LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) (unsigned short)8625)) : (((/* implicit */int) var_4))))))))))));
                        }
                        var_22 = ((/* implicit */_Bool) max((max((((/* implicit */int) ((_Bool) arr_12 [i_1] [i_3]))), (var_2))), (((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)8622))))))));
                        var_23 = ((/* implicit */_Bool) var_12);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) (short)-22492))));
                        var_25 = ((/* implicit */long long int) arr_22 [i_6] [i_6] [i_1] [i_6] [i_6]);
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 1]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_27 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)57)), ((short)3)))) : (((/* implicit */int) (unsigned char)111))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 3; i_9 < 22; i_9 += 3) 
            {
                {
                    var_28 = ((/* implicit */_Bool) (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_7)))) << (((((/* implicit */int) min((arr_29 [i_8]), (((/* implicit */unsigned short) var_4))))) - (80)))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_3))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 24; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    var_30 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) 774486839U)), (((((/* implicit */_Bool) var_14)) ? (15ULL) : (((/* implicit */unsigned long long int) arr_35 [(_Bool)1] [(signed char)1] [i_11]))))))));
                    arr_40 [i_7 - 1] [i_7 - 1] [i_10] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_29 [i_7])), (((long long int) ((long long int) arr_30 [i_11])))));
                    arr_41 [i_7] [i_7 - 1] [i_10] [i_11] = ((/* implicit */int) ((long long int) ((((_Bool) var_0)) ? (((1794042486U) << (((/* implicit */int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_7 - 1] [(_Bool)1] [i_7 - 1] [i_7 - 1]) == (((/* implicit */int) arr_32 [(unsigned short)6] [i_7] [i_10 + 1] [(unsigned short)6])))))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) ((_Bool) 4209911415794902581ULL)))))));
    var_32 = var_7;
}
