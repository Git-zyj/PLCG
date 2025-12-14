/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243390
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
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) (signed char)-49)))) : ((((!(((/* implicit */_Bool) var_6)))) ? ((+(((/* implicit */int) (signed char)48)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6337023665907781887LL)))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+((+(((/* implicit */int) var_13)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((arr_1 [i_0]), ((unsigned char)238)))))))));
                                var_22 = ((/* implicit */unsigned short) arr_4 [(unsigned short)4]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), ((((~((~(((/* implicit */int) (short)15872)))))) & (((-1) & (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)15812))))), ((unsigned short)3971)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3971)))))));
                    arr_12 [i_0] [i_2] = (unsigned char)238;
                    var_25 ^= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
