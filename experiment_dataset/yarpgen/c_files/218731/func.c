/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218731
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
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */short) (~(((/* implicit */int) var_9))));
                var_17 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_0 - 1] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [12ULL] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))))));
                            var_19 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) 496518160U)) ? (arr_9 [0U]) : (((/* implicit */long long int) ((int) (unsigned char)135))))) & (var_4)));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned int) arr_3 [i_4] [i_1] [14LL]);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((arr_0 [i_0 - 2]) % (arr_0 [i_0 - 2]))), (((/* implicit */unsigned int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_10))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(var_12))))));
}
