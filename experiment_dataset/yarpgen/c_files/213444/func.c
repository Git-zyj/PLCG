/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213444
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29841)) ? (((((unsigned int) var_11)) & (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)29841)) == (var_8))) && ((!((_Bool)0)))))))));
    var_16 |= ((/* implicit */unsigned int) 9223372036854775807LL);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned short)29841)) != (((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35694)) & (-932355352))))))) % (((((/* implicit */_Bool) max(((unsigned short)29825), ((unsigned short)35694)))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_8) : (((/* implicit */int) var_10)))) : (max((((/* implicit */int) (short)0)), (-1242338431)))))));
                            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (unsigned short)35695)) - (((/* implicit */int) var_2)))), (var_9))), (((((((/* implicit */int) max((((/* implicit */short) (signed char)-17)), ((short)-4)))) + (2147483647))) >> (((max((var_11), (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_1] [i_2] [i_3])))) - (4174027147U)))))));
                            var_19 = ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3]))) - (((long long int) (unsigned short)29841)))) == (((/* implicit */long long int) ((/* implicit */int) ((((338332378) >> (((/* implicit */int) var_5)))) <= (((/* implicit */int) (short)32767)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (unsigned char)185)))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_6))) - (16666LL)))));
                arr_10 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((max((((/* implicit */unsigned long long int) (short)0)), (11147745612044201646ULL))) - (max((16166777488044679460ULL), (((/* implicit */unsigned long long int) var_11)))))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)35694)) << (((((/* implicit */int) (unsigned char)91)) - (88))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (short)15566))))) ? (((/* implicit */int) (signed char)-2)) : (((((/* implicit */int) (signed char)1)) & (((/* implicit */int) (unsigned short)51244))))))));
                    var_22 = ((/* implicit */unsigned long long int) (short)-7607);
                    arr_14 [i_0] [(unsigned char)8] [i_4] [i_4] |= ((/* implicit */short) ((((((/* implicit */int) (short)0)) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (short)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((0), (((/* implicit */int) (unsigned short)51244))))))))));
                    arr_15 [(signed char)6] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-82);
                }
            }
        } 
    } 
}
