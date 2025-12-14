/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249214
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((2251795518717952ULL) - (((/* implicit */unsigned long long int) 3243094339935652465LL))))))) ? (((((/* implicit */_Bool) ((18398111312986976581ULL) + (2251795518717952ULL)))) ? ((+(18444492278190833662ULL))) : ((+(9188762597310810990ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9223372036854775807LL))))));
                    var_18 &= ((/* implicit */unsigned int) 14193860930738976146ULL);
                    arr_10 [i_2] [i_0] [(unsigned char)7] = ((/* implicit */unsigned char) 9188762597310810974ULL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] [3U] = ((/* implicit */unsigned short) min((14193860930738976146ULL), (((((/* implicit */unsigned long long int) ((unsigned int) 10710907468561074717ULL))) * (9257981476398740625ULL)))));
                                var_19 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) (short)32745))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) + (6738397410749488292LL)))))), (max((((/* implicit */unsigned long long int) (unsigned char)24)), (9188762597310810984ULL)))));
}
