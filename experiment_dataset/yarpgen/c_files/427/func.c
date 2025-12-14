/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/427
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) var_2);
                                arr_12 [i_2] = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) 8496084503718641026ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)5)))))));
                                arr_13 [i_4] [i_2] [(signed char)15] [7LL] [i_1 - 2] [i_2] [i_0] = ((/* implicit */int) 2503243656U);
                                var_16 = (_Bool)1;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 2] [i_0] [17U] [i_0] [i_2])))))))) - (max((((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0])), (((arr_7 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 6892599216297680672ULL)) ? (((/* implicit */unsigned long long int) 1791723640U)) : (((6892599216297680668ULL) + (54043195528445952ULL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) 2147483647);
}
