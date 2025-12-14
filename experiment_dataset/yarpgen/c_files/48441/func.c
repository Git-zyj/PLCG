/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48441
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned short) ((signed char) var_6));
                arr_4 [i_1] = ((((((int) var_0)) + (2147483647))) >> (min((((/* implicit */int) (unsigned char)121)), (((int) 2U)))));
                var_11 *= (+(655840649342962187LL));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_12 &= ((/* implicit */short) 850451886U);
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) 11189923941370176993ULL)) && (((/* implicit */_Bool) var_4)))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_5))))));
    }
}
