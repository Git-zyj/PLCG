/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195910
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) 13087643930901121184ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(var_4)));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (((+(((((/* implicit */long long int) ((/* implicit */int) (short)19402))) + (arr_7 [(short)7] [(short)7]))))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1])), (62914560U)))) ? (((3388189401785431012LL) + (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_9 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (var_12)))) ? (((((/* implicit */_Bool) (unsigned char)162)) ? (arr_6 [i_1 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (arr_6 [i_1 + 2] [i_1 + 2]))), (((/* implicit */unsigned int) 1363323942))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) - (arr_6 [i_1] [i_2]))) - ((+(var_4)))))), (((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */long long int) 4232052730U)) : (-720405339797079303LL))))))));
            var_18 += min((((/* implicit */unsigned int) arr_4 [i_2])), (min((arr_12 [i_1] [3U] [i_1 + 1]), (((/* implicit */unsigned int) (signed char)60)))));
            var_19 |= ((/* implicit */signed char) (unsigned char)79);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (~(min((62914560U), (((/* implicit */unsigned int) ((arr_16 [(_Bool)1] [i_3] [i_3]) / (((/* implicit */int) (signed char)57)))))))));
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3])), (((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2])) % (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 2]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) arr_21 [i_1 + 3]);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [i_1] [i_1 + 3] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 3] [i_1 + 2]))) : ((-(var_8)))))) * (281474976448512LL)));
        }
        for (int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((short) (_Bool)1));
                        var_25 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) (signed char)62)), (arr_16 [i_1] [(signed char)4] [i_7]))) + (2147483647))) >> (((/* implicit */int) arr_15 [i_1] [i_6] [i_1] [i_8]))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)160))))), (min((((((/* implicit */_Bool) 7U)) ? (281474976448512LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32211))))), (((/* implicit */long long int) ((short) 361204005U))))))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned long long int) var_9)))));
        }
    }
    for (long long int i_9 = 1; i_9 < 12; i_9 += 3) 
    {
        var_28 += arr_14 [i_9] [i_9 + 2];
        var_29 |= ((/* implicit */short) (~(((/* implicit */int) (short)15945))));
        arr_33 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) arr_19 [i_9] [(unsigned char)12] [i_9] [2LL])), (min((arr_16 [i_9] [i_9] [(_Bool)1]), (((/* implicit */int) (short)15945))))))) ? ((+(((/* implicit */int) (unsigned char)89)))) : (((/* implicit */int) (unsigned char)62))));
    }
    var_30 = ((/* implicit */short) (~(min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (signed char)57)))))))));
}
