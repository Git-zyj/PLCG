/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223989
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_13 [i_0] [i_0 - 4] [i_0 - 4] [i_0] [i_0] [i_0] [i_0 - 4] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (signed char)15)) == (((/* implicit */int) (signed char)-7))))), ((+(((/* implicit */int) (unsigned short)12459))))));
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-15)), (arr_10 [i_0] [i_0] [i_3] [i_4]))))))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0 - 1])) : (var_15))) - (1598413521LL)))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53085)) != (max((var_6), ((~(((/* implicit */int) var_3))))))));
                            }
                            /* LoopSeq 1 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) ((var_16) > (var_16)))))));
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 1])) > (((/* implicit */int) (signed char)9))))) << ((((+(var_1))) + (358367240)))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((-(var_13))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned short)53080)) : (((/* implicit */int) (unsigned short)65522))))))))));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) 3481260393U)) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (18446744073709551598ULL)))));
                                arr_17 [i_2] = ((/* implicit */unsigned int) 1152921504606846975ULL);
                            }
                            arr_18 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (-(18446744073709551607ULL)));
                arr_19 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_15 [i_0 + 1] [i_0 - 4] [i_0]), (arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 4])))) >= (((/* implicit */int) ((_Bool) var_1)))));
                var_24 = ((unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (1897625168) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (2147483645)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((var_7) * (((((/* implicit */int) var_2)) << (((max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_12)))) - (18446744073709551579ULL)))))));
}
