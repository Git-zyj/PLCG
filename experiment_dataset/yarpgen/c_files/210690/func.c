/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210690
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((((/* implicit */short) var_6)), (var_14)))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_8))))))) < (var_5)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_1)) * (var_11))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)8)))))) : ((~(((/* implicit */int) (unsigned char)244))))));
    var_19 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1 - 1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) -71223575);
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)242)))))));
                                var_21 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)6))))) : (min((((/* implicit */unsigned int) var_1)), (arr_2 [i_0] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2009686281U)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_16)))) : ((((-(((/* implicit */int) (short)-1)))) * (((/* implicit */int) (unsigned char)237))))));
                                var_23 = ((/* implicit */signed char) (unsigned char)9);
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)24181))))), (((short) (unsigned char)15)))), (((/* implicit */short) max(((_Bool)1), ((_Bool)1))))));
                                arr_20 [i_1] = arr_16 [i_6] [i_1] [i_1] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
