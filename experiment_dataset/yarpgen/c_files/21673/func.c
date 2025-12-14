/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21673
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
    var_10 &= ((/* implicit */short) ((((/* implicit */long long int) 4294967276U)) / (var_4)));
    var_11 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (var_4))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) == (((/* implicit */int) arr_0 [i_0 + 2]))))))))));
                var_13 ^= ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned char)25)), (arr_1 [i_0 + 2] [i_1 - 2]))) == (((((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0 + 3] [i_1 - 2])) ? (((/* implicit */int) ((_Bool) 1187086454U))) : (((/* implicit */int) (unsigned char)136))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)279))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)14016)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (unsigned short)8176)))) == (((/* implicit */int) (_Bool)1))))))))));
                                var_16 |= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                } 
                var_17 += ((/* implicit */short) max(((-(((/* implicit */int) arr_9 [6ULL] [i_1 + 1] [i_1] [i_1 - 3] [i_1] [(unsigned short)22] [(unsigned short)22])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)8166)) == (((/* implicit */int) (unsigned char)120)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_16 [4U] = ((/* implicit */unsigned short) (-(arr_1 [i_5] [i_5])));
        var_18 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_19 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185))))) == (((int) 111557142U))))) : (((/* implicit */int) ((signed char) arr_4 [8U])))));
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)8176)))) / (((/* implicit */int) var_7))))) / ((-(min((arr_6 [i_6] [i_6] [i_6] [(_Bool)1]), (((/* implicit */long long int) var_2))))))));
    }
}
