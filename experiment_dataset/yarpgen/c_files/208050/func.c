/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208050
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
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 6; i_1 += 2) 
        {
            {
                arr_4 [(signed char)2] [(signed char)2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_1 - 3]);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (((+((-(var_5))))) & (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1 + 2])))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19399)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36527))))) ? (((/* implicit */int) ((unsigned short) (short)12951))) : (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2]))))) : ((-(((/* implicit */int) var_14))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 4])) ? (((/* implicit */int) min((((/* implicit */short) arr_5 [(_Bool)0] [(unsigned short)8] [i_2] [(_Bool)0])), (max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (var_10)))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [4U] [i_1 - 1] [4U])))))))));
                    arr_9 [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned int) var_14);
                }
                for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    var_21 = ((/* implicit */signed char) arr_11 [i_3]);
                    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 3] [i_3 + 1] [i_3 + 2])) + (((/* implicit */int) var_14))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_3 + 1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_3 - 3]))))) : (((/* implicit */int) var_13))));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                }
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_15 [7U] [i_1] = ((/* implicit */unsigned int) max(((((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) / (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 4] [i_1 + 3])))), ((~(((/* implicit */int) (unsigned short)65535))))));
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((unsigned short) var_16));
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_14 [i_1 + 2]))))));
                }
                arr_17 [i_0] [6] [i_0] = ((((((/* implicit */int) arr_11 [4])) + (2147483647))) << (((max((((/* implicit */unsigned int) arr_10 [i_0] [4U] [i_0] [4U])), (arr_0 [i_0] [i_0]))) - (2000273691U))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_10))))));
}
