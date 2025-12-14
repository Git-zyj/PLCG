/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238879
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)35520)))), ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)30016))))))) : (arr_3 [i_0] [i_2]));
                    arr_8 [i_1 - 2] [i_2] = ((min((((/* implicit */unsigned int) arr_6 [i_2])), (((((/* implicit */_Bool) 2245422318742498499LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30016))) : (var_9))))) * (arr_4 [i_0] [i_0] [i_2]));
                    var_13 = ((/* implicit */int) arr_2 [i_0]);
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (((-(max((arr_5 [(_Bool)1] [i_1] [i_3] [i_3]), (((/* implicit */int) (unsigned short)35520)))))) + (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))))));
                    var_14 = ((/* implicit */short) arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_3]);
                }
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [i_0] [16U]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30015)) && (((/* implicit */_Bool) var_9)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1152640029630136320LL)) || (((/* implicit */_Bool) -2245422318742498499LL))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [6U]))) : (3291332970647325928ULL)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_9 [i_1] [10U])), (((((/* implicit */_Bool) max((var_5), ((short)21083)))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 2])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [8LL])))))))))));
                    var_17 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [6] [i_4])) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)30015))))) : (arr_3 [(unsigned char)4] [i_1 - 2]))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                }
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)11198))) & (((((/* implicit */_Bool) 16340830400551558609ULL)) ? (2245422318742498499LL) : (((/* implicit */long long int) var_9)))))))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)35);
                }
                arr_21 [i_0] = ((/* implicit */unsigned short) min((arr_11 [i_0] [(unsigned short)6] [0]), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_3))))) > (arr_18 [i_0] [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 3) 
    {
        for (int i_7 = 3; i_7 < 21; i_7 += 4) 
        {
            {
                arr_28 [i_6] = ((/* implicit */unsigned long long int) max((arr_26 [i_6 + 1] [i_6 + 1] [i_6]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_6] [i_7 + 3])))))));
                arr_29 [(short)2] [i_7] [i_6] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((arr_25 [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6])))))), (((((/* implicit */_Bool) var_1)) ? (arr_22 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31919))))))), (min((min((arr_27 [i_6] [i_7]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) 1006632960U))))));
            }
        } 
    } 
}
