/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204431
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) >> (((-4527820908423398603LL) + (4527820908423398613LL))))), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_9))) || (((/* implicit */_Bool) ((long long int) (unsigned char)0))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-14333))))) <= (((unsigned int) (unsigned char)0))))) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (1939191928)))));
        var_16 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)161)))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) % (1646539714U))) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (signed char)113))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) min((-2042357607), (((/* implicit */int) (signed char)83)))))))) << (((/* implicit */int) (!(arr_10 [i_3 - 1] [i_0 + 1]))))));
                        var_18 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((arr_8 [i_0] [i_1] [i_0]) - (2016258825U)))))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0])) << (((((/* implicit */int) var_14)) - (93))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0 + 1] = ((/* implicit */int) var_14);
    }
    var_19 = ((/* implicit */unsigned short) var_6);
    var_20 = ((/* implicit */short) ((_Bool) (~(((((((/* implicit */int) (short)-14333)) + (2147483647))) >> (17ULL))))));
}
