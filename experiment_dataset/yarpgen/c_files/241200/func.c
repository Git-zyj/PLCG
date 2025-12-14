/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241200
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
    var_15 = ((/* implicit */unsigned short) var_14);
    var_16 = ((((((/* implicit */_Bool) var_2)) ? (max((var_6), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((6353706234339483792ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) != (max((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_5 [(signed char)23] [(_Bool)1] [i_0]);
                arr_7 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_7)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) 396033830U);
                            arr_15 [i_0] [(short)17] [i_0] [i_2] [(short)13] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_0 + 1]);
                            var_19 = ((/* implicit */_Bool) 16332964669683350277ULL);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_1])))))) << (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_0)), (17547666199050238304ULL))) != (((/* implicit */unsigned long long int) -9223372036854775804LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))), (((/* implicit */unsigned int) ((1071644672ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))) : (((arr_12 [i_0 - 1] [i_0] [(_Bool)1] [i_0] [(_Bool)1] [(unsigned short)10]) << (((arr_12 [i_0 - 2] [2ULL] [6ULL] [i_0] [(_Bool)1] [i_0]) - (9321250468569652888ULL)))))))));
                            var_22 |= max((var_3), (max((arr_10 [21LL] [i_0 + 1] [i_0 + 1] [i_0]), (arr_10 [i_5] [i_0 + 1] [i_0 + 1] [i_0]))));
                            var_23 &= ((/* implicit */short) var_14);
                            var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)56))))) ? (arr_12 [i_0] [i_0] [20LL] [(unsigned short)16] [i_0] [10LL]) : (((/* implicit */unsigned long long int) var_5)))), (var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
}
