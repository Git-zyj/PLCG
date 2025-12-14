/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247412
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (arr_4 [18LL] [i_1])))) != (min((((((/* implicit */long long int) -739690524)) / (arr_2 [i_0]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((arr_4 [i_0] [i_1]) - (3740972822U))))))))))) : (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (arr_4 [18LL] [i_1])))) != (min((((((/* implicit */long long int) -739690524)) / (arr_2 [i_0]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((((arr_4 [i_0] [i_1]) - (3740972822U))) - (3765893455U)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [(unsigned char)0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned short) ((long long int) arr_6 [i_1] [i_1] [i_1] [i_1])))) && (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)4))))) && (((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) (signed char)-4)))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0]), (((/* implicit */short) arr_5 [i_1] [i_1])))))) > (0LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) var_0)), (max((var_4), (((/* implicit */unsigned int) var_8)))))));
    var_16 = min((((/* implicit */int) var_6)), (var_7));
}
