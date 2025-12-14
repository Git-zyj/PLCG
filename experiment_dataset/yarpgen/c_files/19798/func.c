/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19798
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_10 &= (-(2292587611171780264ULL));
                            var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -5939318508999963798LL)) ? (922482516156128962LL) : (((/* implicit */long long int) 1145224591U))))))) * (((((/* implicit */_Bool) max((arr_1 [15U]), (((/* implicit */unsigned long long int) arr_6 [i_3]))))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_6 [i_0]))))) : ((+(17559598732361663221ULL)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)17716))))), (((/* implicit */long long int) ((var_2) >= (var_2)))))))));
    var_14 ^= ((/* implicit */_Bool) var_5);
}
