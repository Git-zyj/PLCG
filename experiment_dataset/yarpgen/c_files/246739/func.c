/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246739
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((min((var_12), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2])))), (min((407706805U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0]))))));
                    arr_7 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)1] [i_0])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (((((/* implicit */_Bool) 8034928131675535681LL)) ? (4050351694268920077LL) : (8034928131675535681LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)0] [i_1] [i_1])) ? (((/* implicit */int) (short)8956)) : (((/* implicit */int) var_4))))) ? (min((((/* implicit */int) (signed char)-117)), (arr_5 [i_0] [i_2]))) : (((/* implicit */int) max((arr_0 [i_0]), ((unsigned short)14029))))))) : (max((var_12), (1681490803U)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((short) var_17));
                        var_21 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_2 [13ULL] [i_3])))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3 + 1]))))) ? (((/* implicit */int) (unsigned short)14029)) : ((+(((/* implicit */int) arr_10 [7LL] [i_3] [i_0] [i_3 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4] [i_5]);
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)127))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((unsigned int) ((long long int) max((((/* implicit */long long int) var_6)), (0LL))));
}
