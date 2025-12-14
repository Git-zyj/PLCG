/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223734
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_6);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_19 += ((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) (+(((/* implicit */int) (unsigned short)65510)))))), (arr_7 [i_2] [(short)6] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned char)5] [(unsigned char)5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_12 [i_2 + 1] [i_3] [i_4 - 3])))));
                                var_20 += ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) -4255037632974437250LL)) || ((_Bool)1))) || ((!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [10LL] [i_2] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_0]))))));
                    arr_17 [i_1] = ((/* implicit */signed char) (-((-(((/* implicit */int) ((unsigned char) (signed char)86)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_22 = var_11;
                                arr_23 [i_7] [i_6] [i_5] [i_1] [15LL] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (arr_4 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                }
                arr_24 [(unsigned char)7] [i_1] = ((/* implicit */unsigned short) max((((int) (_Bool)0)), ((+(((/* implicit */int) arr_18 [i_0] [15ULL] [i_0] [i_0]))))));
                arr_25 [i_0] = ((/* implicit */unsigned char) (unsigned short)4715);
                var_23 = ((/* implicit */short) 3845335435569707179LL);
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_6);
}
