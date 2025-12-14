/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245283
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) (unsigned short)21522)) ? ((-(((/* implicit */int) (unsigned short)8570)))) : (((/* implicit */int) (unsigned short)48928)))) : (((/* implicit */int) (unsigned short)5311))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)59076)))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)19621))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41761))))) ? ((~(((/* implicit */int) (unsigned short)34454)))) : (((((/* implicit */_Bool) (unsigned short)42737)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1))))));
                            var_15 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)57845))))));
                            var_16 ^= ((unsigned short) (+(((/* implicit */int) (unsigned short)15))));
                        }
                    } 
                } 
            }
            arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41773)) ? (((/* implicit */int) (unsigned short)34454)) : (((/* implicit */int) (unsigned short)43892))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)892)))) : (((/* implicit */int) ((unsigned short) (unsigned short)7)))));
            var_17 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)41761))));
            arr_16 [i_0] [i_1] = (unsigned short)39686;
        }
        var_18 = ((unsigned short) (~(((/* implicit */int) (unsigned short)20))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)2))))))) ? ((~((-(((/* implicit */int) (unsigned short)34550)))))) : ((~(((((/* implicit */_Bool) (unsigned short)45029)) ? (((/* implicit */int) (unsigned short)18090)) : (((/* implicit */int) (unsigned short)0))))))));
        arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18110))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)864)) ? (((/* implicit */int) (unsigned short)64644)) : (((/* implicit */int) (unsigned short)3267)))))))) : ((-((+(((/* implicit */int) (unsigned short)52731))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)39715))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [i_5] [i_6 + 3] [i_5] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)39705))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)40316)))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)8191)));
            arr_34 [(unsigned short)9] [i_9 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
            arr_35 [i_8] [(unsigned short)5] [i_8] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)25))))));
        }
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)15)))));
        var_22 = (unsigned short)23051;
        var_23 = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)27764)) ? (((/* implicit */int) (unsigned short)23781)) : (((/* implicit */int) (unsigned short)56913))));
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (unsigned short)65535)) : ((-(((/* implicit */int) ((unsigned short) (unsigned short)39715)))))));
    }
    var_25 = ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18398)))))));
}
