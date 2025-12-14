/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192324
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
    var_11 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-1)))) == ((-((~(((/* implicit */int) var_8))))))));
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (1073741824U) : ((((_Bool)1) ? (0U) : (var_7))))) / ((+(max((4294967295U), (32768U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 &= (unsigned short)15360;
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [16U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ? (17592051826688LL) : (arr_15 [i_0] [i_0] [i_0] [16] [i_4])))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_0 [8])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                                arr_19 [i_0] [(signed char)2] [(_Bool)1] [i_1] [16] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) ((unsigned short) 8445901296829793596LL)))), (((((((/* implicit */_Bool) -4659885051182800852LL)) ? (-6884653156361577089LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4 + 1]))))) | (((-4531957305826074216LL) | (131071LL)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1807981545)) / (((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (max((7673645450239218202ULL), (((/* implicit */unsigned long long int) var_5))))))));
            }
        } 
    } 
}
