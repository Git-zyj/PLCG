/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38530
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(14761546561523931281ULL)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_12))))), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)-40))))))) * (0U)));
        var_21 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (var_13))), (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (short)-22614)), (7712604874519400099ULL))), (((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(3075623946U))))));
        arr_13 [i_2] = ((/* implicit */long long int) (((((-(946508378))) + (2147483647))) << (((max(((+(9005000231485440ULL))), (((/* implicit */unsigned long long int) max((var_4), (var_1)))))) - (9005000231485440ULL)))));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_0);
                    arr_21 [17ULL] [i_3] [17ULL] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_5))))));
                    var_23 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((signed char) var_3))) && (((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) (signed char)0)), (var_17))));
                    var_24 = ((/* implicit */unsigned long long int) var_1);
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_8 - 2] [i_8 + 2])))))));
                }
            } 
        } 
    } 
}
