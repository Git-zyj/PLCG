/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46879
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
    var_20 = ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_1)) ? (-878154354) : (var_10))) : (((/* implicit */int) (unsigned short)32512)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [(unsigned char)0] [(unsigned short)1] = ((/* implicit */unsigned char) arr_7 [i_4] [i_1] [i_1]);
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */short) 13709069496524190764ULL);
                                arr_14 [i_1] [(unsigned short)6] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (-(arr_5 [i_4] [i_3] [i_1] [i_1])));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */_Bool) (unsigned short)32512);
                }
            } 
        } 
    } 
    var_22 -= ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((short) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(-275396630)))))))) : (433979666905411085LL));
}
