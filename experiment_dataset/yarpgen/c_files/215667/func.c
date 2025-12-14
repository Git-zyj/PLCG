/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215667
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max(((_Bool)1), ((_Bool)1))))) ? ((~(((((/* implicit */_Bool) 698322304)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) var_13)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(short)14] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)171)) ^ (((/* implicit */int) (unsigned short)59557))));
                                arr_15 [i_0] [i_0] [i_2 + 2] [i_2] [i_0] = ((/* implicit */_Bool) (+(2147483647)));
                                arr_16 [i_0 - 1] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1336777003U), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) % (var_3)))))) ? (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) : (max(((+(((/* implicit */int) arr_3 [(signed char)9])))), (((int) var_5))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4611686018427387904LL)) & (7674827522621049702ULL)));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-30630)) ? (261671206469554077ULL) : (((/* implicit */unsigned long long int) -1))))))) ? (((((arr_6 [13U] [i_0 - 1] [i_0 - 1]) & (((/* implicit */long long int) 2147483647)))) >> (((var_0) - (16251422529848310241ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_2 - 1])), ((short)32752)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2664187865737760950LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))))))))))));
                    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_6 [19LL] [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)0))))))) : (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) <= (var_0))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)247)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) (signed char)123)) >= (var_8))))))) ? (min((((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_11))))), (var_12))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-18160)) : (((/* implicit */int) (unsigned char)65)))) - (((/* implicit */int) ((((/* implicit */_Bool) 93169205U)) && (((/* implicit */_Bool) -4611686018427387897LL))))))))));
}
