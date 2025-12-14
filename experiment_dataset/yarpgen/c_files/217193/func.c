/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217193
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
    var_11 = ((/* implicit */unsigned short) min(((signed char)77), (((/* implicit */signed char) (_Bool)0))));
    var_12 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (7441708306146164537ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 ^= min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))))), (((unsigned long long int) 1883566406773421430LL)));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((1ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1]))))))), (((/* implicit */unsigned long long int) max((arr_4 [i_1 - 3]), (((/* implicit */int) max((var_4), (arr_1 [i_0] [i_1]))))))))))));
                var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_6)))))) + (((/* implicit */unsigned long long int) (+((~(arr_5 [i_1] [i_1] [i_0]))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1520461335)) ? (((/* implicit */int) (short)-10341)) : (614189237)))) ? (var_5) : (((/* implicit */unsigned long long int) var_2)));
                                var_16 = ((/* implicit */unsigned char) arr_6 [i_0] [i_2]);
                                arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (9490061942586264163ULL) : (4979884404797350534ULL)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)65524))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) || (((/* implicit */_Bool) (unsigned char)0))))), (((((/* implicit */_Bool) 5926673550021642701ULL)) ? (((/* implicit */int) (short)4079)) : (((/* implicit */int) (signed char)19))))))) : (((var_5) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (var_7)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_4 [i_1]))) + (((((/* implicit */int) (_Bool)1)) | (((arr_4 [22LL]) / (1249400741)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (unsigned char)0))));
                    }
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13370514276816107063ULL)) ? (((long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */long long int) max((24), (-1))))));
    var_21 = ((/* implicit */signed char) max((var_3), (((((/* implicit */_Bool) ((13370514276816107054ULL) % (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) == (var_7)))))))));
}
