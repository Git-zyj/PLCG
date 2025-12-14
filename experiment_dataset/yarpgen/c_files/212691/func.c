/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212691
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((unsigned int) 2217566454U);
        var_16 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-8445351517456416032LL)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (unsigned short)65519))));
            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((long long int) (unsigned short)65519)) : (max((arr_1 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) : (arr_5 [i_0] [i_1] [i_1]))))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((int) arr_8 [i_2])), (((/* implicit */int) var_15))));
                var_20 = var_4;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) (+(8445351517456416004LL))))), ((unsigned char)0))))));
        var_22 = ((unsigned long long int) 35924006);
        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_11 [i_4]), (var_14))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((-(((unsigned int) 642546218)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 642546205)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49315))) : (8445351517456416032LL))))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_25 [10U] [10U] [10U] &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (+(-1734147190065545870LL)))) ? (((/* implicit */int) ((unsigned short) 292865885))) : (((/* implicit */int) var_7)))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_26 = ((short) (+(-1188560231)));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (-(-8445351517456416032LL))))));
                            var_28 = ((/* implicit */long long int) 16847358U);
                        }
                        arr_28 [i_8] [i_6] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) arr_16 [i_5 + 2] [i_7 - 1] [i_7]);
                        arr_29 [i_8] [i_7] [i_6] [i_5] [i_5] = ((unsigned int) ((((/* implicit */_Bool) arr_26 [i_8] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5 + 2])) ? (arr_26 [i_8] [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_5 - 1]) : (arr_26 [i_8] [i_8] [i_8] [i_7 - 1] [i_7 - 1] [i_5 + 3])));
                        var_29 -= ((/* implicit */unsigned short) ((int) (signed char)-1));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) ? (17566087085774698434ULL) : (((/* implicit */unsigned long long int) -292865885))));
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                    }
                    var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (var_3) : (2097151U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (((arr_16 [i_5 - 1] [i_7 + 1] [i_7]) ^ (((/* implicit */unsigned long long int) var_14))))));
                }
            } 
        } 
    } 
}
