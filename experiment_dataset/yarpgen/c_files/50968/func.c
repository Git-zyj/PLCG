/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50968
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [17U] = ((/* implicit */short) (+(((/* implicit */int) ((((var_7) > (((/* implicit */unsigned int) arr_0 [i_0])))) || (((/* implicit */_Bool) (+(var_1)))))))));
                    arr_8 [i_1] [i_1] [2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */int) arr_3 [i_1] [i_2] [i_2])), (var_3)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (-303815233377972421LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_9)))))))) : (min((max((((/* implicit */unsigned long long int) -280648197)), (arr_4 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */long long int) min((max((((/* implicit */int) var_12)), (-280648190))), (((/* implicit */int) arr_5 [i_1] [i_1]))))) <= (((arr_1 [i_2 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_8)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_15 [i_4] = ((/* implicit */unsigned int) (~(min((var_8), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3]))))));
                    arr_16 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (+(var_3)))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 303815233377972414LL)) ? (6959673248449365517LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61380)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((long long int) ((long long int) arr_5 [i_4] [i_4])))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_12))))) - (max((((/* implicit */int) arr_13 [i_5] [(unsigned char)4] [i_3])), (var_6)))))) ? (((unsigned long long int) ((var_10) % (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                    arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_2 [i_4] [i_4]);
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */int) var_12)), (-1))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) == (((min((var_7), (((/* implicit */unsigned int) (short)-15625)))) | (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (1751504235))))))));
}
