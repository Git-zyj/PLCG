/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19144
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
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((short) (unsigned char)255);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((max((((/* implicit */long long int) var_5)), (((long long int) var_10)))), (((/* implicit */long long int) (short)32419)))))));
            var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)13)) ? (5295182990318235467LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) ((short) (short)-32420)))));
        }
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_7))));
        var_15 = ((/* implicit */unsigned int) var_6);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_16 = arr_8 [i_2];
        var_17 = ((/* implicit */_Bool) ((int) arr_5 [i_2 - 1] [i_2] [i_2 - 1]));
    }
    for (short i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        var_18 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */short) (unsigned char)255)))))));
        var_19 = ((/* implicit */int) var_3);
        var_20 += ((/* implicit */unsigned char) ((_Bool) max((max(((unsigned short)14095), (((/* implicit */unsigned short) (signed char)13)))), (max(((unsigned short)65535), (((/* implicit */unsigned short) var_7)))))));
    }
    var_21 = (!(((/* implicit */_Bool) (signed char)-93)));
    var_22 -= ((/* implicit */unsigned int) (short)32420);
}
