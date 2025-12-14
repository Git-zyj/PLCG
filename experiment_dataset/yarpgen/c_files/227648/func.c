/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227648
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
    var_15 = ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) 4294967277U)) | (-424485093429399795LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (arr_8 [i_3 + 3] [i_3 + 3] [i_2] [i_2]) : (arr_8 [i_3 + 2] [i_1] [i_2] [i_3])))))))));
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)65516)))) >= (((/* implicit */int) arr_1 [i_0 - 1])))))));
                            var_18 = max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-7)));
                            var_19 |= ((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 4 */
                for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (((~(min((((/* implicit */unsigned long long int) var_9)), (var_4))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)62)), (642810888)))))))));
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (var_3)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [(unsigned short)4] [i_0] [i_0])))))))));
                }
                for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)114))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_15 [i_5] [i_1] [i_5] [i_5])))) ? (arr_7 [(signed char)7] [i_5 + 3] [i_1]) : (arr_7 [i_1] [i_5 + 3] [i_1])));
                    var_22 = ((/* implicit */unsigned short) var_0);
                    var_23 ^= ((/* implicit */unsigned int) ((min((arr_13 [8U] [i_5]), (((/* implicit */long long int) var_11)))) / ((+(max((arr_13 [(unsigned char)10] [i_1]), (((/* implicit */long long int) var_11))))))));
                    var_24 = ((/* implicit */int) var_7);
                }
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_29 [i_1] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_7 - 3] [i_7 - 3]))));
                                var_25 *= ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_0])) || (var_12)))) >> (((min((((/* implicit */int) (signed char)69)), (524024765))) - (43))))) : ((+(((/* implicit */int) var_12))))));
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    arr_33 [i_0] [i_1] = ((/* implicit */int) var_1);
                    arr_34 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) 4900022593692930850LL);
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_2 [i_9] [i_9] [i_9])))))))))));
                    var_27 = ((/* implicit */long long int) 805306368U);
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_8);
}
