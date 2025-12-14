/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242499
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_18 ^= ((/* implicit */signed char) var_10);
                        arr_11 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) var_3);
                        arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_3] [i_1] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 9223372035781033984ULL))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3] [i_0 + 2])))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-72)))))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_20 = var_13;
        var_21 -= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))))));
    }
    for (short i_5 = 1; i_5 < 7; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [12] [i_5] [i_5 + 2] [i_5 + 2]))) : (9223372035781033996ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_22 += ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_14 [i_5])))));
        arr_20 [i_5] [i_5 + 3] = ((/* implicit */unsigned long long int) max((arr_3 [i_5]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 1048576)))))));
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_0 [i_5])) : (arr_15 [i_5])))) || ((((+(0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_5 + 2] [i_5 + 2] [i_5 + 2])) <= (((/* implicit */int) (_Bool)1))))))))));
    }
    for (short i_6 = 1; i_6 < 7; i_6 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */short) var_3);
        var_25 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_6 - 1] [i_6 + 3])) ? (arr_22 [i_6 + 2] [i_6 - 1]) : (arr_22 [i_6 + 3] [i_6 + 2]))), (arr_22 [i_6 + 2] [i_6 + 3])));
    }
    var_26 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23705)) ? (9223372037928517631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9220251404443804067LL)))) / (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (unsigned char)195)))))))));
}
