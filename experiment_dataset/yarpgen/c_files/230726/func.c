/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230726
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
    var_19 = min((var_15), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)20444)) : (((/* implicit */int) (short)-19753)))));
    var_20 ^= ((/* implicit */short) (((+(((((/* implicit */_Bool) var_14)) ? (74153902) : (var_0))))) ^ (((int) var_17))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] = min((((/* implicit */int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)-18379)))) < ((+(var_0)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((arr_0 [i_1] [i_0]), (arr_1 [i_0])))) : (var_11))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) (short)-20462)) ? (-143686385) : (((((/* implicit */_Bool) 143686384)) ? (((/* implicit */int) (short)20454)) : (((/* implicit */int) ((((/* implicit */int) (short)-19758)) <= (arr_7 [i_0 - 1])))))));
                            var_22 ^= ((/* implicit */short) ((((min((arr_6 [i_0 + 1] [i_3 + 2] [i_2 + 2]), (var_15))) + (2147483647))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)9679)) || (((/* implicit */_Bool) var_10))))) : (max((((/* implicit */int) var_14)), (var_0)))))));
                            var_23 = min(((+(((441651113) + (-1989004150))))), (var_7));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((~(((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) ((short) var_18))) ? (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]), (-40057794))) : (min((arr_6 [i_0 + 2] [i_1 + 2] [i_1 + 2]), (((/* implicit */int) (short)32639))))))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_25 = -1989004150;
                            var_26 = max((max((((-1344568611) ^ (var_15))), (-628430573))), (-1344568601));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_12)) >= (-1344568613)))), (max((var_12), ((short)-17236)))))) ? (max((((((/* implicit */int) var_14)) | (((/* implicit */int) var_16)))), (((int) var_5)))) : (((/* implicit */int) min(((short)14043), ((short)15199)))));
}
