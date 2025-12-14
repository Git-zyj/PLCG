/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237995
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
    var_14 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned short) var_0))))), (((/* implicit */int) max((var_11), ((unsigned short)52538))))));
    var_15 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_16 |= ((/* implicit */short) -1058268179999737101LL);
        var_17 -= ((/* implicit */short) var_11);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) + (((long long int) var_1))));
        arr_4 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
    }
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_2] [i_2])) / (((/* implicit */int) (unsigned short)55550)))) * (((((/* implicit */int) (unsigned char)37)) / (((/* implicit */int) (unsigned short)58529))))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_8 [(short)6]))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 6; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_12), (arr_6 [i_2 + 1]))))));
                    var_21 += ((/* implicit */unsigned char) ((unsigned short) max((min(((unsigned short)7006), (((/* implicit */unsigned short) arr_1 [i_2] [(short)4])))), (min((((/* implicit */unsigned short) arr_7 [(short)7])), (var_11))))));
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)55459), (((/* implicit */unsigned short) var_5))))) <= (((((/* implicit */int) var_13)) + (((/* implicit */int) var_6)))))) ? (((((/* implicit */int) (unsigned short)36642)) + (((/* implicit */int) (short)32751)))) : (((/* implicit */int) var_2))));
    }
    var_24 *= var_8;
}
