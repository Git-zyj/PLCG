/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222361
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((unsigned short) ((262143U) & (((/* implicit */unsigned int) 1220830961)))));
                                var_17 = ((/* implicit */unsigned short) arr_9 [i_4] [i_1] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = (+(((/* implicit */int) (short)-11019)));
                }
                var_18 = ((/* implicit */signed char) arr_3 [i_1]);
                var_19 = ((/* implicit */signed char) ((((_Bool) (-(3252794074U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) ((short) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) -326555338);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((14711223711635789595ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)8251))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32512))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_15))))) ? (max((3448144830U), (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (short)16383)))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (short)-7726)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)49221)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))));
}
