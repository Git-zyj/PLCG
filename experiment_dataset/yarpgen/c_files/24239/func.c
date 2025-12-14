/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24239
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) 0U);
                                arr_13 [i_0] [i_2] = ((/* implicit */signed char) ((-1098776890143592209LL) / (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)227)), (var_11))))));
                                var_16 += ((/* implicit */unsigned int) (+(var_12)));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1] [i_2])) ? (min((1098776890143592208LL), (var_0))) : (((/* implicit */long long int) arr_5 [i_0]))))), (max((((/* implicit */unsigned long long int) (signed char)122)), (var_14))))))));
                            }
                        } 
                    } 
                } 
                var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-26719)) ? (7864144756412027511LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2661010874626132745LL)) ? (1098776890143592209LL) : (1098776890143592208LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)28950))) : (6760628557254435440LL))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_6]))))))) << (((((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_6])) ? (((/* implicit */unsigned long long int) arr_15 [i_6] [i_6 + 1] [i_6 + 1] [i_6])) : (var_14))) - (1150520158ULL)))));
                            arr_20 [i_6 + 1] [i_5] [i_1] = (!(((/* implicit */_Bool) -1098776890143592209LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 897349354U)) ? (-9223372036854775804LL) : (((/* implicit */long long int) 897349336U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) >= (((((/* implicit */long long int) var_13)) % (var_0))))))) : (((((((/* implicit */_Bool) -2729980526749185537LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1098776890143592209LL))) | (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) -2147483643))))))));
}
