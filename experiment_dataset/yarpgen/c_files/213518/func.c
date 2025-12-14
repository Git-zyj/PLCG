/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213518
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)49363)) * (((/* implicit */int) (signed char)94))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_11);
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) (unsigned short)28485))))) ? (((/* implicit */int) arr_7 [i_3])) : (min((-79841000), (((/* implicit */int) (unsigned short)50147))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-5), ((signed char)109))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)-88))))))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) (signed char)96))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) * (min((arr_2 [8] [i_3] [(_Bool)1]), (arr_5 [i_0] [i_2] [i_0])))))));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0 + 1]);
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 2] [i_0]))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))));
                                arr_18 [i_0] [i_2 - 2] [i_1] [i_0] = ((/* implicit */_Bool) var_6);
                                arr_19 [i_5] [i_3] [i_0] [i_1 - 1] [(unsigned char)13] = ((/* implicit */signed char) ((int) 2774858353U));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((17969518180883359147ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_3]))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) (unsigned short)16123);
                                var_19 = ((/* implicit */unsigned short) (signed char)93);
                                var_20 = ((/* implicit */short) ((unsigned long long int) ((_Bool) arr_21 [i_0 + 1] [i_0])));
                            }
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)94)) ? (-783009408) : (((/* implicit */int) (unsigned short)65522)))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4151320993U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : (6308355892968459184LL)))));
                arr_23 [i_0] = ((/* implicit */unsigned int) max((((signed char) ((unsigned long long int) arr_12 [i_0] [10LL] [10LL] [i_1] [13] [i_1] [i_1]))), (((/* implicit */signed char) (_Bool)1))));
                var_22 = ((/* implicit */int) (_Bool)0);
            }
        } 
    } 
}
