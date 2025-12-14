/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44947
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_4))))), ((-(6329299974692882782LL)))))) ? (((((/* implicit */_Bool) -1476147617)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) (signed char)-118)), (((long long int) (unsigned char)162))))))));
                var_14 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 2])))), ((!(((/* implicit */_Bool) (signed char)117))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (((((((/* implicit */int) (short)15)) != (((/* implicit */int) (unsigned char)230)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) (signed char)120)))))) : (((((/* implicit */_Bool) (unsigned short)50447)) ? (14277423112164700526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44067)))))))));
                var_15 = ((/* implicit */signed char) (~(arr_0 [i_0] [i_0])));
                var_16 ^= ((/* implicit */_Bool) (short)-9705);
            }
        } 
    } 
}
