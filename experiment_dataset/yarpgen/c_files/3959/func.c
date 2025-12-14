/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3959
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (min((-3544845170045928230LL), (((/* implicit */long long int) (unsigned short)5193)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_13 &= ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_3] [i_2] &= ((/* implicit */short) (((-(((/* implicit */int) var_4)))) * (((arr_1 [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))));
                        var_14 = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [(_Bool)1] [i_0]);
                        arr_10 [i_0 + 3] [i_1] [i_3] [i_3] [i_3] &= ((((_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_3])) ? ((~(((/* implicit */int) (unsigned short)15)))) : (((/* implicit */int) ((unsigned char) var_4))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) 1054468003))) ? (2473545250U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1072693248LL)) && (((/* implicit */_Bool) 3565043100638454189ULL)))))))), (((/* implicit */unsigned int) ((signed char) 3544845170045928230LL)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        var_15 = arr_0 [(unsigned char)23] [i_1];
                        arr_14 [i_0] [i_0 + 2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) var_11)), (var_1))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) min((arr_6 [i_1] [20U] [i_1]), (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(short)10]))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_8 [(unsigned short)8] [i_2] [i_2]))))) : (arr_4 [i_1] [i_1] [i_1])));
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [(short)12])) & (((/* implicit */int) var_4)))) < (((/* implicit */int) var_11))));
                    }
                    arr_19 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 8938371301955800482LL)) || (((/* implicit */_Bool) (unsigned short)35447)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
