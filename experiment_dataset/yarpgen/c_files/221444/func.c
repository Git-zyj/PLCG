/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221444
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (~(-5450305694322445634LL)));
        var_17 -= ((/* implicit */short) (+((+(arr_1 [i_0 + 3])))));
    }
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) (+(2054151015U)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))));
                var_21 = ((/* implicit */unsigned int) (+(arr_9 [i_1] [i_2 - 1] [i_3])));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [(unsigned short)8])))))));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) (+(2066504498U)));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        arr_15 [i_1] = (+(5450305694322445608LL));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            arr_18 [i_1] [i_5] [i_1] = ((/* implicit */short) (+(var_4)));
            var_26 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [6] [4U] [i_6] |= ((/* implicit */short) (+(((/* implicit */int) arr_3 [(_Bool)1]))));
            arr_22 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
        }
    }
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_3))))));
        var_28 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_23 [i_7 - 1] [i_7 + 1]))))));
    }
}
