/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34152
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
    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (8796088827904LL))) & (((/* implicit */long long int) ((int) var_17))))) * (((/* implicit */long long int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_13))))) * (((/* implicit */int) (!(var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(signed char)7] [(signed char)7] [(signed char)7] = ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)112)) && (((/* implicit */_Bool) max(((+(-8796088827905LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (arr_2 [(signed char)13])))))))));
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-1713856461) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_3])))))) == (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */long long int) arr_7 [i_0] [i_1])) : (arr_1 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((((((var_5) <= (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) (~(arr_2 [0])))) : (max((((/* implicit */long long int) 670592049U)), (arr_4 [i_0] [i_0]))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_1 + 2] [4U] [i_4]))))) ? (((/* implicit */long long int) min((arr_7 [i_2] [i_4]), (arr_2 [i_0])))) : (max((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_15 [i_0] [i_1] [i_2] [i_0] [i_4])))))));
                            arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                            arr_18 [i_0] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (signed char)55)))) : ((~(((/* implicit */int) arr_9 [i_2 + 1])))));
                        }
                    }
                }
            } 
        } 
        var_24 |= ((/* implicit */int) arr_16 [i_0] [14U] [(signed char)0] [i_0] [i_0] [i_0] [i_0]);
        arr_19 [i_0] = ((/* implicit */unsigned short) ((max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_5 [i_0] [i_0])))) + (((arr_2 [i_0]) / (arr_2 [i_0])))));
    }
}
