/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225664
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
        var_16 ^= ((/* implicit */signed char) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_10))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)64989)))), (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_1 [6U]))))));
        arr_5 [(_Bool)1] = ((((/* implicit */_Bool) max((3267263980U), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2025657217U)))))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)(-127 - 1)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((max((((/* implicit */unsigned int) (_Bool)1)), (3110924155U))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */signed char) var_0);
                            arr_17 [i_0] [i_2] [4U] [i_0] [i_4] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) % (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)30)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * (1829606881U))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (signed char)37)) << (((var_14) - (3715884079U))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) (signed char)-33)) ? ((+(var_13))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (((var_5) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)48)))))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_12 [i_0])))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)560)) ? (3152153622U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56)))))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56)))))));
            var_19 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_24 [i_6] [i_6] = (+(4294967295U));
                arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) ((_Bool) 15872U));
            }
            var_20 ^= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2303007015U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : ((+(arr_7 [i_0] [i_7] [i_7])))))));
            var_22 ^= ((((/* implicit */_Bool) 2547946504U)) ? (3906871163U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))));
            var_23 = ((/* implicit */unsigned short) arr_9 [i_7] [(unsigned short)0] [(unsigned short)0] [i_0]);
        }
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8])) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [(signed char)12] [i_8])))))));
        arr_33 [i_8] = (+(4294967283U));
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
    }
    var_24 = ((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) ((signed char) (~(var_8))))) : (((/* implicit */int) var_1))));
}
