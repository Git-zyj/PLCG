/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21435
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(signed char)11] [(_Bool)1] [(signed char)17] = ((/* implicit */unsigned int) (~(16383)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (-(var_2)))))));
                                arr_14 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20] [(signed char)21] [(unsigned char)20] [(signed char)2] = ((/* implicit */long long int) (~(min((893693445), (((/* implicit */int) (unsigned char)197))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) (~(2147483647)));
                    arr_15 [i_0] [(unsigned char)15] = ((/* implicit */signed char) arr_6 [(short)21] [(short)21] [(short)21]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned char) (unsigned short)24844));
    var_23 = ((/* implicit */int) 1325454416U);
}
