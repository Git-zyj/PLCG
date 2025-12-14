/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243021
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
    var_18 = ((unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_4);
                                arr_14 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_4] [i_2]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_19 [i_6] [(unsigned char)13] [i_5] [22U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) | (3807347396U)))))));
                            var_20 = arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1];
                        }
                    } 
                } 
            }
        } 
    } 
}
