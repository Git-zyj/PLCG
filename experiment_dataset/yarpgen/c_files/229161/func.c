/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229161
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (1720336514U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27))))))))));
                                arr_16 [(_Bool)1] [(_Bool)1] [i_2] [10U] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((unsigned short)27), ((unsigned short)65509)))), (((((/* implicit */_Bool) (short)-2456)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4 + 1] [8] [i_4] [i_4 - 2] [i_4 - 3]))) : (var_1)))));
                                arr_17 [i_1] [i_1] [i_2] [(short)0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_0 - 1] [i_1] [i_1] [i_3])))) ? (((/* implicit */long long int) var_5)) : (min((var_12), (((/* implicit */long long int) arr_15 [(unsigned char)3] [i_1] [i_1] [i_2] [i_4 - 2] [i_3]))))));
                                arr_18 [i_1] [i_1] [7U] [i_1] [(signed char)8] [(signed char)8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_3))) ? ((((!(((/* implicit */_Bool) 3037679992U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))) : (((((/* implicit */_Bool) (signed char)40)) ? (1916582062U) : (((/* implicit */unsigned int) 1963634712)))))) : (((((/* implicit */_Bool) ((long long int) (signed char)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((unsigned int) 3718484544U))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_17 = 2286162427U;
                            var_18 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (signed char)-100)), (arr_3 [i_0 + 4]))) <= (((/* implicit */int) ((_Bool) (unsigned short)65509)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)12)), (2462850355U))), (((/* implicit */unsigned int) arr_3 [i_0 + 3]))))) ? (((/* implicit */long long int) 2118508161U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (8940750547543139722LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) arr_8 [i_0] [i_0 - 1] [i_1])) : (min((((/* implicit */long long int) var_11)), (1960123264940536931LL)))))));
                arr_25 [i_0] [i_1] [(unsigned short)0] = (_Bool)1;
            }
        } 
    } 
    var_20 = var_13;
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 += ((/* implicit */unsigned short) var_1);
}
