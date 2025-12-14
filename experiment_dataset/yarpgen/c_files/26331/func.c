/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26331
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 2] |= min(((+(((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3862111399U))))), ((-(((((/* implicit */_Bool) var_0)) ? (251961164U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 - 2] [i_0] [6LL] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551603ULL) : (arr_7 [(unsigned char)8])))) ? (min((13ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_10))))));
                            arr_12 [13LL] [i_1] [i_2] [i_3] = min((((int) -1003062244)), (((/* implicit */int) max((arr_0 [i_1 - 2] [i_0 - 1]), (arr_0 [i_1 + 3] [i_0 - 2])))));
                            var_11 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 791569981U)) ? (var_3) : (((/* implicit */long long int) 791570004U))))))), ((!(((/* implicit */_Bool) arr_1 [1] [i_1 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((471721038U) >> (((var_0) - (3841094741U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (var_3))), (((/* implicit */long long int) var_1))));
    var_13 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)26)), (3503397305U)));
}
