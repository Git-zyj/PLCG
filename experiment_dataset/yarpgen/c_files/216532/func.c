/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216532
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) (unsigned short)39077)) ? (145993939684915011LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (arr_5 [i_0] [i_0] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (2507444215U)))) : (var_9))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) * (((arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 1]) - (arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) var_6);
                                var_16 = ((/* implicit */_Bool) max((var_16), (arr_1 [i_1])));
                                var_17 = ((/* implicit */unsigned char) (+(min((3217697720U), (arr_8 [i_2 - 2] [i_2 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */long long int) arr_3 [i_0]);
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) max(((short)0), (((/* implicit */short) arr_9 [i_0]))))) >> (((max((arr_4 [i_0] [i_5]), (((/* implicit */unsigned long long int) 349988520U)))) - (16866272341001846207ULL))))))));
            var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40731))) - (((min((3944978776U), (((/* implicit */unsigned int) arr_14 [i_0] [i_0])))) + (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_5])))))))));
        }
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) arr_20 [i_6] [i_6]))))), (2097864992636245055ULL)));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_6))))) != (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)0))))));
    }
}
