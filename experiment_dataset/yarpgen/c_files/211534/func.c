/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211534
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) 2384609100265160670ULL);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)21963))) ? (max((((/* implicit */unsigned int) (~(var_1)))), (max((arr_7 [(short)8] [i_3] [i_3] [i_0]), (((/* implicit */unsigned int) (unsigned short)65535)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) ((7751359831090411812ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10)))))))))))))));
                        var_21 = ((/* implicit */signed char) 583948565699907545LL);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_17 [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_4] [i_4] [i_5] [i_0])) + (((/* implicit */int) var_18)))) << (min((13ULL), (((/* implicit */unsigned long long int) (signed char)56))))));
                    arr_18 [6] [i_0] [i_4] [i_4] = ((/* implicit */int) ((((unsigned long long int) ((signed char) (signed char)0))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)55)) ^ (((/* implicit */int) (signed char)-57)))))));
                    arr_19 [i_5] [i_0] [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? ((+(min((10695384242619139804ULL), (((/* implicit */unsigned long long int) 4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1694)))));
                }
            } 
        } 
    }
    var_22 ^= (~(((((/* implicit */_Bool) (signed char)50)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_6)) : (1099511627775LL))) : (((((var_16) + (9223372036854775807LL))) >> (((((/* implicit */int) var_18)) - (4932))))))));
}
