/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206160
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 17638471717008918606ULL))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [14U] [i_0] [i_1]))))) ? (((unsigned long long int) -2614977185547703853LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 10768802702145599099ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_8)))))))));
                arr_5 [(unsigned short)3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_3), (arr_1 [15ULL])))) ? (((/* implicit */int) ((_Bool) 17926780985635047886ULL))) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) ((signed char) 2614977185547703836LL))))));
                arr_6 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-2147483638) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (-7070605996489147619LL))))));
            }
        } 
    } 
}
