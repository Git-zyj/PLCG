/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191785
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
    var_15 = (_Bool)1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [12LL] [(_Bool)1] [11LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)8))))))) ? (max((((/* implicit */long long int) var_8)), (var_5))) : (((/* implicit */long long int) ((((2147483647) - (((/* implicit */int) (short)12627)))) - (((var_14) ? (((/* implicit */int) (short)32737)) : (((/* implicit */int) var_6)))))))));
                                arr_13 [i_0] [10U] [10U] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 885947374U)) ? (((/* implicit */int) (short)14538)) : (-1349721295)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (_Bool)1))));
                                arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] = ((_Bool) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                } 
                arr_15 [(short)13] [i_1] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)50205)) != (((/* implicit */int) (_Bool)0))))));
                arr_16 [2] [(short)12] = max((((/* implicit */long long int) (_Bool)1)), (((long long int) (~(var_0)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [1] [i_5] [7LL] [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned short)10418));
                                arr_28 [i_1] [i_5] [14ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9354)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-14539))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-11583)));
}
