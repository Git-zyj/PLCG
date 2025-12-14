/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37119
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
    var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10020))) : (2532024092U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) 2532024107U))) : ((-(((/* implicit */int) arr_5 [i_1]))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned short) (+(1762943209U)));
                    var_13 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1762943212U)) < (4323455642275676160ULL))))));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)124)), (var_8)));
                    var_14 = ((/* implicit */unsigned short) (((~(((var_8) + (((/* implicit */unsigned long long int) arr_2 [i_0])))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >> (((arr_8 [i_3]) - (3251746935U))))) << (((((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (4092985035U))) - (4092985031U))))))));
                }
                arr_13 [i_0] = ((/* implicit */int) (+(max((arr_8 [i_0]), (arr_8 [i_1])))));
                arr_14 [i_0] = (-(((/* implicit */int) var_9)));
                var_15 = ((/* implicit */long long int) (-(4092985035U)));
            }
        } 
    } 
    var_16 += ((/* implicit */signed char) ((unsigned short) -521556745564651470LL));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) var_4)), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (201982275U)))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((+(var_8)))));
}
