/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217454
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_0 [i_1] [i_0])))), (((((-7553136854764452014LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18493))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-4)), (arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3)) < (6807181366294557644ULL))))))));
                arr_7 [i_1 - 2] [i_0] [i_0] = (+(((/* implicit */int) arr_3 [i_0])));
            }
        } 
    } 
    var_10 = ((/* implicit */signed char) var_7);
}
