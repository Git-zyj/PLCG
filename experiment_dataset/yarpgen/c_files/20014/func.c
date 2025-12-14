/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20014
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (4194048) : (420167527))) << (((((((/* implicit */_Bool) var_8)) ? (arr_2 [i_1 + 1]) : (((/* implicit */unsigned long long int) var_0)))) - (12763834898981685778ULL)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2 - 1])) << (((((((/* implicit */int) var_4)) + (17281))) - (20))))) | ((~(((/* implicit */int) var_14))))))) ? (((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (13482336266051694895ULL))) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (arr_5 [i_0] [14U]) : (((/* implicit */unsigned long long int) var_12)))))))), (((unsigned int) arr_10 [i_2 + 1] [i_3] [1LL] [i_2 + 1] [i_1 - 2] [i_1 - 1]))));
                            var_18 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) 13482336266051694889ULL);
                var_20 = ((/* implicit */int) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_10);
}
