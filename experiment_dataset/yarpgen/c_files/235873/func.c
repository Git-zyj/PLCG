/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235873
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
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned char)11] [i_1] [i_2] [i_1] [i_4] [0ULL] [i_2] = ((/* implicit */signed char) (~(max(((~(((/* implicit */int) (short)6919)))), (((/* implicit */int) (_Bool)0))))));
                                var_19 *= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) 132120576U)) ? ((((~(0U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)-19)))), ((!(((/* implicit */_Bool) var_2)))))))));
                    arr_14 [i_0] [i_0] &= ((/* implicit */signed char) (~(max((8103630055662912769LL), (((/* implicit */long long int) var_8))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (((var_16) & (((/* implicit */long long int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((1309523807014442517LL) | (((/* implicit */long long int) ((unsigned int) (unsigned char)5))))))))));
}
