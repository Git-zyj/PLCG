/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193232
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
    var_11 = ((/* implicit */unsigned long long int) ((min((4294967278U), (((/* implicit */unsigned int) -329221832)))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) min((var_12), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 10293404948977302691ULL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
        arr_3 [(unsigned short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) & (1538192396U)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_13 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)0))))));
            var_14 ^= arr_8 [i_1] [i_2];
            var_15 = ((/* implicit */_Bool) max((var_15), ((_Bool)1)));
            arr_9 [i_1] [i_2] [i_2] = ((unsigned long long int) 218178989);
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) arr_7 [i_3] [i_1]))))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
            {
                arr_14 [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1538192396U)))) || (((/* implicit */_Bool) var_7))));
                arr_15 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)0)))));
                arr_16 [i_4] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 218178984)) || (((/* implicit */_Bool) var_10))));
                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)28200)))))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                arr_19 [3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(325439182)))) ? (arr_11 [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24724))) : (arr_10 [i_5] [i_1]))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) (unsigned short)13416)) ? (arr_17 [i_5] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50853)))))));
                var_19 = ((/* implicit */short) var_1);
            }
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */int) arr_1 [i_1] [i_3])) : (((/* implicit */int) arr_1 [i_3] [i_1]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_25 [i_1] [i_6] [(signed char)21] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9129248229922005275LL) : (((/* implicit */long long int) 1538192396U))))) ? ((-(6328859872634884911ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_20 = ((/* implicit */short) -42854020);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -329221844)) ? (var_4) : (((((/* implicit */_Bool) (short)2950)) ? (1320300257) : (var_9)))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_28 [i_8] [i_8] = ((((((((/* implicit */_Bool) 134217727)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) max(((short)-2048), ((short)5058)))))) > (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_8] [i_8])) : (var_9))), (((/* implicit */int) arr_12 [i_8] [i_8])))));
        var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 31457280U)) ? (((/* implicit */int) (short)-5313)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_8] [i_8])), (var_3)))))), (((((/* implicit */int) ((((/* implicit */_Bool) 1538192396U)) || (((/* implicit */_Bool) -1303328163))))) << (((arr_17 [i_8] [i_8]) - (212043239U)))))));
    }
    var_23 = ((/* implicit */short) 42854019);
}
