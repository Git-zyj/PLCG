/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32034
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (~(min((4025176424U), (((/* implicit */unsigned int) (unsigned char)119))))));
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_21 = min((min((((/* implicit */unsigned long long int) var_13)), (var_6))), (min((min((var_5), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) var_4)))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((max((max((var_5), (((/* implicit */unsigned long long int) var_17)))), (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
            var_22 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
            arr_11 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) var_13);
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))), ((+(var_6)))));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_2] [8ULL] = ((/* implicit */unsigned char) (-(var_5)));
            var_25 += max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned char)99)));
            arr_20 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((-(((/* implicit */int) var_8))))));
            arr_21 [i_2] = ((/* implicit */unsigned char) var_10);
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_26 = (!(var_12));
            var_27 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (+(4365773774109139068ULL))))));
        }
    }
}
