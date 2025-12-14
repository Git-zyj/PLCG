/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211794
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((unsigned int) ((int) max((((/* implicit */unsigned long long int) var_9)), (12732892503843763412ULL))))))));
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [(signed char)12])) ? (max((4294967283U), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))))) && (((/* implicit */_Bool) (-(2918014924855391996LL))))));
                            var_14 = ((/* implicit */unsigned short) ((max(((~(-4611686018427387904LL))), ((-(var_9))))) | (((/* implicit */long long int) ((/* implicit */int) ((((_Bool) 15991771889534323733ULL)) || (arr_8 [i_0] [i_1] [i_2] [(_Bool)1])))))));
                            arr_9 [(signed char)11] [i_1] [i_1] [i_2] [i_3] &= ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_5 [i_0] [i_1] [i_2] [i_3]))) <= (((/* implicit */int) (!(arr_5 [i_3] [i_2] [i_1] [i_0]))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [(unsigned char)11] [i_0])) : (((/* implicit */int) var_2))))) : (((unsigned long long int) (unsigned char)53))))) ? (((/* implicit */long long int) ((arr_0 [i_1] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_0])))))) : ((((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)3)), (511)))) : (var_6)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((unsigned int) (-(5255933304720947556LL))));
                var_17 = ((/* implicit */unsigned char) max(((short)-256), ((short)-18041)));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4] [i_0])))))))) >> (((((/* implicit */int) (short)-19565)) + (19585)))));
                            var_19 = ((/* implicit */long long int) var_4);
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_0 [i_4] [i_5]))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? ((+(arr_15 [i_0] [i_1] [i_4] [18U]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) (unsigned char)213)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_25 [2U] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_15 [i_6] [i_7] [i_8] [i_7])))) ? (((((/* implicit */_Bool) arr_11 [i_8] [i_9])) ? (arr_16 [i_8]) : (9843934345322369840ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_6] [i_7])))))) ? (((((((/* implicit */int) (signed char)-9)) <= (((/* implicit */int) var_2)))) ? ((~(var_1))) : (((/* implicit */long long int) ((1455930214U) | (var_4)))))) : (((/* implicit */long long int) (~(2871959874U)))));
                            arr_26 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) 3266478455U);
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) 3266478482U);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (signed char)18))));
            }
        } 
    } 
    var_23 &= ((/* implicit */int) var_3);
}
