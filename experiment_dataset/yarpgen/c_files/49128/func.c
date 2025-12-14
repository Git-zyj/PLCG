/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49128
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
    var_16 ^= ((/* implicit */int) var_6);
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) min((13065529575509695694ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-((~(min((1796756529), (arr_5 [i_0] [12] [12] [i_3]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)6)) ^ (((/* implicit */int) var_11))))))));
                            var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_9)))));
                            var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)18110)))));
                            var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((arr_7 [1LL] [i_1] [i_2] [i_2] [i_3] [15]), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_1))));
                        }
                        var_22 *= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_1 [12ULL] [(unsigned short)1])) || (var_2))) && (((/* implicit */_Bool) -1503114446)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((unsigned long long int) var_4))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((-(min((((/* implicit */unsigned long long int) var_12)), (var_1))))) == (var_1))))));
}
