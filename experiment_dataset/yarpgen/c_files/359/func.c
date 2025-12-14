/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/359
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
    var_10 = ((/* implicit */signed char) ((short) var_2));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (unsigned short)54732);
                    arr_6 [i_0] [13LL] = ((/* implicit */short) (((!(((/* implicit */_Bool) 1784831248U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))) < (((((/* implicit */unsigned long long int) 6138980800773273078LL)) % (var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_6)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_18 [i_5 - 1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-(-653238001)));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */int) ((6138980800773273056LL) << (((((((/* implicit */_Bool) 2055279752U)) ? (3047134196600065507LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8833))))) - (3047134196600065507LL)))));
                }
            } 
        } 
    } 
}
