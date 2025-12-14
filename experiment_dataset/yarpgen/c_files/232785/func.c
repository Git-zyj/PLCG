/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232785
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) 197347738U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((((signed char) (!(((/* implicit */_Bool) var_13))))), ((signed char)31)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(short)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_0] [i_1] [i_2]))) : (min((arr_7 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_0])))));
                                var_18 = ((/* implicit */signed char) arr_3 [0LL] [i_1]);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((536866816U) >> (((((/* implicit */int) arr_1 [i_4])) + (124))))))) ? (((/* implicit */int) ((short) arr_11 [i_4] [i_2] [i_1] [i_0]))) : (((/* implicit */int) arr_1 [i_0]))));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))), (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)35611), (((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_2] [(signed char)10])))))) : (arr_5 [i_2] [i_3])))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_10 [i_3] [i_1] [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) && (((/* implicit */_Bool) 4097619558U))))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) <= (((long long int) arr_1 [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
