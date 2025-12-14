/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225528
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_5);
        var_15 = ((/* implicit */_Bool) ((short) var_13));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (min((var_11), (((/* implicit */int) (unsigned char)31))))))) || (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = (unsigned char)3;
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned char) var_2);
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) arr_11 [(unsigned char)3])) : (var_11)));
                        arr_15 [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_2] [i_4])) != (((/* implicit */int) arr_13 [i_1] [i_2])))) ? (((/* implicit */int) arr_10 [i_3 - 2])) : ((~(((/* implicit */int) arr_10 [i_3]))))));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */short) ((unsigned int) var_11));
    }
    var_20 = ((/* implicit */unsigned short) var_6);
}
