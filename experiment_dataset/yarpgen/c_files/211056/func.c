/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211056
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned int) ((long long int) 7156740715516435393LL))) : (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)63)))))));
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_4 [i_0 - 1] [i_1]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_17 = arr_6 [i_2] [i_3];
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) 4294963200ULL);
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (short)7)), (2048U)))))), (7156740715516435386LL)));
                        }
                        var_21 = ((/* implicit */long long int) max((var_3), (((max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_3 - 2] [i_0] [13U] [(signed char)4] [(short)0] [8ULL]))) >= (7699288875337006654LL)))))))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            var_22 += ((/* implicit */unsigned int) -18612910);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_14 [i_0] [i_5 - 1] [i_5 - 1]))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_0 + 1] [i_0] [i_0])))) <= (arr_16 [i_0] [i_0 + 1] [i_5 + 1])));
            var_25 = ((/* implicit */signed char) (-(min((min((var_9), (((/* implicit */unsigned long long int) (unsigned short)11522)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (arr_14 [i_0 + 1] [i_5 + 1] [i_0]))))))));
        }
        var_26 = ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)23667)), (var_7)))) && (((/* implicit */_Bool) ((signed char) var_2)))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~(((1426393453U) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)10617))))))))))));
        arr_17 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_0])), ((~(18446744069414588415ULL)))));
    }
    var_28 = ((max((((unsigned int) var_12)), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)65348))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) ? (min((((/* implicit */unsigned int) var_12)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)-38)))))))));
}
