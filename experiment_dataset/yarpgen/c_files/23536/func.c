/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23536
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9372595528507625122ULL)) ? (115288011) : (((/* implicit */int) (unsigned char)93))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) & (-1040206300))))), (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37277))) & (2795204058U))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3 + 2] [i_3] [i_1] = ((((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_3] [i_3 - 2])) ? (arr_4 [i_3 + 2]) : (arr_4 [i_3 - 1]))) < ((~(var_6))));
                                arr_17 [i_1] [i_4] = ((/* implicit */unsigned long long int) (~(max(((+(((/* implicit */int) (unsigned char)112)))), (((/* implicit */int) arr_12 [i_3 + 2] [i_1] [i_2] [i_3 + 2] [i_4]))))));
                                arr_18 [i_3 - 1] [i_1] [i_3] [i_3] = ((/* implicit */short) ((_Bool) ((unsigned short) arr_10 [i_0])));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 15; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) (unsigned short)37282)) : (((/* implicit */int) (unsigned short)37288)))) / (((/* implicit */int) ((unsigned short) var_11)))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_21 [i_5 - 2] [i_5]))))) * (arr_22 [i_5 + 1])))));
        arr_24 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((max((arr_20 [(unsigned short)17]), (arr_20 [i_5]))), (var_5))))));
        arr_25 [i_5] = ((/* implicit */unsigned char) ((arr_22 [i_5 + 3]) != (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)52534)) ? (((/* implicit */int) (unsigned short)796)) : (((/* implicit */int) arr_20 [(unsigned char)2])))))))));
    }
    var_21 *= ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)28244), (var_5)))), (((int) (unsigned short)52514))))) ? (((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28253))))) : ((~(9074148545201926496ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_8))))) != (max((var_7), (((/* implicit */unsigned int) var_1)))))))));
}
