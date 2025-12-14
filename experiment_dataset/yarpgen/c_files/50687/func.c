/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50687
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
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 &= ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((((/* implicit */_Bool) (short)-16897)) ? (((/* implicit */int) (short)16875)) : (((/* implicit */int) var_10))))))) % (((/* implicit */int) var_7)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-16897)))) % (((((/* implicit */_Bool) (short)12943)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) ((short) var_9)))))) : (((/* implicit */int) min((var_10), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) ((((int) arr_5 [i_0] [i_0] [i_3] [i_0])) != (var_13)))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-16897)), (var_4)))) ? (min((var_1), (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_8)))))))))));
                        arr_9 [i_3] [i_1] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [13ULL] [i_1] [i_2] [i_1])))) ? (((/* implicit */int) max((arr_8 [i_0] [i_4 - 2] [i_0] [i_2] [i_0]), (arr_8 [i_3] [i_4 - 2] [i_4 + 2] [i_3] [9ULL])))) : (((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) max(((short)-31176), ((short)-32212)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))))))));
                            var_19 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_3]), ((short)19)))) != (((/* implicit */int) max((arr_6 [i_1]), ((short)32201))))))) << ((((~(arr_11 [i_2] [i_2] [i_4]))) + (1855520610)))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_3]), ((short)19)))) != (((/* implicit */int) max((arr_6 [i_1]), ((short)32201))))))) << ((((((~(arr_11 [i_2] [i_2] [i_4]))) - (1855520610))) + (1063356611))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] &= (short)32213;
                            var_20 = ((((/* implicit */_Bool) ((short) arr_8 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_1] [i_1]))) ? (((((((/* implicit */int) var_0)) / (arr_5 [i_0] [i_1] [i_3] [i_0]))) + (((/* implicit */int) arr_8 [i_4 + 2] [i_4 - 2] [i_4] [6] [i_4 - 2])))) : (362497199));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)18] [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)12942)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_3 [i_3] [i_4 + 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((int) (short)0)) : (((/* implicit */int) (short)-749)))) : (((/* implicit */int) min((((short) (short)-31176)), ((short)-15253)))));
                        }
                    }
                } 
            } 
        } 
        arr_15 [i_0] |= ((/* implicit */short) ((int) var_13));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_19 [(short)0] = ((/* implicit */short) ((arr_11 [i_5] [i_5] [i_5]) << (((arr_11 [i_5] [i_5] [i_5]) - (1855520587)))));
        var_22 = ((/* implicit */short) var_1);
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_5])) != (arr_11 [i_5] [i_5] [i_5])))) % (arr_5 [i_5] [i_5] [i_5] [i_5])));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])))))));
    }
}
