/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206418
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13719)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1)))) : (((((-571553184) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
    var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) arr_0 [(unsigned short)6]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [(signed char)19] [i_3] [i_0] [9U] = ((/* implicit */short) 571553184);
                                arr_12 [i_0] [i_1] [8ULL] [i_1] &= ((/* implicit */short) max((((_Bool) 1423370468)), ((!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) arr_0 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1792489383))))) - (((/* implicit */int) min((var_6), (((/* implicit */short) var_2)))))))) <= (max((((/* implicit */unsigned int) (unsigned char)207)), (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))))));
}
