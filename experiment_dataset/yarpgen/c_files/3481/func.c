/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3481
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
    var_19 ^= ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))), (arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 4]))))) : (var_14)));
                    var_20 = ((/* implicit */signed char) ((short) ((int) arr_7 [i_2 - 4] [i_2 - 3] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) var_5);
                                var_21 = (~(arr_5 [i_0] [i_2]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) 18233022694254858663ULL);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7)))))));
                    }
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned long long int) (~(max((var_6), (var_10)))));
                        arr_21 [i_0] [i_0] [i_2] [i_0] = (signed char)-110;
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_13)) < (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_2] [i_1]))) == (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (var_14)))))))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((((_Bool) var_16)) ? (arr_1 [i_0] [i_6 + 1]) : (((/* implicit */unsigned long long int) var_9)))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_12))))) : ((+(var_4))))));
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 15; i_7 += 3) 
    {
        arr_26 [6U] = ((/* implicit */long long int) (+((~((-(((/* implicit */int) arr_23 [i_7]))))))));
        var_27 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7 - 2])) ? (((/* implicit */int) var_1)) : (arr_22 [i_7 + 1] [i_7 + 1]))))));
    }
}
