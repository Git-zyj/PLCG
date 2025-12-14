/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200272
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]))))) ? (min((((/* implicit */long long int) arr_3 [i_0] [8ULL] [i_1])), (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_3)) ^ (var_1))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 3] [i_1]))))) : ((-(arr_1 [(unsigned char)17] [i_1]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((min((((/* implicit */long long int) -1346482549)), (arr_1 [i_0] [i_0 + 2]))) & (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))));
                            var_20 += ((/* implicit */unsigned char) 1346482547);
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (max((1346482560), (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((var_3) | (1346482557))) < (max((-1346482554), (((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 1346482551))));
}
