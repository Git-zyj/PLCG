/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46415
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
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 = ((/* implicit */unsigned long long int) ((((var_11) >> (((/* implicit */int) var_8)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((13778877035882466471ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 4667867037827085144ULL)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) >> (((arr_0 [i_0] [i_1]) - (4270377002903006687ULL))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)74)) << (((15756612325651048516ULL) - (15756612325651048492ULL)))))), ((~(13778877035882466483ULL))))) - (4667867037827085106ULL)))));
                var_17 = ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned short)3))));
                                var_19 *= var_4;
                                arr_15 [18ULL] [i_4] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)196)) > (((/* implicit */int) (unsigned short)65534))))), (arr_6 [i_2]))));
                            }
                            var_21 = var_8;
                            var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((unsigned short) var_11))), (max((((/* implicit */unsigned long long int) var_10)), (var_11))))) + ((~(arr_0 [i_0] [i_3])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max(((((((-(((/* implicit */int) (unsigned short)2)))) + (2147483647))) << (((((/* implicit */int) min((var_7), ((unsigned short)65533)))) - (32392))))), (((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
