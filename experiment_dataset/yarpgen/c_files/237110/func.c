/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237110
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 7; i_4 += 3) 
                        {
                            var_10 *= ((/* implicit */int) (!(((((/* implicit */int) max((var_7), (var_2)))) == ((~(((/* implicit */int) var_6))))))));
                            var_11 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_12 = (-(((int) arr_3 [i_1] [i_1])));
                            var_13 = ((/* implicit */long long int) (!(var_5)));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */long long int) 13453906104175641218ULL);
                            arr_18 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_2))))));
                        }
                        arr_19 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                        var_14 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                        var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1027507765)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */long long int) 1027507765)), (2312730300812336457LL)))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min(((+(((3991018474U) >> (((arr_15 [i_0] [i_1] [i_1] [i_1] [i_1]) - (1264059186))))))), (((/* implicit */unsigned int) var_6)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((0) <= (((/* implicit */int) arr_24 [i_6]))))) >> (((min((2334036398U), (((/* implicit */unsigned int) (short)932)))) - (909U)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)2046)), (((int) (short)32759))))) ? (((min((arr_22 [i_6]), (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_6]), (((/* implicit */short) (_Bool)1)))))) : (max((1935901748505190337ULL), (((/* implicit */unsigned long long int) arr_24 [i_6])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_1)))) >> (((((var_5) ? (1420343038) : (((/* implicit */int) arr_23 [i_6] [i_6])))) - (31499)))))))))));
    }
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */long long int) var_1);
}
