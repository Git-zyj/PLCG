/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213772
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
    var_17 = ((/* implicit */unsigned char) 4294967295U);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 1940776518)) == (6997556596773298237ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)22336)), (1183052455)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (366346948U)))))) : (3295647202776295890ULL)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 13659049089909650193ULL);
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)42999)) ? (7898092849178607067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12609))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (4420727728750423872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))) ? (((((/* implicit */_Bool) 913590881U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33883))))) : (((/* implicit */unsigned long long int) -1940776518))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned char)237)))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) >> (((3470166276933413909ULL) - (3470166276933413867ULL)))))) || ((!(((/* implicit */_Bool) 1373382442389279481ULL)))))))));
                    arr_15 [i_1] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0] [(_Bool)1]);
                }
            } 
        } 
    }
}
