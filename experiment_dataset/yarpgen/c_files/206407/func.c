/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206407
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
    var_12 = ((/* implicit */int) ((((int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) var_2))))) >= (((((int) 4006979671U)) - (((/* implicit */int) (!(((/* implicit */_Bool) 287987598U)))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 287987625U)) ? (6764309417096545096LL) : (-19LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))))))))) * (var_9)));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0 + 1]))) ? (((/* implicit */int) ((unsigned char) ((_Bool) -2770750559334026124LL)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59828))))) & (((((/* implicit */int) (short)22660)) | (((/* implicit */int) var_2))))))));
        arr_2 [i_0] [(short)6] |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2])))) : ((~(4006979668U))));
    }
    var_16 -= ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned char) (+(18LL)));
                    var_17 = ((/* implicit */unsigned char) ((unsigned short) ((((arr_3 [i_2]) << (((((/* implicit */int) (unsigned short)65535)) - (65515))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))))));
                    var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 287987610U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
}
