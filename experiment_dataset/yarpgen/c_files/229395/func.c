/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229395
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
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))));
    var_14 &= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_1)) ? (-766091537) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_3)))))), ((~((~(var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) 766091536)) || (((/* implicit */_Bool) arr_4 [i_1]))))))));
                var_16 = -646949843;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [9] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (arr_9 [i_3 - 2] [i_2] [i_1 - 1])))))) ? (9926574115612722906ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1])))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) 766091535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_5 [i_0] [i_1] [i_2] [0ULL])))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-31193);
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_8 [i_0] [i_1 + 1] [(short)10])))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)28987)) : (((/* implicit */int) arr_7 [i_0]))))))), (((((/* implicit */_Bool) var_8)) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))) : (arr_5 [i_0] [i_1] [i_0] [i_1]))))))));
            }
        } 
    } 
}
