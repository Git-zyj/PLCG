/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232422
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) (unsigned short)30085))) == (((((/* implicit */_Bool) (unsigned short)20189)) ? (-1199632195) : (((/* implicit */int) var_14)))))) ? ((-((~(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)38)) >= ((~(((/* implicit */int) (short)22138))))))))));
                var_16 = ((/* implicit */_Bool) min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)202)))), (((/* implicit */int) var_7))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */int) (unsigned char)35);
                    arr_9 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [11LL] [i_2 + 1] [i_0])) & (var_2)))));
                }
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    arr_12 [i_0] [7] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(arr_4 [i_0] [i_0 - 2] [i_0 - 1])))) / ((-(((/* implicit */int) var_13))))));
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) != (((/* implicit */int) (signed char)89))))) : (((/* implicit */int) ((2305807824841605120ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))), (((((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]))) ? ((+(18420651249225810665ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-22139), ((short)22138)))))))));
                }
                for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    var_18 |= ((/* implicit */signed char) ((((/* implicit */int) var_14)) % (((int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_15 [i_0 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1]);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [(unsigned char)0] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [2ULL] [i_0 + 2])) & (((/* implicit */int) (unsigned char)66))))) : (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 - 1] [14ULL] [i_4] [i_0 + 2]))))))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_5);
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (var_10)));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (~(var_0))))));
    var_23 = ((/* implicit */unsigned int) var_13);
}
