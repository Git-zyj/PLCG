/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238906
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)65531)) >= (((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)32751))))))) : ((+(((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1] [i_2])))) ? (215404204) : (((/* implicit */int) ((_Bool) (short)-32751)))))) : (min((((long long int) (signed char)24)), (((/* implicit */long long int) ((int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) >= (9223372036854775807LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_8 [i_1] [i_2 - 2] [i_1] [i_4])))) ? (max((arr_5 [i_1] [i_1]), (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_5)))))) : ((+((~(arr_5 [i_1] [i_1])))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) var_11)), (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 4; i_5 < 20; i_5 += 1) 
    {
        arr_16 [i_5 + 2] = ((/* implicit */short) (((+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        arr_17 [i_5] = ((/* implicit */_Bool) var_0);
    }
}
