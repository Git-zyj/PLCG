/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248551
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 31LL)))))) < (((((/* implicit */_Bool) 16383LL)) ? (-32LL) : (15LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [(short)0] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_1)))));
                            var_13 += var_8;
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */signed char) 3749451782477371570LL);
                var_14 = (+(((/* implicit */int) (short)-12901)));
            }
        } 
    } 
}
