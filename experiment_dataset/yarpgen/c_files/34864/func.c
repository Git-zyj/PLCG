/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34864
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_6 [13ULL] [17] [13ULL] |= ((/* implicit */long long int) var_4);
            var_12 *= ((/* implicit */short) (((~(((((/* implicit */long long int) var_6)) | (arr_5 [i_1 - 1] [i_0 - 1]))))) | (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_6)) : (var_3))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_1))))))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+(min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_2))))))))));
                    var_14 = ((/* implicit */_Bool) arr_5 [i_0] [16]);
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) var_4))));
                        arr_21 [i_0] [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                        var_16 = ((/* implicit */unsigned long long int) (unsigned short)20356);
                        var_17 = ((/* implicit */_Bool) max((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_4])), (var_0)))))))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) var_11))) : (arr_8 [i_5 + 1] [i_5 - 1]))) >= (((/* implicit */int) var_8))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20371)) + (((/* implicit */int) (_Bool)1))))) : ((+(min((var_3), (((/* implicit */unsigned int) var_10))))))));
    }
    var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20356)) << (((((/* implicit */int) (unsigned short)20358)) - (20350)))));
}
