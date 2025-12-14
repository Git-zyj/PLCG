/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208007
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-64))))));
                        var_10 = ((/* implicit */signed char) ((((_Bool) (short)-56)) ? (((/* implicit */int) (short)46)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)69)) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
        var_11 = ((unsigned int) (~(var_3)));
        var_12 = ((/* implicit */unsigned long long int) (~(var_5)));
    }
    var_13 = ((/* implicit */unsigned int) (-((-(var_5)))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)55084)))))))), (((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)58))) % (511432689U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            {
                arr_13 [i_4] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (short)-64)) / (((/* implicit */int) (short)80)))));
                arr_14 [i_4] [i_4] [(unsigned short)17] = ((/* implicit */int) max(((((-(var_4))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)3)), (1615007704U)))))), (max((var_4), (var_0)))));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) & (min((3346163107U), (((/* implicit */unsigned int) var_6)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 2])) != ((-(((/* implicit */int) (unsigned short)33285))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29494)) & (((/* implicit */int) (short)58))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_4] [i_5] [i_4] [(short)22]))))) : (arr_17 [i_7 - 1] [i_5 - 1])));
                        var_17 = ((/* implicit */unsigned short) ((3346163120U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)384)))));
                    }
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)68)) > (((/* implicit */int) (short)-7961)))))));
                        arr_23 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (-(-2609820915198214287LL)))), (((((/* implicit */_Bool) 16368ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-91), (var_2)))))));
                    }
                }
                arr_24 [7ULL] = ((/* implicit */int) 4U);
            }
        } 
    } 
}
