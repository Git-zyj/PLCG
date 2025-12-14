/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233658
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
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */unsigned int) (unsigned short)23695);
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((long long int) ((unsigned int) -959403550085081661LL)));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) (unsigned char)36)));
                        arr_11 [i_1] [(unsigned short)20] = ((/* implicit */unsigned int) ((_Bool) 8070450532247928832LL));
                        var_23 ^= ((/* implicit */short) (unsigned char)36);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((_Bool) ((long long int) 959403550085081661LL))))));
                    }
                    for (short i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned short) ((int) 1684583359380161356ULL))))));
                        var_26 = ((/* implicit */int) (_Bool)1);
                    }
                    arr_18 [i_1] [i_1] = ((/* implicit */short) (unsigned short)19545);
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) (unsigned char)255)));
                    arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (unsigned short)1016);
                }
            }
        } 
    } 
}
