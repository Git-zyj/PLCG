/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210571
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
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61440))))) ^ (((((/* implicit */int) (unsigned short)59911)) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_17) : (18446744073709551615ULL)))))))));
    var_19 = ((/* implicit */unsigned char) 17211051099342227174ULL);
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_5 [(short)15] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_3] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (_Bool)1)) : (-1996722425)));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(unsigned short)14] [(unsigned short)0] [(_Bool)1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_3] [i_2 - 4])) : (((/* implicit */int) (_Bool)1))));
                        arr_13 [i_3] [16U] [11ULL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)7))));
                    }
                    var_23 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)15] [i_0] [10ULL] [(_Bool)1] [14] [i_2]))) : (min((((/* implicit */unsigned long long int) var_3)), (var_5)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_8);
                        var_25 = ((/* implicit */int) (~(var_5)));
                    }
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */_Bool) 2908602451U);
}
