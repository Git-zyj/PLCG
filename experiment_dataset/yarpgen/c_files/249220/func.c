/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249220
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U)))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 *= ((/* implicit */short) (+(((arr_0 [13]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (short)7824)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_20 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-84)))))) > (7650988946606622465LL));
            var_21 ^= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_6))))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)84))))) : ((+(arr_2 [i_0])))));
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 13113169438313838921ULL)))))));
            var_23 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (13113169438313838921ULL))))));
        }
        for (short i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            arr_11 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+((-(arr_10 [i_0] [i_0] [i_3])))));
            var_24 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_4 [i_3])))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) (signed char)-75)))) != ((-(((/* implicit */int) (short)10447))))))) < (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])))))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 5333574635395712689ULL))))) % (((/* implicit */int) ((((/* implicit */_Bool) 13113169438313838931ULL)) || (((/* implicit */_Bool) arr_9 [10] [i_4])))))))) ? (((/* implicit */int) (!(((((/* implicit */long long int) 0U)) == (arr_0 [i_4])))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-100)))))))));
    }
}
