/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219790
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
    var_19 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) ((signed char) max((arr_4 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_22 += ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((-1671162358947823142LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    var_23 = arr_6 [i_0] [i_1] [i_4] [i_0];
                    arr_14 [i_1] [i_0] [12ULL] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [(signed char)1] [i_1] [i_4]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2181))));
                        arr_17 [i_0 + 1] [i_0] [i_4] [i_0] = ((((/* implicit */int) arr_0 [i_0] [i_4 - 2])) != ((~(((/* implicit */int) arr_0 [i_0 - 1] [i_4])))));
                        var_25 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                    }
                }
                var_26 &= ((/* implicit */unsigned char) (signed char)52);
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (unsigned short)63362)))))));
    var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-52))));
}
