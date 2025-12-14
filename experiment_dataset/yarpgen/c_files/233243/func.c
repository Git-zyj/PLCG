/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233243
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (signed char)-127)) * (((((((/* implicit */int) var_4)) * (((/* implicit */int) var_3)))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-59)))))))))));
                            var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_4 [i_0])), (var_11)))))) || ((((-(((/* implicit */int) var_6)))) == (((/* implicit */int) ((var_10) < (((/* implicit */long long int) var_13)))))))));
                            var_22 -= ((/* implicit */unsigned short) (_Bool)1);
                            arr_13 [i_3] [i_1] [i_2] [(unsigned short)15] [i_1] [i_0] = ((/* implicit */short) (!(((_Bool) max((-6526320320970456729LL), (-6879296376589311714LL))))));
                            var_23 -= ((/* implicit */unsigned char) (signed char)-18);
                        }
                    } 
                } 
                var_24 *= max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1138869797)) <= (14165303495647723509ULL)))), (max((((/* implicit */unsigned int) ((int) var_9))), (17529477U))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((-(1306330285U))) == (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)248)), (arr_1 [i_0] [i_1]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)3]))) % (arr_6 [i_1]))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (signed char)21);
}
