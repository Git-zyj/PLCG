/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220068
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
    var_19 += ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((long long int) ((unsigned int) ((int) 917311943U))));
                                arr_15 [14LL] [i_3] [(unsigned short)3] [i_1] [i_1] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((((/* implicit */int) arr_6 [i_0] [i_3] [i_4])) | (((/* implicit */int) var_10)))));
                                var_21 += ((/* implicit */short) (~((+(1872091287U)))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (+(2422876008U)));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_15)) * (((/* implicit */int) ((((/* implicit */int) (short)135)) > (((/* implicit */int) arr_4 [i_1])))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)10] [i_5])))))) + (max((var_6), (var_0)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) 644395471)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16262))));
}
