/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234930
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((unsigned short) arr_0 [i_0])), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)15217))));
                arr_7 [i_1 - 2] = ((unsigned short) ((((/* implicit */int) arr_4 [i_0])) <= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 1])));
                var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])), ((+(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = arr_2 [i_2];
        /* LoopSeq 2 */
        for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24338)) > (((/* implicit */int) arr_3 [i_2] [i_3] [i_4]))));
                arr_17 [i_2] [i_3] [i_3] [i_4] = arr_0 [i_2];
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_1 [i_3 - 1] [i_3 - 2]), (arr_1 [i_3 - 1] [i_3 + 1])))), ((-(((/* implicit */int) (unsigned short)6045))))));
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) > (((((/* implicit */int) arr_1 [i_2] [i_4])) - (((/* implicit */int) min(((unsigned short)15218), ((unsigned short)15216))))))));
                var_19 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_9 [i_4])))) == (((/* implicit */int) arr_13 [i_2] [i_3 - 1]))));
            }
            var_20 = ((/* implicit */unsigned short) min((var_20), (max((max((arr_12 [i_2] [i_2]), (((unsigned short) (unsigned short)50311)))), (((unsigned short) ((((/* implicit */int) (unsigned short)6808)) > (((/* implicit */int) (unsigned short)64270)))))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_1 [i_3 - 2] [i_3 - 3]))) >> ((((+(((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1] [i_2])))) - (11949))))))));
            arr_18 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2])) <= (((/* implicit */int) max((arr_12 [i_3] [i_3]), (arr_2 [i_3]))))));
        }
        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 3; i_7 < 8; i_7 += 1) 
                {
                    {
                        var_22 = (unsigned short)50320;
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_2]))));
                        arr_26 [i_2] = arr_20 [i_2];
                        arr_27 [i_2] [i_2] [i_2] [i_5 - 1] = ((unsigned short) (((+(((/* implicit */int) arr_4 [i_2])))) < (((/* implicit */int) arr_3 [i_5] [i_6] [i_7 + 2]))));
                        arr_28 [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31792)) + (((/* implicit */int) (unsigned short)50318))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 4; i_8 < 10; i_8 += 2) 
            {
                var_24 = arr_15 [i_2] [i_5 - 1] [i_8 - 2] [i_8];
                var_25 = arr_22 [i_2];
            }
            arr_31 [i_5 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_4 [i_5 + 2]))) > (((/* implicit */int) arr_9 [i_2]))));
        }
    }
}
