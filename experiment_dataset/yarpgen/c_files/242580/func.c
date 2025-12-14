/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242580
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
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = arr_2 [i_0 - 1] [(short)14];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (0ULL) : (((/* implicit */unsigned long long int) 2168406273982282162LL)))) : (((/* implicit */unsigned long long int) ((((((-4630050796761163675LL) + (9223372036854775807LL))) << (((((-4630050796761163675LL) + (4630050796761163683LL))) - (8LL))))) % ((-(var_4)))))));
                    var_16 = var_3;
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL))))));
                    arr_19 [i_3] [2LL] [1ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [3] [(unsigned char)3])) ? (((/* implicit */int) arr_11 [i_3 + 3])) : ((-(((/* implicit */int) (unsigned short)23706))))))) <= (min((4630050796761163675LL), (9223372036854775807LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) -4630050796761163668LL)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) 4047000629U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4630050796761163658LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)13120))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74)))));
    var_19 = ((/* implicit */signed char) var_10);
}
