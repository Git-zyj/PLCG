/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27595
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
    var_18 = ((/* implicit */long long int) (~(var_6)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_3 [i_2])))) ? (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) (unsigned char)127))))) : (((/* implicit */int) var_1)))) >> ((((((!(((/* implicit */_Bool) 0ULL)))) ? (((5863098893239671406ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) : (((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))) - (5863098893239671399ULL)))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) (unsigned short)29272)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)0)))))) : (((((4087919582100450548ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned long long int) ((long long int) (unsigned short)60658)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(var_2)));
}
