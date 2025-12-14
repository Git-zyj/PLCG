/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209632
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7547)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18))))))))) & (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 &= ((/* implicit */unsigned short) var_11);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 &= ((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_7 [i_1] [i_1])))))));
        var_22 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
        var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) var_5)))))) : (min((3U), (((/* implicit */unsigned int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */unsigned long long int) var_9)) / (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
        arr_8 [(_Bool)1] &= ((/* implicit */short) ((_Bool) (_Bool)1));
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1]))))) - (32767ULL))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned char)207)), (var_11))) > (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_1])), (var_3)))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_25 ^= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)127)) == (((/* implicit */int) arr_11 [i_3] [i_3] [7U])))) || (((/* implicit */_Bool) ((signed char) arr_11 [i_2] [4LL] [i_2])))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) var_8)))) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_2])), (arr_11 [i_2] [i_2] [i_3]))))))) <= (min((max((((/* implicit */long long int) 1329611131U)), (arr_14 [i_2] [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_2] [(unsigned char)6] [i_3])) - (((/* implicit */int) (signed char)(-127 - 1))))))))));
            }
        } 
    } 
    var_27 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (var_1)))) && (var_8)))), (var_4)));
    var_29 = ((/* implicit */unsigned char) var_6);
}
