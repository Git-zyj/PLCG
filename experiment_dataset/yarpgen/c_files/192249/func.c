/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192249
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
    var_11 = ((/* implicit */unsigned char) ((long long int) var_5));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7)))))) ? (((/* implicit */int) (short)13438)) : (((((/* implicit */_Bool) (short)13436)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13432))))));
                var_13 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((var_8), ((short)13444)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_2 [i_1] [i_0])) ^ (((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) var_6)), (arr_3 [i_0] [i_0] [3U])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_4 [i_2])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_7)))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [16])) ? (((/* implicit */int) (short)-13439)) : (((/* implicit */int) arr_0 [i_3]))))) : (((unsigned long long int) (short)-13412)))) : (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_7))) : (((/* implicit */unsigned long long int) max((1965459170U), (((/* implicit */unsigned int) (short)-13412)))))))));
                            var_15 = ((/* implicit */int) (short)13412);
                            arr_11 [i_0] [i_1] [2ULL] [i_3] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29138)) ? (arr_7 [0] [0] [0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((-4637580799080388848LL) + (((/* implicit */long long int) arr_7 [i_0] [17LL] [i_2])))) : (((long long int) (short)13439))))) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) max((var_9), (var_9)))) : (((/* implicit */int) (unsigned short)3816))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)74))) ? (var_7) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [(unsigned char)5]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (_Bool)1);
}
