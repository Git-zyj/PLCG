/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36187
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
    var_17 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)35668))))) : (((((/* implicit */_Bool) var_10)) ? (12102887876307696670ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)47695)))) | (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (unsigned short)65531)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_18 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)47676)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) < (558426651U))))))), (((((/* implicit */_Bool) (signed char)61)) ? (((((/* implicit */_Bool) -320386814997677421LL)) ? (3767143872U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50)))))));
                    var_19 = ((/* implicit */int) max(((+(max((((/* implicit */long long int) var_10)), (var_13))))), (max((4537888350474195892LL), (((/* implicit */long long int) 3736540645U))))));
                    var_20 = ((/* implicit */short) min((var_20), ((short)32766)));
                }
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3767143872U)) ? (((/* implicit */int) (short)-1024)) : (((/* implicit */int) (unsigned char)132)))))));
                                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_12 [i_0] [i_0 + 3] [i_1] [i_3] [i_4] [i_4] [i_1]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)17816)) : (((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)62))));
            }
        } 
    } 
}
