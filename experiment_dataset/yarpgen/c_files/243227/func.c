/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243227
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-27343)), (798339559)))) ? (798339546) : (798339546)))) ? (((/* implicit */unsigned long long int) var_4)) : (max((((/* implicit */unsigned long long int) var_5)), (4211651104102275038ULL))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) (unsigned char)77)) + (((/* implicit */int) (short)4081))))) & (((/* implicit */long long int) (~(var_4))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) 798339559)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((4211651104102275041ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))) ? (7320389157581162912LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        var_12 += ((/* implicit */long long int) ((_Bool) 7320389157581162912LL));
        arr_6 [i_1] = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= (var_4)));
            arr_9 [2U] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((long long int) var_1));
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((arr_7 [i_1 - 2]) + (arr_7 [i_1 + 1]))))));
            var_15 = ((((/* implicit */long long int) ((/* implicit */int) (short)4081))) != (-957235440676412470LL));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                var_16 *= ((/* implicit */_Bool) ((signed char) 14235092969607276575ULL));
                arr_12 [i_1 - 1] [i_2] [i_3 + 2] = ((/* implicit */unsigned int) 798339547);
                var_17 = ((/* implicit */_Bool) ((14235092969607276578ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_13 [i_2] = ((/* implicit */unsigned long long int) (+(4048992401845463286LL)));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (arr_15 [i_2 - 1]))))));
                var_19 = ((/* implicit */unsigned long long int) 4294967288U);
                var_20 = ((/* implicit */short) 4026531840U);
                var_21 |= ((((/* implicit */_Bool) ((short) 4211651104102275027ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-4044799806080020044LL));
            }
            for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                arr_19 [i_5] [(signed char)10] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-4066))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2249892070645052185ULL))))));
            }
        }
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_23 -= ((/* implicit */_Bool) ((min((((/* implicit */int) arr_4 [(signed char)3] [(short)1])), (((var_4) - (((/* implicit */int) (short)1)))))) ^ (var_4)));
        arr_22 [i_6] = ((/* implicit */signed char) (_Bool)1);
        var_24 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (_Bool)0)))));
    }
    var_25 = ((/* implicit */short) (~(((/* implicit */int) min(((short)7896), (((/* implicit */short) (signed char)43)))))));
}
