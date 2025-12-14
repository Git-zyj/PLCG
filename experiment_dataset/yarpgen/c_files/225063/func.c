/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225063
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */int) (short)-22076)) | (((/* implicit */int) (short)-22076)))))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-64))))), (var_10))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)161), (((/* implicit */unsigned char) var_3))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) <= (-2160116854400063462LL))))))), ((unsigned short)63228))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1] [(unsigned short)4])) && (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) (short)22075)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_10);
}
