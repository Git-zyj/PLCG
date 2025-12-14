/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216898
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(11089316524370190178ULL)));
        var_12 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_13 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) (short)32765)))) && ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (4345947214822625287ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31729))) : (var_6)));
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) 14100796858886926329ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) (short)-31719)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((unsigned long long int) arr_1 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31726)))))) ? (((((((/* implicit */int) arr_2 [i_1] [i_1])) % (((/* implicit */int) var_10)))) >> (((((arr_5 [i_1]) | (((/* implicit */int) var_2)))) - (1665771449))))) : (((((/* implicit */_Bool) (short)31723)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31708))))) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_16 = (~(((/* implicit */int) arr_0 [(unsigned short)16] [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_1 [i_2]))) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : ((-(((/* implicit */int) max((arr_10 [i_3] [i_3] [i_2]), (arr_2 [i_2] [i_2]))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17651493560745338119ULL)) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_3])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned short)48127))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned short)9])) > (((/* implicit */int) arr_11 [i_2] [i_4]))))))));
                arr_17 [i_2] = ((/* implicit */signed char) (+(min((4345947214822625287ULL), (((/* implicit */unsigned long long int) (unsigned short)52166))))));
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_18 -= ((/* implicit */_Bool) arr_10 [i_2] [(signed char)13] [i_5]);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((arr_24 [i_2] [i_3] [i_2]) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_3] [i_3]))))) : ((~(var_3)))));
                            var_20 += ((((((/* implicit */_Bool) arr_12 [i_7] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_6] [i_3] [i_3] [i_6]))))) : (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [15] [i_5]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_3] [i_5] [i_6] [i_7]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_19 [i_2] [i_3] [i_5] [i_5])), ((short)31709)))) ? (((/* implicit */int) min(((short)-31717), (arr_2 [i_2] [i_3])))) : (((/* implicit */int) (short)-31726))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)31717)), (arr_18 [i_2] [i_3] [i_5]))))));
            }
        }
        var_22 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)48129))))))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_23 |= ((/* implicit */_Bool) (unsigned short)48118);
                var_24 = ((/* implicit */unsigned long long int) arr_1 [i_8]);
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 2668418669U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17411), (((/* implicit */unsigned short) (_Bool)1))))))))), (var_6)));
}
