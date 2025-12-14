/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33008
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)19347)) : (((/* implicit */int) (unsigned short)18177))))) : (((int) ((_Bool) var_12))))))));
    var_15 -= ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                                arr_14 [i_0] [i_0] [i_0] [i_2 + 1] [(_Bool)1] [i_3 - 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) (_Bool)1)))) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) ((_Bool) var_9))) : (var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) ((unsigned short) var_11))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)40996))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_8 [i_0 - 1] [i_1 - 1])));
                }
            } 
        } 
    } 
}
