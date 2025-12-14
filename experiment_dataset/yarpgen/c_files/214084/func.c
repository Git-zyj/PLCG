/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214084
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) | (max((0LL), (((/* implicit */long long int) 4294967295U))))));
    var_12 = ((/* implicit */long long int) (~(20ULL)));
    var_13 = ((/* implicit */unsigned int) ((int) var_5));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_8), (11ULL))) >> (((((((/* implicit */int) (short)-31787)) + (((/* implicit */int) (signed char)-120)))) + (31957)))))) && (((/* implicit */_Bool) 18446744073709551610ULL))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((int) max((((/* implicit */short) (signed char)-1)), ((short)-8192))));
        var_16 -= ((/* implicit */unsigned char) min((min((20ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_17 ^= ((/* implicit */signed char) arr_5 [i_1] [i_2] [i_2]);
            var_18 = ((/* implicit */signed char) min(((+(18446744073709551605ULL))), ((~(arr_2 [i_2] [i_2])))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (6764140822887909834ULL)))))), (((((/* implicit */_Bool) 47ULL)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16)))))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) var_6);
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_11 [i_1] [i_3] = ((/* implicit */int) (-((~(min((1806371124556118262ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            arr_12 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_10 [i_3]) : (arr_10 [i_1])))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (+(min((max((10264299907184535387ULL), (((/* implicit */unsigned long long int) arr_14 [i_4])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1)))))))));
            arr_15 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) (~(min((9LL), (((/* implicit */long long int) 1145214817U))))));
            var_20 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((16640372949153433336ULL) / (8ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)86))))) : (min((1806371124556118262ULL), (11682603250821641781ULL))))), (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_4]) >= (6ULL))))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) (short)21147)) ? (((/* implicit */int) (unsigned short)8106)) : (((/* implicit */int) (unsigned short)65517))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_21 = ((/* implicit */signed char) (-(arr_9 [i_5] [i_5] [i_5])));
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */int) (short)8208)) << (((21ULL) - (4ULL)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15U)))) ? ((+(arr_3 [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12)))))));
        var_23 = ((/* implicit */short) ((signed char) ((long long int) (signed char)-27)));
    }
}
