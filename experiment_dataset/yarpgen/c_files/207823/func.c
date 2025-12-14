/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207823
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))))) ? (((/* implicit */int) min(((unsigned char)196), (((/* implicit */unsigned char) ((signed char) (unsigned short)1)))))) : (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23750))))) ? ((~(18446744073709551613ULL))) : (((/* implicit */unsigned long long int) 1853739370))))) || (((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_16), (((/* implicit */short) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) : ((+(arr_6 [i_1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : ((~(((/* implicit */int) var_3)))))))));
                    arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((11ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) >= (max((-836100909), (((/* implicit */int) (unsigned short)30720)))))) ? (((((/* implicit */_Bool) ((int) var_16))) ? (max((32764), (-1853739378))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))) : ((~(arr_3 [i_0 - 3] [i_1 - 1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (16ULL) : (8ULL)));
}
