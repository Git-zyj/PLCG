/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229848
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
    var_20 = ((/* implicit */unsigned int) ((signed char) (+((+(((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -8973201191262910844LL))) & (((/* implicit */int) (short)24543))))) ^ (var_17)));
    var_22 = ((/* implicit */signed char) -1645676276);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1645676276)))))) >= ((((_Bool)0) ? (((/* implicit */long long int) -1645676262)) : (var_17))))))) : (((max((((/* implicit */long long int) (unsigned char)126)), (var_5))) << (((((((/* implicit */unsigned long long int) 391743262)) + (arr_6 [i_0] [i_1]))) - (12707823651133764446ULL))))))))));
                arr_7 [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1645676277)) ? (5495971843293189992LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))));
                var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)33824)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] [(signed char)5] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)13464)))) == (-551247401)));
                    arr_11 [i_2] = ((/* implicit */unsigned short) (!(((_Bool) arr_3 [i_0 + 1]))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_2 - 3] [(unsigned short)8])) % (1645676287)))));
                }
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_6 [i_0] [i_0]))));
                    arr_15 [i_3] [i_1 - 2] [i_3] = ((/* implicit */unsigned short) 2147483647);
                }
                for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    arr_18 [i_0 - 1] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_4 - 1]))));
                    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (arr_17 [i_0 - 2] [i_1] [i_4] [i_4 + 2]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7760473599386381051LL)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_0))))))))) >= (max((((14690072310316814484ULL) << (((((/* implicit */int) arr_8 [i_4])) - (11))))), (((/* implicit */unsigned long long int) 1366091040U)))));
                }
                for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    arr_23 [i_5] [i_1 - 2] [i_0] [i_5] = ((/* implicit */unsigned int) (+(-8094317811243745502LL)));
                    var_27 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_6 [7LL] [i_5]))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)11980)))) - (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (1645676277) : (((/* implicit */int) (unsigned char)48))))) < (((long long int) arr_19 [i_0] [i_1] [i_5]))))))))));
                }
            }
        } 
    } 
}
