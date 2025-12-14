/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223075
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
    var_13 = ((/* implicit */_Bool) (signed char)-1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [(short)14] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)95)) || (((/* implicit */_Bool) (signed char)95))))), (var_4))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)42))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_14 = var_10;
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2])))) ? (((((/* implicit */int) (unsigned char)214)) << (((((/* implicit */int) var_11)) - (182))))) : (((/* implicit */int) ((unsigned char) arr_7 [i_1 - 1] [i_1 - 1] [i_0])))));
                var_16 = ((/* implicit */short) max((((/* implicit */int) (signed char)-1)), ((~(((/* implicit */int) (short)-30224))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */int) (signed char)95))))))) ? (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (short)30243)) - (30232))))) : (((int) var_12)))))));
            }
            arr_9 [i_0] [(short)1] = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_2 [(unsigned short)10])), ((+(((/* implicit */int) (signed char)-43))))))));
            var_18 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */int) arr_4 [i_1 - 1])), (arr_7 [i_1 - 1] [(unsigned short)21] [i_1 + 1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (short)32763)))));
            arr_13 [(_Bool)1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) min((arr_10 [i_0] [i_0] [i_3]), (var_12))))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) arr_2 [i_4]);
        var_19 = ((((/* implicit */int) (short)-32759)) / (((/* implicit */int) (signed char)-122)));
        var_20 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) || (((/* implicit */_Bool) var_10))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) && (((/* implicit */_Bool) arr_10 [(unsigned char)14] [i_4] [i_4])))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */int) arr_0 [i_5])), (max((((/* implicit */int) (unsigned char)4)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_4])))))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_5))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (signed char)12)))));
        arr_26 [(short)20] [i_7] = ((/* implicit */_Bool) arr_25 [i_7]);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((((~(((/* implicit */int) arr_10 [(short)23] [i_7] [i_7])))) + (2147483647))) >> (((/* implicit */int) ((signed char) (short)30224))))))));
    }
    var_25 = ((/* implicit */signed char) min((var_25), (var_4)));
}
