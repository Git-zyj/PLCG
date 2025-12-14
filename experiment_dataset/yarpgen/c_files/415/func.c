/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/415
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
    var_14 = ((/* implicit */unsigned char) 15059195062361255661ULL);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (+(var_11)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) 3387549011348295954ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) 1125895611875328ULL)) || (((/* implicit */_Bool) arr_2 [i_0]))))))))))));
                        var_17 &= ((/* implicit */short) arr_8 [i_1] [i_3] [3] [5ULL] [i_1] [i_0]);
                    }
                }
            } 
        } 
    } 
}
