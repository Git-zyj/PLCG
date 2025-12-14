/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227843
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 -= ((/* implicit */short) arr_1 [(short)8]);
        var_19 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_0 [14U]) <= (arr_1 [(short)10])))), (arr_0 [4U])));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_20 = (~(((((/* implicit */_Bool) ((unsigned int) 2525046249U))) ? (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [(short)14]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)5389))))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) var_9))))))))))))));
                    var_22 -= ((/* implicit */short) (+(arr_4 [i_0] [i_1] [i_2] [14U])));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((short) max((((/* implicit */unsigned int) var_14)), (arr_4 [i_0] [i_4 - 1] [i_2] [i_2]))))));
                        var_24 &= ((/* implicit */short) 1114780551U);
                        var_25 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3]))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */unsigned int) var_14)), ((~(var_16))))))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-((+(max((3858582446U), (((/* implicit */unsigned int) arr_11 [i_2])))))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */short) min((min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_9 [i_3] [i_1] [i_2] [i_0] [i_2 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5390))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (arr_1 [i_0])))) : (((/* implicit */int) (short)-19428)))))));
                    }
                }
                var_28 += ((/* implicit */short) arr_0 [i_2]);
                arr_15 [i_0] [4U] [i_2 - 1] [i_2 + 1] = ((/* implicit */short) 3180186745U);
            }
            arr_16 [(short)0] |= ((((min((((/* implicit */unsigned int) (short)-27928)), (var_4))) < (((arr_13 [i_0] [i_1] [2U] [2U] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (var_12));
            var_29 = ((/* implicit */short) max((((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_1]))), (((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0] [i_0] [2U] [i_0] [i_0]), ((short)25714)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        }
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_0] [7U] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (arr_4 [i_0] [i_0] [i_0] [i_0])));
            var_31 = ((/* implicit */short) min((var_31), ((short)-5390)));
        }
        /* vectorizable */
        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
        {
            var_32 -= ((/* implicit */short) var_8);
            var_33 |= ((arr_8 [i_7 + 3] [(short)10] [16U]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7 - 1]))));
        }
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_26 [i_8]))))));
        var_34 = ((/* implicit */unsigned int) (((((-(var_5))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_8])))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_25 [i_8]))))))));
    }
    var_35 = ((/* implicit */short) max((var_35), (((short) 3323889185U))));
    var_36 = min((var_8), (((/* implicit */unsigned int) var_9)));
    var_37 |= ((/* implicit */unsigned int) ((short) var_16));
    var_38 = ((/* implicit */unsigned int) max((var_38), (((((/* implicit */_Bool) (short)-15717)) ? (max((max((((/* implicit */unsigned int) var_13)), (3180186744U))), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3180186744U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20870))))))))))))));
}
