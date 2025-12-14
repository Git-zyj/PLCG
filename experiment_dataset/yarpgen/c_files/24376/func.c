/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24376
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (~((~(var_1)))));
        arr_2 [i_0] = ((/* implicit */signed char) min((10U), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23015)))))) * (((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) (short)23014)) : (((/* implicit */int) var_13)))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)157)), ((short)-18953))))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_0] [i_0])))))) ? (((((_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned char)85))))) : (((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)157))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) var_9))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1 - 1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_8 [i_2] [i_2] [i_1 - 1] = ((/* implicit */_Bool) (+(var_7)));
            arr_9 [i_1] [i_2] [(signed char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_2])) ? (arr_0 [i_1] [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) (short)22987)))))));
        }
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_2), (var_12)));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_17 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4])) ? ((+(((long long int) arr_11 [i_3])))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)9)), (arr_12 [i_4] [i_4])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (var_3))))))))));
                                var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_3 - 1])) : (((/* implicit */int) arr_18 [i_3 + 1] [i_4] [i_3] [(signed char)2])))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((-3006717985774547400LL), (((/* implicit */long long int) (short)32767))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))) : (((min((((/* implicit */unsigned long long int) arr_5 [i_3])), (1551912084847572264ULL))) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-51)), (1944734087U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) (signed char)-63)))));
    }
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) 3529801849186954120LL)) ? (4305993481461405855LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_0))));
}
