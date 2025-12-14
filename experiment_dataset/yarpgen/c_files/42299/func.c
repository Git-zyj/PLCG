/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42299
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
    var_11 = ((/* implicit */signed char) var_0);
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((max((((/* implicit */short) var_0)), (var_1))), (((/* implicit */short) min((var_10), (var_10)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((max((((/* implicit */short) var_10)), (var_1))), (((/* implicit */short) arr_10 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4])))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) 4146073382U))), (((((/* implicit */_Bool) arr_11 [i_1 - 3] [i_1 + 2] [i_1 - 2])) ? (arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 3]))))))));
                                arr_12 [7ULL] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)46))))), (7379441162459501836ULL)))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)137);
                                var_15 *= ((/* implicit */short) ((_Bool) min((arr_8 [i_1 + 2] [i_4] [i_4] [i_0 + 2]), (var_1))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))) : ((+(((/* implicit */int) arr_8 [i_0 - 4] [0LL] [i_0] [i_1 - 3]))))));
            }
        } 
    } 
}
