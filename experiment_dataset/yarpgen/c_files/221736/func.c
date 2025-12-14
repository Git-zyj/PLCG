/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221736
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((unsigned char) var_10))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (signed char)50)))));
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_11)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (arr_0 [(short)13] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) min((var_0), (var_9)))) : (((((/* implicit */_Bool) (short)25879)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))));
                    arr_10 [i_2] [i_1] [(unsigned char)12] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)31337)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) (unsigned char)145)))));
                    var_17 = max((((((/* implicit */_Bool) (unsigned short)10362)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_6)))));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_2] [i_0]) : (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_2])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned short)61461))))));
                    var_18 = var_4;
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)44235)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_1))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_14 [i_3] [i_3]) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (40094623U)))) ? ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)33086)))), (((/* implicit */int) var_1)))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23959)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20))))))) ? (max((max((arr_14 [i_3] [i_3]), (((/* implicit */int) (unsigned short)20893)))), (arr_14 [i_3] [i_3]))) : (((/* implicit */int) ((short) var_5))))))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((var_9) ? (((/* implicit */int) (unsigned short)44211)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3])))))) ? (max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (arr_14 [i_3] [i_3]) : (((/* implicit */int) max((var_6), (var_6))))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_13 [i_3]))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (arr_14 [(unsigned char)3] [i_3])))), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)61921))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_22 *= max((arr_13 [i_3]), (((/* implicit */unsigned char) var_0)));
            arr_18 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (1955883010) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) (_Bool)0)))));
            var_23 = ((/* implicit */int) max((((long long int) var_6)), (((/* implicit */long long int) var_5))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_3 [i_5] [(short)5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((arr_13 [i_5]), (var_4)))))) & (min((arr_14 [(unsigned char)5] [i_5]), (((/* implicit */int) var_12)))))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_2)))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_5] [i_5]))) : (((/* implicit */int) min(((unsigned short)44230), ((unsigned short)16137))))));
    }
}
