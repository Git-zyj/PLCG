/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23253
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15908)) ? (((/* implicit */int) (short)22061)) : (((/* implicit */int) (short)-29795))));
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) ((short) arr_1 [(short)10])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29821)) ? (((/* implicit */int) (short)-32010)) : (((/* implicit */int) (short)16383)))))))) : (max((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) var_1)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)15749);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)-7317)) : (((/* implicit */int) (short)15749))))) ? (max((((((/* implicit */int) arr_7 [i_1])) + (((/* implicit */int) (short)14529)))), ((-(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((short) arr_1 [i_1]))) : (((/* implicit */int) arr_5 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29784)) ? (((/* implicit */int) (short)16388)) : (((/* implicit */int) (short)-20419))));
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 12; i_2 += 2) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [(short)12])))) && (((((/* implicit */int) (short)-28367)) > (((/* implicit */int) (unsigned short)20066)))))))));
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)19820)) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (short)-29795))));
            arr_14 [i_2] [i_2] |= ((/* implicit */short) (-(((/* implicit */int) var_8))));
            var_14 = ((/* implicit */short) max(((-(((/* implicit */int) var_9)))), (((((/* implicit */int) (short)16449)) * (((/* implicit */int) arr_4 [i_1]))))));
        }
        /* vectorizable */
        for (short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            arr_18 [(short)6] [i_1] [i_1] &= ((/* implicit */unsigned short) (short)5007);
            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-16390)) ? (((/* implicit */int) (short)-15749)) : (((/* implicit */int) arr_13 [i_1] [i_3])))) % ((~(((/* implicit */int) var_1))))));
        }
        var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_1] [i_1])) < (((/* implicit */int) (short)32571)))) ? (((/* implicit */int) max(((short)-27221), ((short)-16448)))) : (max((((((/* implicit */_Bool) (short)-29773)) ? (((/* implicit */int) arr_17 [(unsigned short)7])) : (((/* implicit */int) (unsigned short)58429)))), ((~(((/* implicit */int) arr_0 [i_1]))))))));
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25320)) ? (((/* implicit */int) (short)16725)) : (((/* implicit */int) (short)-16449))))) ? (((/* implicit */int) (unsigned short)56445)) : (((/* implicit */int) arr_15 [i_1]))))));
    }
    for (short i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4 + 3] [i_4 + 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_4 + 1] [i_4 + 1] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned short)9090))))) < (((/* implicit */int) (unsigned short)9090))))) : (((((/* implicit */_Bool) (short)-15150)) ? (((((/* implicit */_Bool) (unsigned short)9107)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-16390)))) : (((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */short) max((((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_27 [i_7] [i_6] [i_5 + 1] [i_5 + 1] [i_4 - 1])) : (((/* implicit */int) (short)0)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_25 [i_7] [i_6] [i_5 + 1] [i_4])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)29772)))))))));
                        arr_28 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (short)5499)) : (((/* implicit */int) (unsigned short)56445))));
                        arr_29 [i_4] [i_4] [i_4] [i_6] = arr_24 [i_4 + 1] [i_5] [i_6] [i_6];
                        var_19 = ((/* implicit */short) var_5);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_24 [i_4] [i_5] [i_6] [i_7])) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) (short)-28367)) : (((/* implicit */int) var_8))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) arr_0 [i_6]))) : (((/* implicit */int) ((short) arr_26 [i_8] [i_6] [(short)0] [(short)8])))));
                        arr_34 [i_4] [i_4] [i_6] [i_8] = ((/* implicit */short) (unsigned short)2990);
                        var_22 = ((/* implicit */short) arr_20 [(short)2] [i_8]);
                    }
                }
            } 
        } 
        arr_35 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4 + 2])) : (((/* implicit */int) arr_25 [i_4] [(short)11] [(unsigned short)2] [i_4])))) < (((((/* implicit */_Bool) (short)18028)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)28370))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)5114)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) > (((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)57030)))))))));
    }
    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_9]))) ? (((((/* implicit */_Bool) (short)5499)) ? (((((/* implicit */int) (short)15749)) % (((/* implicit */int) (short)5481)))) : (((/* implicit */int) max(((unsigned short)57030), (((/* implicit */unsigned short) (short)24963))))))) : (min((((/* implicit */int) arr_38 [(short)5] [i_9])), (((((/* implicit */int) (unsigned short)40141)) + (((/* implicit */int) (short)-28383))))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (max((arr_0 [i_9]), (arr_38 [i_9] [i_9])))))) ? (((/* implicit */int) arr_37 [i_9])) : (((/* implicit */int) arr_37 [i_9]))));
    }
    var_25 = var_5;
}
