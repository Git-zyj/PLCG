/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19471
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)0), ((short)(-32767 - 1)))))) : (((var_8) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(((((/* implicit */_Bool) (short)-4096)) ? (2LL) : (var_9))))) : (((((((/* implicit */_Bool) var_2)) ? (1082331758592LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) - (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 0LL)))))))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-2147483647 - 1))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19))) : (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4096)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)4090))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_5 [(unsigned char)4] [i_1] [(unsigned char)4])))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_12 = max((((arr_8 [6LL] [12LL] [12LL] [i_0]) & (arr_1 [i_0]))), ((~(((/* implicit */int) min(((short)-32753), (var_1)))))));
                            var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-32762)))), ((+(((/* implicit */int) arr_0 [i_0]))))));
                            var_14 = ((/* implicit */unsigned int) (short)14);
                            arr_15 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((arr_8 [i_5] [i_0] [i_0] [i_0]), (((/* implicit */int) (short)511))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) var_6)))))) : (arr_5 [i_0] [i_1] [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-500))) : (var_9))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
    var_16 |= ((/* implicit */unsigned char) var_0);
}
