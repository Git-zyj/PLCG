/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36387
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) > (2443783765U)));
                var_18 *= arr_3 [i_1 + 1] [i_1 + 1];
                arr_6 [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) (unsigned char)247);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2020313544U))));
                var_19 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)252))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) <= (((/* implicit */int) (unsigned short)7337)))))));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)17)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned short) 2274653746U);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned short)23982))) >> (((((3289223862U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)247)))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_15 [(unsigned short)9] = ((/* implicit */unsigned short) max(((unsigned char)254), ((unsigned char)252)));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((413742894U), (((/* implicit */unsigned int) (unsigned short)31824))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)154))))) : (((/* implicit */int) (unsigned char)255))));
    }
    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((2282513261U) < (2805131233U))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)250), ((unsigned char)9)))) > (((/* implicit */int) max(((unsigned char)80), ((unsigned char)255)))))))));
        var_26 = min(((unsigned char)115), ((unsigned char)5));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)1] [i_4])) || (((/* implicit */_Bool) arr_3 [i_4 - 1] [i_4 - 1]))))), ((~(((/* implicit */int) arr_13 [i_4 - 1])))))))));
    }
    var_28 = ((/* implicit */unsigned int) var_3);
}
