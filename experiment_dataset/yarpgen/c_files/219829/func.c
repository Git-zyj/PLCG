/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219829
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
    var_15 = ((/* implicit */signed char) (unsigned short)15697);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6213652560561094230ULL)) || (((/* implicit */_Bool) 963559565))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))), (arr_0 [i_0])))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 1])) ? (arr_3 [i_1 + 2] [i_2] [i_2 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                {
                    var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) arr_11 [i_5] [i_3])) : (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_3])), (arr_14 [(signed char)16] [i_4] [(signed char)16]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_2)))))));
                    arr_16 [i_3] = ((/* implicit */short) arr_10 [i_3 + 1]);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_15 [6LL]))) ? (((/* implicit */long long int) ((arr_10 [i_5]) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_9 [i_3]))))) : (max((((/* implicit */long long int) var_7)), (arr_15 [20U])))))) ? ((~(var_9))) : (min((min((var_13), (((/* implicit */long long int) var_1)))), (((long long int) (unsigned short)15714)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_3] [i_4 + 1] [i_6] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) arr_11 [i_6] [i_5])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_5] [i_4])), (arr_17 [i_3] [i_4] [i_4] [i_6]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_4] [i_6])) : (((/* implicit */int) arr_10 [i_5])))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3 + 1] [i_4 - 1] [i_5 - 1] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_6] [i_4 + 1] [i_5 - 1])) : (((/* implicit */int) arr_14 [i_6] [i_4 - 3] [i_5 + 1]))))));
                        arr_21 [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_3] [i_4 + 1] [i_6] [i_3 - 1]))))), (((unsigned int) ((unsigned int) (_Bool)1)))));
                        var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)15697))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        arr_25 [i_3] [i_3] [i_5] [i_7] [i_3] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_5] [i_5]))))), (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        var_19 |= (~(((((/* implicit */_Bool) 1261579022U)) ? ((~(-4463612227525530141LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15697))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_4 + 1] [i_3] = ((/* implicit */unsigned int) ((max((min((((/* implicit */long long int) arr_14 [i_3] [i_3] [i_5])), (arr_27 [i_3] [i_4 - 1]))), (max((((/* implicit */long long int) arr_8 [i_8] [i_3])), (arr_26 [i_8] [i_5] [i_4] [i_3]))))) - (((((/* implicit */_Bool) (-(3033388280U)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_24 [(short)4] [(short)4] [i_5] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)25787))))) : (min((arr_26 [i_3 + 1] [i_3 + 1] [i_5 - 2] [i_8]), (arr_17 [i_3 - 2] [i_4] [i_5 - 2] [i_4])))))));
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_18 [i_3] [i_4 - 3] [i_5 + 1] [i_8]))))), ((~(min((((/* implicit */unsigned long long int) (unsigned short)62515)), (13742444491878823891ULL)))))));
                    }
                }
            } 
        } 
    } 
}
