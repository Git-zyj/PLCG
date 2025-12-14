/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234308
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */int) max((min((((/* implicit */unsigned short) var_0)), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned short) ((short) 433477760U)))))), ((+((+(((/* implicit */int) arr_3 [6U] [(short)4] [i_0]))))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_1 [i_0] [2U]), (((/* implicit */unsigned int) (short)423))))), (var_7)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)419))))), (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (22553)))))))) : (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)439))) : (arr_1 [(unsigned short)7] [i_1]))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0]))))));
                arr_5 [4U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)419)) + (((/* implicit */int) ((short) var_1))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
            {
                {
                    var_15 += ((/* implicit */long long int) arr_9 [i_2] [i_3] [i_2]);
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> ((((-(var_1))) - (1584209216)))))) ? ((((+(764043824))) | (((int) var_3)))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
