/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232210
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14543983489511372321ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_2)))) ? (max((((/* implicit */long long int) ((unsigned char) (unsigned short)8281))), (max((4274028284949693271LL), (((/* implicit */long long int) arr_3 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */long long int) (~(((int) (unsigned short)57269))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -4274028284949693284LL))))), ((~(((var_2) / (((/* implicit */long long int) var_12))))))))));
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((_Bool) -4274028284949693282LL))) < (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned short)28448))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_1);
    var_16 = ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
}
