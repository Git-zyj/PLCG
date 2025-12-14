/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243079
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)8305))))), ((unsigned short)48443)));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] &= ((/* implicit */unsigned short) ((_Bool) max((((unsigned int) arr_6 [i_0] [i_1] [i_3] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [10U] [i_1 - 2] [i_3])) ? (var_11) : (((/* implicit */int) arr_8 [4] [4] [i_2] [4]))))))));
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_3 - 4] [i_0])) : (((/* implicit */int) (short)1023))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4])))))), (((/* implicit */int) ((max((1285980351), (-263006017))) < (485571547))))));
                                arr_17 [i_4] = ((/* implicit */unsigned int) -5961055700623299847LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_0] [i_0] [(unsigned short)0] = ((/* implicit */unsigned char) arr_18 [i_0]);
                                arr_24 [i_0] [4] [i_2] [i_0] [i_0] = ((/* implicit */int) var_13);
                                arr_25 [i_0] [i_1 - 3] [i_2] [i_5] [6] = ((/* implicit */unsigned char) 824260864);
                                arr_26 [18] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_20 [i_0] [i_1] [i_0] [1] [3U]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_2] [i_5] [i_2] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_27 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned int) arr_1 [14]);
                    arr_28 [i_0] [i_0] [(unsigned char)12] [i_0] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_6 [i_0] [16] [i_2] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [8U] [i_2] [i_2])) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */int) (unsigned short)54137)), (-824260849))) : (((int) var_3)))), (max((-485571563), (((/* implicit */int) (short)20439))))));
                    arr_29 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) arr_21 [i_0]))) - (((/* implicit */int) var_14)))) > (((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [i_1 + 1] [i_1 + 2] [i_2] [i_0] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(824260864)))), ((+(1774882103001682706LL)))));
}
