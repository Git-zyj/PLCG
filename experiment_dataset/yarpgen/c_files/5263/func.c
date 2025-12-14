/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5263
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
    var_15 *= var_5;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_10 [i_0] = ((((/* implicit */_Bool) max((-9223372036854775804LL), (-4831311313157306067LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)24664), (((/* implicit */short) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */_Bool) arr_2 [i_3]);
            var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 9223372036854775780LL)) ? ((-(((/* implicit */int) arr_6 [i_3])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_10))))))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) (+((+(arr_3 [i_0])))));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_27 [i_0] [3LL] [i_5] [i_0] [i_5] [i_0] [i_5 + 1] = ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
            } 
            var_20 = -4831311313157306064LL;
            var_21 = ((/* implicit */unsigned short) (~(9223372036854775803LL)));
        }
        var_22 = max((var_13), (((/* implicit */unsigned int) arr_11 [i_0] [i_0])));
    }
    var_23 -= var_8;
}
