/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204671
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29057)) * (((/* implicit */int) (short)-13547))))) % (var_5)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((((unsigned long long int) arr_0 [i_0] [i_0])) > (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (562949684985856LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((((unsigned long long int) -908336558600990875LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4 + 2])) ? (arr_6 [i_4 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
                            var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1]))));
                            var_18 = ((((/* implicit */int) max(((unsigned short)57521), ((unsigned short)51358)))) == (((/* implicit */int) arr_3 [i_2])));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (unsigned short)35747)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_13)))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_16 [i_3] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_1]))))), (((/* implicit */long long int) (short)16129))));
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) arr_2 [i_1] [i_2]);
            }
        } 
    } 
}
