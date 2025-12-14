/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239930
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_3 - 1] [(signed char)0] [(signed char)0] [i_1] [i_1] = (_Bool)1;
                            arr_10 [(_Bool)1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) -2585237740016624513LL);
                            arr_11 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (signed char)-99);
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_13))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3429447122823542103LL)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */short) arr_2 [i_0]);
                var_17 = ((/* implicit */long long int) min((var_17), ((-(((((/* implicit */_Bool) 8680692578795641166LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_4) / (45869621331980883LL)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                    arr_23 [i_5] = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (2032668191201344709LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) & ((-(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_21 ^= var_2;
}
