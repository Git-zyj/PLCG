/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195770
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
    var_18 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 -= ((((((-1293763020) <= (((/* implicit */int) (_Bool)0)))) || ((_Bool)0))) ? (14685473164396942295ULL) : (18446744073709551600ULL));
                var_20 = ((/* implicit */int) (((-(max((18446744073709551613ULL), (((/* implicit */unsigned long long int) (short)-27753)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned char)14)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_22 *= ((/* implicit */short) min((((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4777))) : (arr_5 [i_0] [10ULL] [2ULL])))), (((/* implicit */unsigned char) max((arr_2 [i_0]), (var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_7))));
}
