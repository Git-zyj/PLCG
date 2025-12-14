/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236108
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
    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) max((max((((/* implicit */short) var_7)), ((short)3588))), (max((((/* implicit */short) var_0)), (var_9))))));
    var_18 ^= ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */int) (signed char)0)), (var_16))) - (((/* implicit */int) max(((signed char)-11), ((signed char)56)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))))));
                var_19 = ((/* implicit */signed char) var_1);
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_3 [i_1] [i_1] [i_1]))), (((long long int) max((arr_1 [i_1]), (arr_3 [i_0] [i_0] [(unsigned char)6]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (+(max((((/* implicit */long long int) ((1998148406) << (((3739410585U) - (3739410585U)))))), (max((257698037760LL), (((/* implicit */long long int) 1562664230))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (short)27178)) : (((/* implicit */int) (_Bool)0)))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_16 [i_0] [i_1] [2ULL] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_7))))))), (((unsigned short) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)183)))))));
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (max((((arr_3 [i_0] [i_3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (555556708U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2154593292U)) || (((/* implicit */_Bool) var_7)))))))));
                            }
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)35384)) : (((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) (_Bool)0))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (_Bool)1);
}
