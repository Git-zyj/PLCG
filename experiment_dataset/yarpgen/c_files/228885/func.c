/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228885
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
    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((3103189187U), (var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((short) var_9))) : (var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 += ((/* implicit */short) -7847438287730848613LL);
                    var_13 ^= ((/* implicit */_Bool) ((3103189207U) | (((/* implicit */unsigned int) ((/* implicit */int) ((3103189218U) < (3103189219U)))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((((((_Bool)1) || (((/* implicit */_Bool) 1191778074U)))) ? (min((7847438287730848627LL), (((/* implicit */long long int) 15U)))) : (((long long int) (unsigned short)57344)))) != (((/* implicit */long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_8)), (4761840626400260781LL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1191778124U)) : (5161771602187734616LL)))))) ? (((unsigned long long int) arr_11 [i_3])) : (((((/* implicit */_Bool) 3103189226U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_3] [i_3])), (4266825131270843429LL)))) : (18446744073709551600ULL))));
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)2409)) : (((/* implicit */int) var_0)))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_9 [i_3])))) ? (((((/* implicit */_Bool) 1191778067U)) ? (arr_10 [i_3] [i_4 + 1]) : (((/* implicit */int) (unsigned short)2398)))) : (((/* implicit */int) max(((unsigned short)2047), (((/* implicit */unsigned short) (short)-30441))))))) - (2035314050)))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_23 [i_3] [i_6] [i_5 - 3] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7847438287730848606LL)) ? (-7847438287730848583LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((((/* implicit */_Bool) arr_19 [i_3] [(_Bool)1] [i_5] [i_6])) || (((/* implicit */_Bool) var_0))))));
                                var_16 &= ((/* implicit */unsigned int) min((-5161771602187734611LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (unsigned short)65516))), (min((((/* implicit */unsigned int) arr_20 [i_3] [i_4] [i_5] [i_4] [i_5])), (3103189222U))))))));
                                var_17 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
