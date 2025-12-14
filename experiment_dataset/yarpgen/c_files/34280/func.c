/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34280
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
    var_12 = ((/* implicit */signed char) min((0), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */_Bool) 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_7))) << (((((/* implicit */int) var_3)) - (164)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 7)) ? (4) : (0))) >= (((/* implicit */int) var_8)))))) : (8096132026945894220LL))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((arr_2 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)15306))));
                            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4053941912U)))) == ((+((-(arr_2 [i_0])))))));
                            var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(_Bool)1])) > (((/* implicit */int) arr_1 [i_0])))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_2 [i_0]))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) (+(-1270017289)));
            }
        } 
    } 
}
