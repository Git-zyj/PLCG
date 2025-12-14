/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192735
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (2267869108484387093ULL))))));
                arr_6 [i_1] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((long long int) (-(var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_0) || (((/* implicit */_Bool) 9691313835896836392ULL)))) && (((/* implicit */_Bool) arr_11 [i_2] [i_2] [5])))))) : (((var_5) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32992)) ? (((/* implicit */long long int) 1087091567)) : (var_8))))))))));
                    arr_17 [2U] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (+(arr_14 [i_2] [i_2] [i_2] [i_2]))))) == ((~(((((/* implicit */int) (short)24262)) / (((/* implicit */int) (unsigned short)65519))))))));
                }
            } 
        } 
    } 
}
