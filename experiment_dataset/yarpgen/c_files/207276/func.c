/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207276
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) -2190691891292630555LL);
                    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (2190691891292630555LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                    arr_7 [i_0 - 1] [i_0] [i_0 - 1] = arr_5 [i_0] [i_1] [i_0];
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_0]);
                        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                        var_15 = ((/* implicit */unsigned int) max((((arr_9 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7354515703502192735LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)11] [i_0] [i_0] [i_0])) / (((((/* implicit */_Bool) -7354515703502192726LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [15LL] [i_3] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) arr_6 [i_1 + 2] [i_1 + 2]);
                        var_17 += ((/* implicit */short) arr_4 [i_0 - 1] [i_1 + 2] [i_3] [i_5 + 2]);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((int) arr_8 [i_0 - 1] [i_3] [i_6]));
                            var_19 = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [i_5 + 1] [i_1 - 3] [i_0] [i_0]));
                            var_20 = ((/* implicit */long long int) arr_16 [i_0] [i_1 - 3] [i_3] [i_5] [(unsigned short)8]);
                        }
                    }
                    arr_17 [i_0] = ((/* implicit */int) (-(-2190691891292630555LL)));
                }
                for (unsigned int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    var_21 |= ((/* implicit */unsigned short) var_9);
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 19; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_8]);
                        var_23 = ((/* implicit */long long int) 12457336321251232610ULL);
                    }
                }
                var_24 |= ((/* implicit */unsigned char) var_5);
                var_25 = arr_18 [i_0 - 1] [i_0 - 1];
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_3);
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) + (((((/* implicit */_Bool) (short)0)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    var_28 = ((/* implicit */long long int) var_1);
}
