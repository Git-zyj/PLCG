/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216850
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_5))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -733492092)) ? ((-(((/* implicit */int) (unsigned short)39829)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */int) (unsigned short)60236))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)4] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (arr_8 [i_0] [i_1 - 3] [i_1 - 3]))))))))));
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)47927))))), (arr_7 [i_2] [i_1] [i_2])));
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-465838371) + (((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (unsigned short)60238))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_19 [(_Bool)1] |= ((/* implicit */signed char) 9223372036854775797LL);
                    var_25 = ((/* implicit */signed char) arr_2 [i_0]);
                }
            } 
        } 
    }
}
