/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38480
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
    var_15 = ((/* implicit */int) (_Bool)1);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max(((short)8309), (((/* implicit */short) var_11)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_9 [i_0] [i_3]);
                        var_18 &= ((/* implicit */int) arr_6 [(unsigned char)18] [i_1]);
                    }
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_0])))) && (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || ((_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_4] = ((/* implicit */short) arr_12 [i_4]);
                var_19 *= ((/* implicit */short) -2);
                var_20 = ((/* implicit */int) arr_11 [i_4] [(unsigned short)5]);
                var_21 = ((/* implicit */unsigned short) arr_11 [i_4] [i_5]);
            }
        } 
    } 
}
