/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38308
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
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)38)))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-29))))))), (((/* implicit */int) min((var_4), (min((var_5), (var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 + 2]);
                                var_20 = ((((/* implicit */_Bool) min((arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2]), (((/* implicit */unsigned int) min((var_15), (((/* implicit */short) arr_2 [i_4] [1])))))))) ? (arr_6 [i_1] [i_1] [i_2]) : (((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_3] [i_3])) >= (18446744073709551615ULL)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1101341202))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */short) (unsigned short)49942);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (((-(((/* implicit */int) arr_5 [i_0] [i_0])))) != (arr_14 [i_5] [i_1] [i_1] [13U])))), (((int) (!(((/* implicit */_Bool) (unsigned char)215)))))));
                                var_22 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_7);
}
