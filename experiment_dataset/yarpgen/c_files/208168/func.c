/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208168
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [(_Bool)1]);
        var_20 = ((/* implicit */unsigned short) ((-9223372036854775789LL) & (((/* implicit */long long int) (~(((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13118)))))))))));
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27267))) + (arr_8 [i_2]))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_8 [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_13 [i_1] [i_2]) : (((/* implicit */unsigned int) arr_6 [i_4])))))));
                        var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)165))))) ? ((-(arr_8 [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2050)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (short)-2052)))))));
                        var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_3] [(unsigned short)17]) ^ (((((/* implicit */_Bool) arr_5 [20] [i_4] [10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) : (arr_9 [14] [i_2] [i_2])))))) & (arr_8 [i_4])));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) (~(arr_10 [i_1] [(unsigned char)7] [(_Bool)1] [4U])));
        var_25 |= ((((((/* implicit */_Bool) arr_13 [i_1] [i_1])) && (((/* implicit */_Bool) arr_13 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (arr_13 [i_1] [i_1]) : (arr_13 [i_1] [i_1])))));
        arr_15 [i_1] = ((/* implicit */long long int) ((unsigned short) 810500182));
    }
    var_26 |= ((/* implicit */int) var_0);
}
