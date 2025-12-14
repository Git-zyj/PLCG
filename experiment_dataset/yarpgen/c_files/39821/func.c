/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39821
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
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_18 = min((((/* implicit */unsigned long long int) (unsigned short)26424)), (((((((/* implicit */unsigned long long int) -3782667248738348752LL)) == (arr_7 [i_0] [i_2] [19ULL] [i_0]))) ? ((~(7134372239290425824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)1] [i_1] [i_0])))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((-8651682694519408725LL), (((/* implicit */long long int) max((((unsigned int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3] [i_0])) ? (arr_0 [15LL] [i_1]) : (arr_7 [i_2] [i_2] [i_2] [i_0]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))) > (((/* implicit */unsigned long long int) min((arr_3 [i_2] [i_2] [(_Bool)1]), (min((-1473486153), (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)-714)) ? (((/* implicit */unsigned long long int) (-(10LL)))) : (((((/* implicit */_Bool) arr_6 [24LL] [i_1 + 2] [i_1 + 3])) ? (arr_7 [i_1] [24ULL] [i_2] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = (-(var_2));
    var_21 = (((((~(((/* implicit */int) (_Bool)1)))) <= ((+(((/* implicit */int) (unsigned short)40475)))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_19 [i_5] = ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)46))));
                    var_22 = ((/* implicit */unsigned int) arr_3 [i_3] [i_4] [i_5 + 2]);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) arr_12 [15U])) ? (((/* implicit */unsigned long long int) ((((arr_3 [i_3] [i_5] [12]) + (2147483647))) >> (((arr_1 [i_4]) - (1633653240U)))))) : (arr_18 [i_3] [(_Bool)1] [i_5])))));
                }
            } 
        } 
    } 
}
