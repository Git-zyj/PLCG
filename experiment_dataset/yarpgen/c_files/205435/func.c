/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205435
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((_Bool) var_12))) : ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (short)-15982)) : (min((((/* implicit */int) var_3)), (arr_2 [i_0])))));
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62801))) > (arr_3 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_21 = var_12;
                    var_22 ^= ((/* implicit */_Bool) var_1);
                    var_23 = ((/* implicit */int) min((var_23), (-1159991380)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */short) (-(var_15)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38156))) : ((~(arr_6 [i_3])))))))))));
                var_26 *= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-6772))) == (((((/* implicit */_Bool) var_11)) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-22844))))) : (arr_6 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
}
