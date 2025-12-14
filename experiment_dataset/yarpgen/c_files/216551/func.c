/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216551
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) min(((unsigned char)14), ((unsigned char)191)))) : (((((/* implicit */_Bool) (short)6715)) ? (((/* implicit */int) (short)-6716)) : (((/* implicit */int) (unsigned char)101))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (short)6735))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [(unsigned char)1] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6715)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned char)101))))) ? (((/* implicit */int) arr_4 [i_1] [i_2 + 1])) : (((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4 - 1]))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)117)))) : (((((/* implicit */_Bool) arr_10 [(short)5] [i_1] [(short)5] [(short)5])) ? (((/* implicit */int) (short)14704)) : (((/* implicit */int) (short)19423))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_5] [i_5 - 2] [i_5] [i_5] [i_5 - 3] [i_5])) : (((/* implicit */int) arr_3 [i_5 - 3] [i_5 + 1] [i_0]))))) ? (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_1] [i_5])) : (((/* implicit */int) (unsigned char)172)))), (((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [(unsigned char)9])) : (((/* implicit */int) arr_0 [i_5] [i_5 + 1])))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5 - 1])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_6))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (unsigned char)139))))) ? (max((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)101)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)107)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)9])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) arr_9 [i_5] [i_1] [(unsigned char)9] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_5]))))))));
                    arr_19 [i_5] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_9 [i_5 - 3] [i_5] [i_5 - 1] [i_5 - 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)66)), (arr_10 [i_0] [i_0] [i_1] [i_5])))) : (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (short)31898)) : (((/* implicit */int) (short)15308))))))));
                }
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)2980)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)138)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned char)117), ((unsigned char)115))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((var_11), (((/* implicit */short) var_8))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
}
