/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31556
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) (signed char)31)) / (((/* implicit */int) (unsigned char)150)))))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-120)), ((unsigned short)39020))))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 14749146316549973778ULL)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) (signed char)-126))));
                    var_19 = ((/* implicit */_Bool) max((max((10ULL), (((/* implicit */unsigned long long int) (signed char)-121)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)33), ((signed char)-13)))) == (((/* implicit */int) (signed char)-31)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((14749146316549973778ULL), (((((/* implicit */_Bool) 13083559471171011225ULL)) ? (((/* implicit */unsigned long long int) -8611297577367084555LL)) : (11544063591648110353ULL)))))) ? (((((/* implicit */long long int) 2037460150U)) & (-8611297577367084555LL))) : (((/* implicit */long long int) max((((3648891602U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)9)))))))));
                                var_20 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (short)(-32767 - 1))), (-3831105275163974354LL))))), (((/* implicit */long long int) max((((/* implicit */int) (short)-16938)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)35728)))))))));
                                arr_14 [i_1] [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((max(((((_Bool)1) ? (3697597757159577821ULL) : (16342257579604748589ULL))), (((/* implicit */unsigned long long int) (unsigned char)143)))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) | (-1975007536341474859LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = max((((/* implicit */unsigned long long int) ((max((2057983279648270344ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)100), ((signed char)-93)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3697597757159577821ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)83))))), (max((14749146316549973778ULL), (((/* implicit */unsigned long long int) (signed char)-110)))))));
}
