/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240122
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
    var_11 = ((/* implicit */_Bool) ((max((-6688220854942577003LL), (((/* implicit */long long int) (unsigned short)29994)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-6688220854942576997LL))))))))));
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (-6688220854942576997LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((-1454733368), (-596009538)));
                            arr_10 [i_3] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */int) (unsigned short)29994)), (596009537))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29994))))) ? (((((/* implicit */_Bool) (unsigned short)53622)) ? (((/* implicit */int) arr_6 [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))) : (arr_7 [i_0]))));
            }
        } 
    } 
}
