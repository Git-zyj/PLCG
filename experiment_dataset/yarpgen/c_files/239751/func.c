/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239751
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_3 [i_1]), (arr_3 [i_1 - 1])));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((max(((!(arr_2 [i_1]))), ((!(arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)47)) ? ((~(-3800991162844675031LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (2016468503U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                arr_7 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)12408))))), (((var_5) & (var_5))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)-4)))))), ((~((~(((/* implicit */int) var_4))))))));
    var_11 &= ((/* implicit */unsigned char) var_0);
    var_12 += ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [i_2 + 2])), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_7))))));
        arr_12 [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_2])), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2])), (var_1)))) : (((/* implicit */int) arr_10 [19] [i_2 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_21 [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_4])) == (((/* implicit */int) (_Bool)0)))))));
                    arr_22 [i_4] [i_3] [i_3] [17LL] = ((/* implicit */unsigned int) (unsigned char)62);
                }
            } 
        } 
        arr_23 [(unsigned char)11] = (+(((((/* implicit */_Bool) arr_15 [(unsigned char)12])) ? (var_9) : (((/* implicit */long long int) var_5)))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_28 [(unsigned short)17] = ((/* implicit */unsigned int) min((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-91)), ((unsigned char)20)))), (max((var_4), (min((((/* implicit */short) var_8)), (var_4)))))));
        var_13 = ((/* implicit */unsigned short) (((~(3580155450U))) | (min((max((((/* implicit */unsigned int) var_1)), (var_3))), (((/* implicit */unsigned int) (unsigned char)70))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16536)) * (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) (unsigned char)100)) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)153))))));
    }
}
