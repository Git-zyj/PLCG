/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193384
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) + (max((((/* implicit */long long int) var_9)), (var_6)))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2 + 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_0)) - (30645)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (unsigned short)65527))))));
                            var_16 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) (-(2912513298U))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_12)))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)155))))) : (((((/* implicit */_Bool) 8935141660703064064LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) : (2667128566492235906LL)))));
                                arr_21 [i_6] [i_5] [i_6] [i_1] [(unsigned short)8] &= ((/* implicit */int) (-(((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))))));
                                var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)9))))), (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (var_5))))) | (((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (8678992620659204106LL))) | (var_6)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((-(-2212871198648416166LL))), (((/* implicit */long long int) (unsigned char)254)))))));
                            arr_34 [i_8] = (!((_Bool)1));
                            arr_35 [i_7] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) var_3))))) % (((unsigned long long int) var_6)))));
                        }
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(max(((-(2493001105366271955ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) var_3))))))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) (~(((var_12) | (var_12))))))));
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_10)) : (var_5))) < (min((var_5), (-4392507368444825581LL))))))));
                        arr_36 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (short)-19236)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) <= (var_4))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) var_13)))), (min((((/* implicit */long long int) var_13)), (var_12))))), (min((var_6), ((~(var_5)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_3))));
                            var_25 = var_2;
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_12)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_10)) : (var_12))))))));
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)147))));
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_4) : (var_2)));
                            arr_44 [i_7 - 1] [i_12] [i_8] [i_8] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-85))));
                        }
                        arr_45 [i_8] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (signed char)-1)), (var_4))), (((/* implicit */unsigned long long int) (unsigned short)56113))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)42))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
                    }
                    arr_46 [i_7] [i_9] [i_7] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))) ? (((/* implicit */unsigned int) var_10)) : (min((((/* implicit */unsigned int) var_9)), (var_13))))), (((/* implicit */unsigned int) ((short) max((((/* implicit */int) var_1)), (var_10)))))));
                }
            } 
        } 
    } 
}
