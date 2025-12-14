/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238062
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_9) <= (((/* implicit */long long int) 442252809U)))) ? (-6574722592259017029LL) : (((long long int) var_9))))) ? (((((((/* implicit */long long int) var_4)) <= (-6574722592259017022LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 281838908U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 564133674U)) | (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(var_3))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((28859609U) >> (((/* implicit */int) var_7)))) >> (((/* implicit */int) ((((((((/* implicit */int) var_5)) + (2147483647))) >> (((6574722592259017042LL) - (6574722592259017014LL))))) <= (((/* implicit */int) max((var_8), ((_Bool)1)))))))));
                var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) (signed char)-73))) ? (min((((/* implicit */unsigned int) 1398351827)), (28859630U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (short)-13693)) <= (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1398351828)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9192))))) ? (((((/* implicit */_Bool) 2101987359U)) ? (((/* implicit */int) arr_1 [i_2 + 2])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 2101987359U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)23369))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6574722592259017022LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_5 - 1] [i_2 + 2] [i_4])) >> (((/* implicit */int) arr_4 [i_5 - 1] [i_5]))))) : (((unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_15 [i_5 + 1] [i_3] [i_2]))))) <= (arr_6 [i_2])))), (((((long long int) (_Bool)0)) | (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_2]))))))))))));
                    }
                } 
            } 
        } 
    }
    var_17 |= var_2;
}
