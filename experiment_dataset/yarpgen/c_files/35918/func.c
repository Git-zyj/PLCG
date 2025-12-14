/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35918
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
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32156))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)12169)) : (((/* implicit */int) var_4)))))));
    var_21 &= ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 4655824215870223833LL))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) (~(arr_2 [i_0 + 1] [i_0])));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((int) (unsigned short)41530));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_3])) ? (((/* implicit */int) (short)22618)) : (((/* implicit */int) (unsigned short)126))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)41530)) : (arr_6 [9] [i_1] [i_1] [i_1 + 3]))))));
                    }
                } 
            } 
            var_27 = ((unsigned short) arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 2]);
        }
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (unsigned short)12160)))));
                    var_29 = ((long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (~(2051609766U)));
                        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_4] [i_5 + 4])) ? (((/* implicit */unsigned long long int) arr_5 [i_6 - 3] [i_4] [i_5 - 2])) : (var_8)));
                    }
                }
            } 
        } 
        var_32 = ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? ((~(-2007149894))) : (((/* implicit */int) ((short) 2051609759U))));
        arr_17 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 784960375U));
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_33 = ((/* implicit */unsigned int) (-(((int) ((unsigned int) (signed char)49)))));
        arr_20 [i_7] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_16)) ? (var_0) : (3959175652U))));
        var_34 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_19 [i_7])))))));
        var_35 += ((/* implicit */long long int) ((int) ((long long int) (_Bool)1)));
    }
}
