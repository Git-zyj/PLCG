/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44386
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
    var_15 |= max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 14054163567258320892ULL)) || (((/* implicit */_Bool) (unsigned char)193))))) != (((/* implicit */int) ((short) var_11)))))), (max((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (short)32767))))), (((14054163567258320884ULL) - (((/* implicit */unsigned long long int) var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [(unsigned char)11]) & (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(unsigned char)0]))) : (max((arr_2 [i_0] [i_1]), (var_0)))))));
                var_17 *= ((/* implicit */short) min((4392580506451230748ULL), (4392580506451230696ULL)));
                arr_4 [i_0] [11] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [(_Bool)1]), ((short)32767))))) + (-2238607645506455902LL))), (((/* implicit */long long int) ((((unsigned int) (unsigned char)251)) | (min((var_13), (((/* implicit */unsigned int) var_6)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_18 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)5)) + (var_14)));
                    arr_8 [i_0] [i_1] [i_2 + 1] |= ((/* implicit */long long int) var_6);
                }
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) max(((+(((/* implicit */int) var_10)))), ((+(((/* implicit */int) ((short) (_Bool)1)))))));
    var_20 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_11)) ? (-2238607645506455914LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
}
