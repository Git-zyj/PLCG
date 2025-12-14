/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220458
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
    var_12 |= min((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) (unsigned char)0))))), (((var_2) + (max((((/* implicit */int) (unsigned short)20726)), (2147483633))))));
    var_13 = ((-1662582321) & (var_7));
    var_14 = ((/* implicit */int) 4294967290U);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = (unsigned char)3;
                    var_16 = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_2 - 1])) && (((/* implicit */_Bool) (unsigned char)28))))), (arr_8 [i_1] [(unsigned char)21] [i_2])));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) 1698915279);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((unsigned char) ((unsigned int) (unsigned char)2));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -669099472)) ? (1291735882U) : (1547272754U)))) ? (((((/* implicit */_Bool) 3919590223U)) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_2 - 2] [i_1 - 1])) : (((/* implicit */int) (unsigned char)4)))) : (((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_2 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_2 + 1] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_2 - 4] [i_1 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [(unsigned char)17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) - (((((/* implicit */_Bool) (unsigned short)8603)) ? (((/* implicit */int) arr_13 [i_1] [i_2] [(unsigned char)1])) : (((/* implicit */int) (unsigned char)112))))))) != (((min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)255)))) & (((/* implicit */unsigned int) ((1022685215) % (((/* implicit */int) (unsigned char)80)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
