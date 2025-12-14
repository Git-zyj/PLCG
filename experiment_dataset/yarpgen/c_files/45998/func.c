/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45998
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) var_3))))));
                    arr_8 [(_Bool)1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [(unsigned short)7] [i_1]))))), (((unsigned long long int) var_14))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) 7902346012695677640ULL);
                    arr_10 [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])) * (((/* implicit */int) var_10))))), (((6644098489521922880ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_2 - 1])))) <= (min((var_8), (arr_4 [i_0 - 2] [i_1] [i_1])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned char) var_2);
                            arr_15 [i_0] [(unsigned short)4] [i_3] [i_4] [i_0] = ((/* implicit */int) ((((((_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_6) : (((/* implicit */int) var_5))))) : (var_12))) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24576))))), (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
                            var_18 += ((/* implicit */unsigned char) min(((unsigned short)3038), (((/* implicit */unsigned short) min((arr_1 [i_0 + 2]), ((unsigned char)5))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) var_2);
}
