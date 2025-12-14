/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4896
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), ((~(((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) (signed char)3))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2305843009213693951ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [6ULL] [i_1])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])))))) - (16140901064495857664ULL))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8576124652478296742LL))))) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) var_8);
                            arr_9 [i_3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) 2305843009213693951ULL))), (arr_3 [i_0 - 3] [i_0 + 4])));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_2 [i_0 + 3] [i_0 - 4])))));
            }
        } 
    } 
    var_19 = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693951ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)39006))))) && (((/* implicit */_Bool) var_13)))));
}
