/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35929
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((6432069759406820375LL) - (var_18))) >> (((-2991691453870374178LL) + (2991691453870374204LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (7781222417636213365LL) : (-3776271475177975495LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_0]))))))));
                            var_20 |= ((/* implicit */signed char) -2503257644466512564LL);
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), ((+(arr_10 [i_1 + 1] [i_0] [i_0] [i_0])))))) ? (506092904521063252ULL) : (min(((+(arr_4 [i_1]))), (min((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])), (var_14))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-14)) ? (5746863980924010326LL) : (-3776271475177975495LL))) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_23 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_17))))));
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) 140737488355264LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((-2503257644466512569LL), (5830376599808376091LL)))) || ((_Bool)1)))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (unsigned short)21952)), (0ULL)))))));
                }
            } 
        } 
    } 
}
