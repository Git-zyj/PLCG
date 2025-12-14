/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231083
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
    var_10 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1)), (4183407309242564604LL)))) || (((/* implicit */_Bool) ((unsigned short) var_1)))))) : (((/* implicit */int) (signed char)48)));
    var_11 -= ((/* implicit */long long int) ((unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_12 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)1)))));
        var_13 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-28473))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
        arr_9 [i_2] = ((/* implicit */_Bool) 573003459768211550LL);
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(-1037860650))))));
            var_15 += ((/* implicit */long long int) ((unsigned char) -1154009084));
            arr_14 [i_3] [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) && (((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)))))));
        }
        arr_15 [i_3] [i_3] = ((arr_13 [i_3]) & (((/* implicit */int) ((signed char) -1))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (264823960) : (arr_13 [i_3])))) ? ((~(arr_13 [4]))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_11 [i_3] [i_3])))))), (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_13 [i_3]))) > (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))))))));
    }
    var_17 = ((/* implicit */signed char) -1037860657);
}
