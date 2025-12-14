/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217655
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
    var_19 = ((/* implicit */unsigned char) (~(31)));
    var_20 = ((/* implicit */short) max((var_10), ((~((~(var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 656920446U)) ? (max((arr_5 [i_4 - 1]), (arr_5 [i_4 + 2]))) : (((/* implicit */long long int) arr_13 [i_3] [0] [i_4 + 1] [i_4 - 1] [i_4] [i_4]))));
                                arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (max((((/* implicit */unsigned int) (short)21451)), (arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [(unsigned char)8] [i_4 + 2])))));
                                var_22 *= (signed char)-90;
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)17]))) : (arr_12 [12ULL] [12ULL] [i_1] [12ULL] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_2] [i_0] [i_0] [i_0]))))))));
                    arr_17 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-40)), (arr_2 [i_0])))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-32)))))));
                    arr_18 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (signed char)-38);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (short)-22546)) > (max((((/* implicit */int) (signed char)-79)), ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)10719))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_18);
}
