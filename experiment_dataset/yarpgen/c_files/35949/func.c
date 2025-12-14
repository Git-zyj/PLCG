/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35949
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) / (var_15)));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (1620171281605487276ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)5)), (2909613588U)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((arr_3 [(_Bool)1] [i_1]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) max(((unsigned short)39127), ((unsigned short)28762)))) : (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65534)) : (var_10))) : (((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_15);
                                arr_16 [9ULL] = ((/* implicit */int) ((short) min((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0] [i_0])), (44177066))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) (short)1024))) | (974552544871535825LL))))) >> (((max((max((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_0] [i_0])), (arr_6 [(signed char)3] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9014164220136875223LL)) ? (((/* implicit */int) (unsigned short)36773)) : (((/* implicit */int) (unsigned short)39151))))))) - (11179551459546302395ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_15);
}
