/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246586
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) -962769304)) != (0ULL))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((-802105150) + (((/* implicit */int) (signed char)-97)))) + (2147483647))) >> (((10128606822755039757ULL) - (10128606822755039728ULL)))));
        arr_3 [i_0] = ((/* implicit */int) ((max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)18801)))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */int) 8318137250954511856ULL);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_21 = var_13;
            var_22 ^= arr_6 [i_1] [i_1] [i_2];
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_23 = var_6;
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)31)), (-215069928)));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2237008933U) << (((var_18) + (1894643012)))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        arr_19 [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned int) var_7);
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_1 [i_7] [(_Bool)1]))));
        var_27 += ((/* implicit */_Bool) arr_13 [i_7 + 1]);
    }
    var_28 = ((((((/* implicit */int) (unsigned short)64972)) != (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)46734)))))) ? (((/* implicit */int) var_16)) : (min((var_18), (var_14))));
}
