/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231190
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36220)) ? (var_11) : (((/* implicit */int) (unsigned short)36223))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) (unsigned short)36220)), (460563880U))), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (short)-1)))), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_3 - 1]))))))))))));
                                var_15 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 460563875U))))));
                                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 262143)) | (var_7)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
                                var_17 = var_5;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
}
