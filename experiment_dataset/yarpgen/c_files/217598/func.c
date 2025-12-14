/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217598
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((130023424U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) (unsigned short)32354)))))))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_10))), (max(((unsigned short)32969), ((unsigned short)32566)))))) : (((/* implicit */int) (((~(var_12))) != (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_7)))))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (~(var_0)));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) ((unsigned int) arr_12 [i_1] [i_2] [i_3] [i_3] [i_1]));
                        var_20 = ((/* implicit */unsigned long long int) (+(var_12)));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_9 [14ULL] [i_2] [14ULL]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_21 [(unsigned short)13] [i_2] [i_3] [(unsigned short)13] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_3] [(short)12] [i_2]);
                            arr_22 [(short)10] [(short)10] [(unsigned char)10] [i_1] [i_4] [i_6] [i_6] = ((/* implicit */int) arr_5 [i_1]);
                            arr_23 [i_6] [(_Bool)1] [i_3] [2ULL] [i_6] [i_6] &= ((/* implicit */unsigned short) var_9);
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1])) || (((/* implicit */_Bool) var_0)))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [10ULL] [i_7]))) <= (var_3)))) >> ((((~(((/* implicit */int) var_4)))) + (180)))));
                            arr_26 [i_1] [i_2] [i_3] [(short)12] [14LL] |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7)))));
                            var_25 = ((/* implicit */_Bool) (((+(16383))) / (((/* implicit */int) var_6))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 9U)) ? (4520444372814768506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
}
