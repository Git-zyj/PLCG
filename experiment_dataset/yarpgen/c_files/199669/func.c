/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199669
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
    var_13 = ((/* implicit */unsigned short) ((_Bool) var_0));
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) var_6))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [8] [i_0] [i_0] [i_3] [2] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned char)151)) - (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2])))));
                            arr_12 [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [6] [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_0] = min((4294967280LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1023)) == (((/* implicit */int) arr_2 [i_2 + 2] [i_2] [i_2 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
