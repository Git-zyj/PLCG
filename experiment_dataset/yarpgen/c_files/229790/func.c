/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229790
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((max(((-(var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -599528315)), (5255124612273011988LL)))))) / (max((((unsigned long long int) arr_3 [i_0])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)6421))))))))))));
                var_12 -= ((/* implicit */unsigned short) (-(min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_2])))))) << (((min((max((-944772917), (((/* implicit */int) (short)9783)))), (((/* implicit */int) (signed char)-65)))) + (82)))));
        arr_9 [i_2] = arr_7 [i_2];
    }
}
