/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192863
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)20))));
                    var_15 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)0)) & (-596863408))) >> (((/* implicit */int) (signed char)0)))))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) -4420194915965048534LL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_9)) ? (var_10) : (var_10)))))));
                                arr_18 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) (unsigned char)255);
                                arr_19 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_1)))), ((~(((/* implicit */int) (signed char)0))))))), (18446744073709551615ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))) ? (max((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))), (max((var_3), (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_7))));
}
