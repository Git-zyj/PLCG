/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45174
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
    var_11 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(short)4] [i_0])) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_2))))) & (((((/* implicit */_Bool) var_6)) ? ((+(arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        var_13 = ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max(((short)1494), ((short)1474)))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_14 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_7) >> (((/* implicit */int) var_4))))) <= (((((/* implicit */_Bool) arr_7 [(signed char)5] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4046092712440557095ULL))))))));
            /* LoopNest 3 */
            for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (arr_10 [i_1] [(_Bool)1] [3] [i_4])));
                            arr_19 [5ULL] [5ULL] [i_4] = ((/* implicit */_Bool) (signed char)-65);
                            var_16 -= ((/* implicit */signed char) (~(arr_0 [i_3 + 1])));
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)72))) % (var_7))) - (41LL)))));
        }
        var_17 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_1] [(unsigned char)9] [(unsigned short)12] [(unsigned short)12])) ? (14400651361268994530ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4908)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_1 - 1])))))));
        var_18 = ((/* implicit */int) (_Bool)1);
    }
    var_19 = ((/* implicit */unsigned short) var_9);
}
