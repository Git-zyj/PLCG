/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234620
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_3) + (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(var_12)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((short)(-32767 - 1)), ((short)-32767))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) == (arr_2 [14U] [i_2 + 1] [i_2]))))) : ((~(((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-27204)) ? (454143474564211399LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0 + 1] [(short)6] [i_2 - 2] [i_1 - 1])))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4294967295ULL)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_0]))))))) ? ((((+(((/* implicit */int) arr_5 [i_1] [i_2] [i_3])))) | (((/* implicit */int) ((var_9) < (((/* implicit */long long int) arr_6 [i_1] [i_3] [i_3]))))))) : (var_15))))));
                    }
                }
            } 
        } 
    } 
}
