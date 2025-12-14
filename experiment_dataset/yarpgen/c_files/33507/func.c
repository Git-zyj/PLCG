/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33507
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
    var_10 = ((/* implicit */_Bool) ((signed char) var_4));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [(_Bool)1] [9LL] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) arr_11 [(short)8] [i_1] [i_2]);
                                var_11 &= ((/* implicit */_Bool) arr_3 [i_1]);
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */long long int) var_3);
                var_13 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((_Bool) (short)30720))), (((var_5) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [(signed char)1] [i_0] [i_1] [8LL] [i_1] [i_0])))))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) max((arr_9 [i_0] [(short)12] [i_1] [i_0] [i_1]), (arr_9 [i_0] [(unsigned char)0] [i_1] [i_1] [(_Bool)1]))))))));
            }
        } 
    } 
}
