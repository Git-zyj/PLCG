/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219904
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
    var_20 ^= ((/* implicit */unsigned short) 1152921504606846976LL);
    var_21 = ((/* implicit */int) var_5);
    var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_18)) ? (1152921504606846976LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)58279))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_18))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 2] [i_2] [16U])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_3] [i_3 - 2] [i_2] [i_3])))));
                        var_25 = ((/* implicit */unsigned short) 1152921504606846976LL);
                    }
                } 
            } 
            var_26 = ((long long int) arr_7 [10LL] [i_1] [i_1]);
        }
        for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            arr_14 [10ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) ((_Bool) (short)32757))) : (((((/* implicit */_Bool) -1152921504606846977LL)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) ((_Bool) (unsigned short)56712)))))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-50);
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_5 - 1] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_19 [i_0] [i_4] [i_4] [i_6] [i_6] [i_0])) : (((((/* implicit */_Bool) 4260239459U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16)))))))));
                        var_28 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (var_4) : (((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                        var_29 = ((/* implicit */_Bool) 0U);
                    }
                } 
            } 
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [12]))));
        }
        var_31 = ((/* implicit */short) var_6);
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) ((unsigned short) 551141377U))) : (((/* implicit */int) ((short) 34727824U)))));
    }
}
