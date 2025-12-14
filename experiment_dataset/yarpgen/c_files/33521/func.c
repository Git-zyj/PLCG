/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33521
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4523836844832021615ULL)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (unsigned short)24215)) ? (208127206) : (((/* implicit */int) (unsigned short)15144))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (649883208) : (var_11)))))) ? (((/* implicit */unsigned long long int) var_11)) : (var_17)));
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)63))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)11466))));
        var_22 |= ((/* implicit */signed char) max((((/* implicit */long long int) var_11)), (((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-10976)) : (((/* implicit */int) (short)-32763)))))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)45)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_24 = ((unsigned short) ((int) 4612774777839464475ULL));
                    var_25 = ((/* implicit */long long int) ((max((((/* implicit */int) (signed char)(-127 - 1))), (arr_5 [i_0] [i_1] [i_0]))) < (((/* implicit */int) var_3))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((int) (unsigned short)65471))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned short)60651)))));
        var_26 = ((/* implicit */int) (unsigned short)11132);
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)126))));
    }
}
