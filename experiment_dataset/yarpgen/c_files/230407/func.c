/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230407
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)127)) >= (((/* implicit */int) (signed char)-67)))) ? ((((+(((/* implicit */int) (signed char)-11)))) + (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (unsigned short)36733)) : (((/* implicit */int) (signed char)62)))))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [i_0] = ((/* implicit */signed char) var_6);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((unsigned short) (signed char)-44)), (((/* implicit */unsigned short) arr_3 [i_2])))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min(((((-(((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_0])))) % (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)67)) / (((/* implicit */int) (unsigned short)65530)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)3)))))) >> ((((~((~(((/* implicit */int) (signed char)63)))))) - (59)))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 2; i_6 < 22; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned short) (signed char)-75))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)144)))) : (((/* implicit */int) arr_0 [i_0]))))));
                                var_21 = ((/* implicit */signed char) var_7);
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_1 - 1])) - (((/* implicit */int) var_13)))) - ((-(((/* implicit */int) arr_0 [i_0]))))));
                                arr_18 [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12))))))))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) (signed char)15)) >> (((((/* implicit */int) (unsigned short)65518)) - (65508))))))) & (((((/* implicit */_Bool) min((var_15), (arr_14 [i_1])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                                arr_23 [i_4] [i_7] [i_7] [i_0] [i_4] [i_7] [i_0] = ((/* implicit */unsigned short) var_11);
                            }
                            for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                            {
                                var_23 -= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (signed char)-41)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)151)) : (((/* implicit */int) arr_17 [i_5] [(unsigned short)18] [i_5 - 1] [i_1] [i_1] [(unsigned short)18] [i_1]))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) (signed char)9))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-1))))))));
                                var_24 = arr_3 [i_0];
                            }
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)101)))), (((/* implicit */int) (unsigned short)43900))))) ? (((/* implicit */int) (unsigned short)65535)) : (min(((-(((/* implicit */int) (signed char)110)))), (((/* implicit */int) (unsigned short)65510))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
