/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24703
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [(unsigned char)11] [i_0] [i_0 - 2] [i_0 - 2]))))) < (((long long int) ((((/* implicit */int) (unsigned char)55)) == (((/* implicit */int) (unsigned short)61883)))))));
                                var_11 += ((/* implicit */unsigned short) max((((long long int) var_7)), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_0]))) / (((/* implicit */int) ((signed char) (unsigned char)201))))))));
                                var_12 += ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1])) - (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])))), ((~(((/* implicit */int) (unsigned short)33835))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)241))));
                var_14 |= ((/* implicit */unsigned char) (unsigned short)31693);
                var_15 &= ((/* implicit */unsigned char) (unsigned short)6133);
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_9);
}
