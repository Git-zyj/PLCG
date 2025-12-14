/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236717
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) 139006448U))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)-24)))) == (((63) * (63))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40404)))))))) : ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)63))))))) % ((~(arr_11 [i_0] [i_1] [i_2 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)25147);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) 3167106293U)) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_5])) : (-9148017552294740275LL))))) & ((~(arr_16 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))));
                        var_16 = ((/* implicit */signed char) (-(((arr_16 [(_Bool)1] [i_1] [i_2] [i_2 + 1]) % (arr_16 [i_1] [i_2] [i_2] [i_2 - 1])))));
                    }
                    arr_19 [i_1] [i_1] [i_2] = ((/* implicit */short) (~((-(((/* implicit */int) ((((/* implicit */long long int) arr_1 [12] [i_1])) == (arr_16 [i_2] [i_2] [i_1] [(_Bool)1]))))))));
                    arr_20 [i_1] [i_2] = ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2])) != ((-(((/* implicit */int) (_Bool)1))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1572864U)) ? (((/* implicit */int) (unsigned short)8068)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-18)) < (((/* implicit */int) (unsigned short)40389))))) : ((-(((/* implicit */int) (signed char)94)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (signed char)-109);
    var_18 = ((/* implicit */_Bool) ((((((var_12) << (((var_11) + (1668682880))))) >= (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8078)))))))) ? ((~(var_11))) : (((/* implicit */int) var_4))));
}
