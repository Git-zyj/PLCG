/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22328
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
    var_14 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967286U))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (var_13))), (((/* implicit */long long int) arr_4 [(_Bool)1] [i_0 - 4] [9U])))) ^ (min((((/* implicit */long long int) (unsigned char)59)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_9)))))));
                var_16 = ((/* implicit */unsigned char) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_1 [0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_13))))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (~(arr_0 [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) arr_3 [i_2]);
                            arr_14 [i_0] [i_0] [i_1] [0LL] [(_Bool)0] = ((/* implicit */short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) -3087958769321593231LL)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_12))))), (((max((((/* implicit */long long int) (unsigned short)32565)), (var_9))) / (((/* implicit */long long int) arr_9 [i_3 - 1] [i_3 + 1] [i_0 - 1] [i_0 + 2]))))));
                            var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((2981332306618827787ULL), (((/* implicit */unsigned long long int) (unsigned char)38))))) ? (min((((/* implicit */long long int) arr_13 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(unsigned short)4])), ((unsigned char)168)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-18668))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? ((~(max((20LL), (((/* implicit */long long int) (unsigned char)249)))))) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned char)198)), (0U))) >> (min((var_13), (((/* implicit */long long int) var_0)))))))));
}
