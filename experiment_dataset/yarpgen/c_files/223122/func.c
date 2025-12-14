/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223122
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
    var_14 = ((/* implicit */unsigned long long int) min((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)126))) ^ (var_11)))), (min((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65423))) : (var_11))), (((/* implicit */unsigned int) (signed char)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) == ((-(((/* implicit */int) (signed char)-1)))))))));
                var_16 = ((/* implicit */signed char) var_6);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_6 [i_0 + 1] [i_1] [i_2]);
                        arr_8 [20U] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                    }
                    arr_9 [i_1] = ((/* implicit */unsigned short) ((arr_0 [i_0 - 1]) > (arr_0 [i_0 + 1])));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_0 [i_0 - 1])));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3674514404271465LL)) ? (arr_1 [i_0]) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 417716380U)) : (arr_6 [i_0 + 1] [i_1] [i_4])))));
                    arr_13 [i_4] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)37936)) != (((/* implicit */int) (_Bool)0)))))));
                    var_20 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
                }
            }
        } 
    } 
}
