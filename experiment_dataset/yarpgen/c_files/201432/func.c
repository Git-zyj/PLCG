/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201432
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)1] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3415664962916137312LL)) ? (-3415664962916137342LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-13)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (((~((-(((/* implicit */int) var_5)))))) >> (((/* implicit */int) (!((!(var_7))))))));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), ((-(var_6)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (-((-(var_9)))));
                                arr_20 [i_3] [(signed char)5] [i_5] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)200))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (var_6));
                    var_18 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) var_6)))), (max((((/* implicit */long long int) (unsigned char)200)), (3415664962916137307LL))))) / ((~(min((var_9), (((/* implicit */long long int) var_8))))))));
                    var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
}
