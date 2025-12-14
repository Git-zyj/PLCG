/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241738
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_10 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)192)) % (((/* implicit */int) (short)26627)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)64701)) >= (((/* implicit */int) (short)-26627)))))));
                                var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)26627))) >= (((/* implicit */int) ((497552686) != (((/* implicit */int) (short)-26645)))))))) < (497552686)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned char) 497552686);
                                arr_19 [i_0] [i_5] [i_2 - 2] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-26639))) + (((unsigned int) (short)26627)))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                                var_13 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)26639)) > (((/* implicit */int) (_Bool)0))))) << (((/* implicit */int) ((((/* implicit */int) (short)26639)) > (((/* implicit */int) (short)26623))))))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */_Bool) (short)-26614);
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) ((var_4) - (-497552686)));
}
