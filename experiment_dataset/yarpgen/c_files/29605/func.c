/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29605
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) 0U)) : (var_0)))));
                        var_14 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                    }
                    for (unsigned short i_4 = 3; i_4 < 24; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_4] [i_2] [i_4] = (unsigned char)0;
                        arr_16 [i_0 + 3] [i_1] [i_0 + 3] [(_Bool)1] [i_4 + 1] &= ((/* implicit */_Bool) var_8);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2615090582832399106LL) > (((/* implicit */long long int) 2400396628U)))))) : ((-(1572261542464074673ULL)))));
                        arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1527388623)) || (((/* implicit */_Bool) 462533408))));
                        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_12 [i_5 + 1] [i_0 + 4] [(_Bool)1] [16U])))) || ((!(((/* implicit */_Bool) arr_12 [i_5 + 2] [i_0 - 1] [14ULL] [i_0 - 1]))))));
                    }
                    var_17 &= ((unsigned long long int) (!(((/* implicit */_Bool) (-(13551558893331394221ULL))))));
                }
            } 
        } 
    } 
}
