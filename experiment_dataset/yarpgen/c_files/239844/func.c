/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239844
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) -780747911)) ? (((unsigned int) 15776471548852534348ULL)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_13)) : (arr_3 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(var_4))))))) : (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned char) var_2))))) ? (min((arr_3 [i_1] [i_1]), (var_11))) : (((/* implicit */unsigned int) var_7)))))))));
                    var_21 = var_3;
                    var_22 += arr_8 [9LL] [9LL] [i_2] [9LL];
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min(((!(((/* implicit */_Bool) -1879149270993039959LL)))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (2384375124804944824ULL)))))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (~(2577753143U)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(58720256)))) ? (((var_14) ? (var_16) : (var_5))) : (((((/* implicit */long long int) var_10)) | (var_16))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1072693248U)) && (((/* implicit */_Bool) var_19))))))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_16 [6LL] [i_4] [6LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1155173764221476301LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) (!(((/* implicit */_Bool) -1216575750)))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)1]))) : (var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-109)) ^ (((/* implicit */int) min((var_12), (((/* implicit */short) (unsigned char)255)))))))))))));
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned long long int) (unsigned char)87);
}
