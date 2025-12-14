/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239398
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) var_3))));
        var_10 = ((/* implicit */_Bool) 15816454805805824981ULL);
    }
    for (unsigned short i_1 = 4; i_1 < 10; i_1 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) 8240537488442955374LL)) || (((/* implicit */_Bool) (unsigned short)32768)))))))));
        var_12 = ((/* implicit */short) ((((min((7469506709557884751LL), (((/* implicit */long long int) (short)6687)))) * (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (-5866973617670047109LL))))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) var_8)))))))))));
        var_14 = (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_6)))))));
    }
    for (short i_2 = 2; i_2 < 24; i_2 += 1) 
    {
        arr_9 [i_2 - 1] [i_2] = ((/* implicit */short) (unsigned short)32766);
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (var_9)))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_14 [(signed char)21] [i_3] = ((/* implicit */unsigned short) var_4);
        var_15 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) (short)16383))))));
        var_16 = (!((!(((/* implicit */_Bool) var_5)))));
        var_17 = ((/* implicit */_Bool) var_8);
        arr_15 [i_3] = ((/* implicit */short) var_3);
    }
    var_18 = ((/* implicit */int) var_1);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)32769))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)0)))))) : ((-((+(((/* implicit */int) (_Bool)1))))))));
}
